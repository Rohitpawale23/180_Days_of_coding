
// **** DAY 99 - Introduction To Object Oriented Programming (OOPs) *****

#include <iostream>
using namespace std;

// Declaratioin of student class
// class is an user defined data type and
class student
{
public:
    string name;
    int age, roll_no;
};

class studentf
{
    //  no any access modifier is mentioned so it is private by default
    string name1;
    int age1, roll;
    string grade;

    // make setter and getter function private

    // Setter Functions
public:
    void setname(string s)
    {
        name1 = s;
    }

    void setage(int a)
    {
        age1 = a;
    }

    void setgrade(string s)
    {
        grade = s;
    }

    // Getter Function

    void getname()
    {
        cout << name1 << " ";
    }

    void getage()
    {
        cout << age1 << " ";
    }

    void getgrade()
    {
        cout << grade << " ";
    }
};

class a
{
    int b;
};

class temp
{
    int c;
    char m;
    int r;
};

/*
Their are 3 types of access modifiers
1. public
2. private - it is default
3. protected
*/

int main()
{

    // object of an class student - s1
    student s1;
    s1.name = "Rohit";
    s1.age = 21;
    s1.roll_no = 78;

    // printing elements in s1 object
    // cout<<s1.name<<" ";
    // cout<<s1.age<<" ";
    // cout<<s1.roll_no<<" ";

    /*

    // object of an class - s2
    student s2;
    s2.name = "Rahul";
    s2.age = 20;
    s2.roll_no = 65;

    // printing elements in s1 object
    cout<<s2.name<<" ";
    cout<<s2.age<<" ";
    cout<<s2.roll_no<<" ";

    */

    // object of class studentf which has setter and getter functions

    studentf s3;

    s3.setname("Rohit");
    s3.setage(22);
    s3.setgrade("A++");

    s3.getname();
    s3.getage();
    s3.getgrade();

    cout << endl;

    studentf s4;

    s4.setname("Rahul");
    s4.setage(77);
    s4.setgrade("A+");

    s4.getname();
    s4.getage();
    s4.getgrade();

    cout << endl;
    /*
    Size of class - Class does not take any space
    - Size of empty class is 1

    Size of Object
    - object takes size depending upon operating system


    */

    // object of class a
    a ob1;

    cout << sizeof(ob1) << endl;
    // it return 4 byte

    // object of class temp
    temp obj;

    cout << sizeof(obj) << endl;
    // it return 12 byte
    // becoz here padding is used to reduse the time of execution

    // Always declare first lower size data type in class ex - use char type variable before int type vriable
    //  it helps to reduce the space

    cout << endl;

    cout << "***Dynamic memory allocation for object***" << endl;

    student *m1 = new student;

    (*m1).name = "Mukesh";
    (*m1).age = 15;
    m1->roll_no = 19;

    cout << m1->name << " ";
    cout << m1->age << " ";
    cout << m1->roll_no << " ";
}