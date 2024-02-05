
//  ***** DAY 106 - Types Of Inheritance ********
// Single | Multilevel | Multiple | Hybrid | Heirarchical | Multipath

#include <iostream>
using namespace std;

// **** Single Inheritance ***

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void work()
    {
        cout << "I am Working" << endl;
    }

    // default constructor
    Human()
    {
        cout << "Hello Humans !" << endl;
    }
};

class student : public Human
{

    int roll_no;
    int fees;

public:
    // constructor
    student(string name, int age, int roll_no, int fees) : Human(name, age)
    {
        // this->name = name;
        // this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    // default constructor
    student()
    {
        cout << "Hello Student !" << endl;
    }

    void disp()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No. : " << roll_no << endl;
        cout << "Fees : " << fees << endl;
    }
};

// **** MultiLevel Inheritance ***

class person
{
protected:
    string name;

public:
    void intro()
    {
        cout << "Hello My Name is " << name << endl;
    }
};

class employee : public person
{

protected:
    int salary;

public:
    void sal()
    {
        cout << "My Salary is " << salary << endl;
    }
};

class manager : public employee
{
protected:
    string depart;

public:
    manager(string name, int salary, string depart)
    {
        this->name = name;
        this->salary = salary;
        this->depart = depart;
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << "Department : " << depart << endl;
    }

    void work()
    {
        cout << "I am Working in " << depart << endl;
    }
};

//  *** Multiple Inheritance ***

class Engineer
{
protected:
    string branch;

public:
    Engineer()
    {
        cout << "Hello , Engineers !" << endl;
    }

    void work()
    {
        cout << "I Have Specializatioin is : " << branch << endl;
    }
};

class Youtuber
{
public:
    int subscribers;

    Youtuber()
    {
        cout << "Hello , YouTubers !" << endl;
    }

    void contentC()
    {
        cout << "I have subscriber base of " << subscribers << " subscribers" << endl;
    }
};

class Startup : public Youtuber, Engineer
{
public:
    string name;

    Startup()
    {
        cout << "Hello , youngsters !" << endl;
    }

    Startup(string name, string branch, int subscribers)
    {
        this->name = name;
        this->branch = branch;
        this->subscribers = subscribers;
    };

    void disp()
    {
        cout << "Name :" << name << endl;
        cout << "Specialization :" << branch << endl;
        cout << "No. of Subscribers :" << subscribers << endl;
    }

    void showcase()
    {
        cout << "My Name is " << name << endl;
        work();
        contentC();
    }
};

int main()
{

    /*

    ***** Single inheritance *******
    - here class student inheritates properties from parent class Human
    - so it is a single inheritance
    */

    cout << "\n***** Single inheritance *******" << endl;

    student A1("Rakesh", 21, 40, 120000);

    student A2("Rahul", 22, 45, 130000);

    A2.disp();
    A1.disp();

    // it is accessible becoz it is declared under public in parent class
    A1.work();

    cout << "\n***** MultiLevel inheritance *******" << endl;

    /*
    *** MultiLevel Inheritance ***

    - Various child class inheritates properties from parent class
    - this process repeates for multile levels so it is known as multilevel inheritance
    - here , in above example class employee inheritated the properties from parent class - person
    - and class manager inheritates properties from employee class

    */

    manager M1("Mehul", 40000, "Finance");

    M1.show();
    M1.work();
    M1.intro();

    // M1.name = "Rishabh"; - it gives error becoz name declared under protected access modifier

    cout << "\n***** Multiple inheritance *******" << endl;

    /*
    *** Multiple Inheritance ***

    - Here , Child class inheritates properties from multiple parent class
    - this process repeates for multile times so it is known as multiple inheritance
    - here , in above example class startup  inheritated  properties from parent class - Youtuber and Engineer
    - As it inheritates properties from multiple classes so it is multiple inheritance

    */

    Startup S1("Anil", "CSE", 40000);

    Startup S2;

    S1.disp();

    S1.showcase();

    /*
    *** Heirarchical Inheritance ***

    **** it is opposite of multiple inheritance
    - Here , Multiple Child classes inheritates properties from Single base / parent class
    - this process repeates for multile times so it is known as Heirarchical inheritance
    Single parent class - Multiple child / derived classe

    - here , in above example class employee inheritated the properties from parent class - person
    - and class manager inheritates properties from employee class

    */
}