
//  **** DAY 100 - Constructor and Destrucor in c++ ******

#include <iostream>
using namespace std;

// constructor and destructor are declared in the class body

class student
{
    string name;
    int roll, age;

public:
    // Default constructor - syntax - class_name(){}
    student()
    {
        cout << "Constructor is called" << endl;
    }

    // /*
    // Parametarized constructor
    student(string a, int b)
    {
        name = a;
        roll = b;
    }
    // */

    /*
    // Parametarized constructor - with same name of the variables - this-> keyword is used to store the data
        student(string name , int roll)
        {
            this->name = name;
            this->roll = roll;
                    // OR
            // (*this)name = name;
            // (*this)roll = roll;
        }
    */

    // display function
    void disp()
    {
        cout << name << " " << roll << " " << endl;
    }

    /*
    Constructor Overloading -
    - When we declare multiple constructors of different types then
     it is known as constructor overloding
    - here defaul constructor , parametarized constructor are used so it constructor overloading
    */

    // Inline constructor
    // syntax - inline ClassName(parameters): name(a), roll(b) , age(b){}

    inline student(string a, int b, int c) : name(a), roll(b), age(c)
    {
    }

    // it is used to print all 3 parameters
    void printall()
    {
        cout << name << " " << roll << " " << age << endl;
    }

    //  Copy constructor - it is used to copy data from one constructor to another
    student(student &c)
    {
        name = c.name;
        roll = c.roll;
        age = c.age;
    }

    // **Destructor - it is the last function to be called before function get destroyed **

    // The default destructor function get automatically called after ending of main function
    // it releases all memory which are used while executing the program
    // it is declared using ~ClassName(){}
    // Default destructor
    ~student()
    {
        cout << "Destructor is called at last" << endl;
    }

    // we can also create destructor which is used to release all memory in heap and stack which is used
};

int main()
{
    // default constructor is called before creation of object
    student s0;

    // object of class student s1
    student s1("Rahul", 17);

    s1.disp();

    // parameterized constructor
    student s2("soham", 55);
    s2.disp();

    // inline constructor
    student s4("Mahesh", 23, 15);
    s4.printall();

    // copy constructor - data from s4 get copid in s5
    student s5(s4);
    cout << "Object s5 is: " << endl;
    // then s2 becomes
    s5.printall();

    // another method to copy data
    s2 = s1;
    cout << "After copying s1 object s2 becomes : " << endl;
    s2.disp();

    // here we created s1 , s2 , s4 , s5 and s0 objects so for each object destructor is called at the end
    //  so it is called 5 times
}