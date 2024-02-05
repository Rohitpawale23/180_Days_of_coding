
// *** DAY 108 - Exception Handling ***

#include <iostream>
#include <exception>
using namespace std;

/*
Exception Handling
- Compile Time error - errors at compile time syntax
- Run time - error at run time

Exception is an unexpected problem that arrieses during the execution
 of a program and our progrm terminates suddenly
  with some issues / errors


Try -
It represents the block of code that may throw an exception
placed inside the try block

Catch -
when particular statement is thrown from try block
the code to handle the exception is written under the Catch block

Throw -
When an program encounters an throw statement then it immediately terminates
the current function and starts finding a matching catch block to handle the
throw exeption.

*/

class customer
{
    string name;
    int accno, bal;

public:
    customer(string name, int accno, int bal)
    {
        this->name = name;
        this->accno = accno;
        this->bal = bal;
    }

    // deposite
    void deposite(int amount)
    {
        if (amount > 0)
        {
            bal += amount;
            cout << "Amount " << amount << " rs is Credited successfully " << endl;
        }
        // Exception Handling method -1
        else
        {
            cout << "Please Enter an valid amount " << endl;
        }
    }

    // withdraw
    void withdraw(int amount)
    {

        if (amount <= bal && amount < 0)
        {
            bal -= amount;
            cout << amount << " rs is Debited Successfully" << endl;
        }
        // Exception Handling - Meehtod 2
        // throw , try and catch
        else if (amount < 0)
        {
            throw "Please Enter a Valid amount !!";
        }
        else if (amount > bal)
        {
            throw "Insufficient Balance !!";
        }
    }
};

int main()
{

    // cout<<"Hello Coder Army"<<endl;
    customer c1("Rakesh", 23, 9000);
    c1.deposite(100);

    // here we got exception it does not return anything
    // to avoid this handle this condition in member function
    // c1.withdraw(10000);

    try
    {
        c1.deposite(200);
        c1.withdraw(300);
        // their is an exception in below condition
        c1.withdraw(50000);
    }
    catch (const char *e)
    {
        cout << "Exception Occured : " << e << endl;
    }
    // Default Exception
    catch (...)
    {
        cout << "Exception Occured " << endl;
    }

    try
    {
        int *p = new int[1000000000000000];
        cout << "Memory Allocation is successfull" << endl;
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception Occured due to line 114 : " << e.what() << endl;
        ;
    }

    // here Exception is a class
}