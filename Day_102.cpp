
//  **** DAY 102 - INHERITANCE *****

#include <iostream>
using namespace std;

class temp
{
private:
    int a;

protected:
    int b;

public:
    int c;

    // function inside the class
    void fun()
    {
        a = 10;
        b = 80;
        c = 60;
    }
};

// Base or Parent class
class Human
{
    // private
    string religion, color;
    // here both religion and color are declared under private
    // so they are not accessable to external code as well as derived class

public:
    string name;
    int age, weight;
};

// Derived or child class of base class Human
class student : protected Human
{
private:
    int roll_no, fees;
    /*
    derived visual
    public:
    string name;
    int age , weight;
    */

    /*
    when sccess modifier is protected
    */
public:
    void fun(string n, int a, int b)
    {
        name = n;
        age = a;
        weight = b;
    }

    void disp()
    {
        cout << name << " " << age << " " << weight << endl;
    }
};

int main()
{

    /*
    Inheritance

     - The capability of class to derive property and characteristics
     from another class
     - the class which inheritates the property that class is called as child class
     or derived class
     - the class whose proprties are inheritated then it is called as parent class
     or base class

    Syntax to declared child or derived class

    class childName : accessModifier ParentClassName
    {

    };

    */

    temp student1;

    // student.a = 10; - it gives error bcoz a is declared private inside class

    // student.b = 20;  - it gives error bcoz b is declared protected inside class

    // it does not gives erro bcoz c is public
    student1.c = 100;

    // Accessing data through function within class is valid
    student1.fun();

    student A;

    // A.name = "Rohit";
    // it is invalid when name is protected or private type in class

    // A.name = "Rahul";
    // it is valid when name is public

    A.fun("Mukesh", 50, 45);
    /*
    it is valid becoz
    when base class variables are public and we are inheritate it
    with protected type in our derived class then
    it get stored in protrcted class of derived class

    as we know ,
    protrcted data cannot be accessed from outside code
    - but it can be accessed within function and derived class

    */

    A.disp();

    /*
    As name , age and weight are not elements of my student class
    - still we are able to access then becoz they are inheritated from base class Human

    */
}