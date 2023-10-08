#include <iostream>
using namespace std;

int main()
{

    // ******** Day 17 - Solving 7 Leetcode Questions*************

    /*
    // (1) Add digits in numbers
    // Here condition is answer consist of only one digit two or more digit number not allowed
    int num;
    cout<<"Enter a number to add the digits:";
    cin>>num;

    while (num > 9)
    {
        int ans = 0, rem;
    while (num > 0)
    {
        // remender
        rem = num % 10;
        // divide num by 10
        num = num / 10;
        ans = ans + rem;
    }
    num = ans;  // value of ans get stored in num for further update
    }
    cout<<"Addition is:"<< num <<endl;
    */

/*
    // (2) Leep Year
    // first condition of leap year is number is divisible by 400
    // another condition is year is year is divisible by 4 and not divisible by 100
    int yr;
    cout << "Enter a year to check leap or not:";
     cin >> yr;
    if (yr % 400 == 0)
    {
        cout<<"Leap year"<<endl;
    }
    else if (yr % 4 == 0 && yr % 100 != 0)
    {
        cout<<"Leap year"<<endl;
    }
    else
        cout<<"Not a Leap year"<<endl;
        */

/*
// (3) reverse integer
int no;
cout<<"Enter a numeber:";
cin>>no;
int ans1 = 0;
int r;
while (no )
{
    r = no % 10;
    no = no /10;
    ans1 = ans1 * 10 + r;
   
}
 cout<<"Reversed integer is:"<< ans1 ;
*/

/*
// (4) Power of 2
int n1;
cout<<"Enter a no to check power of 2:";
cin>>n1;
if (n1<1)
{
    cout<<"Not a power of 2"<<endl;
}
int flag;
while ( n1!= 1)
{
    if (n1 % 2 == 1)
    {
       flag = 0;
    }
    n1 = n1/2;
}
if (flag == 0)
{
    cout<<"Not a power of 2"<<endl;
}
else
cout<<"number is power of 2"<<endl;
*/

/*
// Homework
// (5) square root of x
int n2;
cout<<"Enter a no to print square root: ";

 int an = (n2 ** 0.5);
 cout<<"Square root is "<<an<<endl;
*/


// (6) number is Pallindrome or not
/*
int num1;
cout<<"Enter a number to check pallindrome:";
cin>>num1;
int a3 = num1 , r3 , ans4 = 0;
if(num1 <1){
cout<<"Not pallindrome"<<endl;
}
while (num1)
{
    r3 = num1 % 10;

    num1 = num1 /10;

    ans4 = ans4 * 10 + r3;
}
if (ans4 == a3)

    cout<<"Number is pallindrome"<<endl;
else
cout<<"Number is not  pallindrome"<<endl;
*/

/*
// (7) complement of a number
int n5;
cout<<"Enter a number to get compliment:";
cin>>n5;
int rem4;
int an4 = 0;
int m4 = 1;
while (n5)
{
    rem4 = n5 % 2;

    rem4 = rem4 ^ 1;

    n5 = n5 /2;
     an4 = an4 + rem4 * m4;
     m4 = m4 * 2;
}
cout<<an4<<endl;
*/
// leetcode




}