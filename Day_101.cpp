
// **** DAY 101 - Static Data Members | Static Member Function | Encapsulation | Abatraction ***

#include <iostream>
#include <math.h>
using namespace std;

/*
Static Data Member - Staic Member Function
- They are sttributes of class
- they are declared using static keyword inside the class
- it is common copy for all objects
- Static member function is used to access static data members only with help of class

*/

class customer
{
    // here name , accNo and bal is encapsulated in the data
    // it is declared under private access modifier
    string name;
    int accNo, bal;

    // Static Data Member
    static int totCus;
    static int totbal;

    // constructor to initialize the object
public:
    customer(string name, int accNo, int bal)
    {
        this->name = name;
        this->accNo = accNo;
        this->bal = bal;
        totCus++;
        totbal += bal;
    }

    // Static member function
    //  it only able to access static member functions

    static void accesStatic()
    {
        cout << "Total Customers : " << totCus << endl;
        cout << "Total Balance : " << totbal << endl;
    }

    // function to deposite amount in bal
    void deposite(int amount)
    {
        if (amount > 0)
        {
            bal += amount;
            totbal += amount;
        }
        else
        {
            cout << "Please Enter Valid Amount !!" << endl;
        }
    }

    void withdraw(int amount)
    {
        // here we mentioned condition on bal which is declared in private in the class
        if (amount <= bal)
        {
            bal -= amount;
            totbal -= amount;
        }
        else
        {
            cout << "Please Enter Valid Amount !!" << endl;
        }
    }

    void disp()
    {
        cout << name << " " << accNo << " " << bal << " " << totCus << endl;
    }

    // function which gives total number of customers
    void tot()
    {
        cout << "Total Customers : " << totCus << endl;
    }
};

// initialization of totcus with zero
int customer ::totCus = 0;
// initialization of totbal with zero
int customer ::totbal = 0;

int main()
{

    // creating object A
    customer A("Rohit", 233, 3000);
    A.disp();
    // at last 1 is the count of customers

    cout << "After Class A" << endl;
    A.tot();

    customer B("Mukesh", 235, 5500);
    B.disp();

    customer C("Rakesh", 238, 1500);
    C.disp();

    C.tot();

    // static memeber function calling
    customer::accesStatic();

    C.deposite(500);

    B.withdraw(1000);

    customer::accesStatic();

    /*
    const keyword is used to make constant variables
    */
    // const float  pi = 4.55;
    // pi += 10; // we cannot able to chane its value
    // cout<<pi<<endl;

    /*
    Encapsulation

    - Wrapping up of data and information in single unit
    while controlling access to them
    - make the variable in class private and access it only through functions
    - so data is hidded to avoid accidental changes from user side

    */

    /*
    Abstraction

    - Displaying only essential information to the user
    - and actual implementaion hidden
    - ex - pow(x, y) - we can use this function using including math.h library in which actual implementation
      of pow() function is hidded
    - sort(arr.begin() , arr.end())

    */

    cout << "Power function calculation : " << pow(2, 4) << endl;
}