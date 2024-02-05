
// **** DAY 107 - Polymorphism and Virtual Function ****

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ** Function Overloading **
// function having same name but different no. of parameters required

class Area
{

public:
    // Area of circle = pi*r*r
    int CalArea(int r)
    {
        return 3.14 * r * r;
    }

    // Area of Rectamgle = length * Breadth
    int CalArea(int l, int b)
    {
        return l * b;
    }

    // Here function has same name but different paremeters are passed for different functions
    // so it is an example of function overloading
};

// *** Operator Overloading ***
// - here operators are used in many forms to perform many tasks/ functions

// it is used for storing complex numbers and performing operations on them
class complex
{
    int real, img;

public:
    // Default constructor
    complex()
    {
    }

    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void disp()
    {
        cout << real << " + i" << img << endl;
    }

    // Operator as a Function
    // here we can able to access private data members bacause function is declared within the class
    complex operator+(complex &c)
    {
        complex ans;

        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

//  **** Virtual Function ***
// virtual keyword is used to create virtual function
// it allows to select the calling function at run time

class Animal
{
public:
    // virtual keyword is used
    virtual void speak()
    {
        cout << "HuHuHu\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark\n";
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow\n";
    }
};

// *** Pure Virtual Function OR Abstract Class ***
// the class which cannot able to create object is known as abstract class
//  Car is Abstract class
class Car
{
public:
    // it is a Pure virtual function
    virtual void color() = 0;
};

int main()
{
    cout << "Example of Function Overloading" << endl;

    Area A1, A2;

    cout << "Area of Circle" << endl;
    // area of circle is printed becoz only one argument is passed which is radius
    cout << A1.CalArea(5) << endl;

    cout << "Area of Rectangle" << endl;
    // area of Rectangle is printed becoz two arguments are passed which are length ans bredth
    cout << A1.CalArea(5, 10) << endl;

    cout << "\n\nExample of Operator Overloading" << endl;

    complex C1(3, 4); // representation of complex no. is 3+i4

    complex C2(5, 6);
    // Function for printing
    C1.disp();
    C2.disp();

    cout << "Addition of two complex numbers: " << endl;
    complex C3 = C1 + C2;
    C3.disp();

    cout << "\n\nExample of Virtual Function" << endl;

    // Dynamic memory allocation

    Animal *p;     // pointer of base class to access function in child class when function is overwrited
    p = new Dog(); // object dog

    // when virtual keyword is not used then it prints HuHuHu in output
    //  BUt when we use virtual keyword in our animal class then output is Bark which is required otput
    p->speak(); // Function call

    // Alternate method to print without pointer
    // Dog d1;
    // d1.speak();

    // But we use pointers for its features

    cout << "In the Vector ---" << endl;
    Animal *c;
    vector<Animal *> animals;

    // our problem is extract each address from the vector
    // and return the speak function for corresponding class
    // here it is complicated to use static memory allocation so pointer is used

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for (int i = 0; i < animals.size(); i++)
    {
        c = animals[i];
        c->speak();
    }

    // if we are trying to make object of Car class
    //  it gives error becoz it is an abstract class
    // Car obj1;
}