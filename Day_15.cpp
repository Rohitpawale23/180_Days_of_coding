#include<iostream>
using namespace std;

int main(){

//  ********* Day 15 - while Loop in C++ ********************

//  initialize break and update
//  syntax

// while (break)
// {
    
    /* code 
     initialize and update
    */
// }

// print  1 to n using while loop
/*
int i = 1;  //initialization
int n;
cout<<"enter a number:";
cin>>n;
while (i<= n) // break condition
{
    
    cout<<i<<endl;
    i++; //update
}
*/

// print table of n
/*
int i = 1;
int n1;
cout<<"Enter a number:";
cin>>n1;
while (i<= 10)
{
    int ans = n1 * i;
    cout<<n1<<"*"<<i<<" = "<<ans<<endl;
    i++;
}
*/

/*
// Factors of n which completely divides n
int i = 1;
int n2;
cout<<"Enter a number:";
cin>>n2;
while (i <= n2)
{
    if (n2 % i == 0)
    {
        cout<<i<<" ";
    }
    i++;
}
*/

// Home work
/*
// 1) print even no fron 1 to n
int i = 1;
int no;
cout<<"Enter a number:";
cin>>no;
while (i <= no)
{
    if (i% 2 == 0)
    {
        cout<<i<<" ";
    }
    i++;
}
cout<<endl;
// 2) print odd no fron 1 to n
int j = 1;
int no1;
cout<<"Enter a number:";
cin>>no1;
while (j <= no1)
{
    if (j % 2 != 0)
    {
        cout<<j<<" ";
    }
    j++;
}
*/


//  ********* Day 15 - Do while Loop in C++ ********************

// first initialize then update and at last break condition

//  syntax

// initialize

// do
// {
    /* code 
    update
    */
// } while (/* break condition */);

/*
// print 1 to n using do while
int num;
cout<<"Enter a number:";
cin>>num;
int k = 1;
do
{
    cout<< k<<" ";
    k++;
} while (k <= num);
*/

/*
// print sum of 1 to n using do while
int num1;
cout<<"Enter a number:";
cin>>num1;
int sum = 0;
int l= 1;
do
{
    sum = sum + l;
    l++;
}
 
while (l <= num1);
cout<<sum; ;
*/


//  ********* Day 15 - Break and Continue statements ********************

/*
// break example 
//  o/p is 1 2 3 4
int g = 1;
while (g <= 10)
{
    if (g == 5)
    {
        break ; 
    }
    cout<<g <<" ";
    g++;
}
*/

/*
// continue example 
//  o/p is 1 2 3 5 6 7 8 9 10

for (int i = 1; i <= 10; i++)
{
    if (i == 4)
    {
        continue;
    }
    cout<<i<<" ";
    
}
*/


//  ********* Day 15 - Switch statements****************
// double and float can not used in  switch 
/**/
//  syntax

// switch (expression)
// {
// case /* constant-expression */:
//     /* code */
//     break;

// default:
//     break;
// }


/* 

// example using integer
int number;
cout<<"Enter a number:";
cin>>number;
switch (number)
{
case 1:
    cout<<"Monday";
    break;

case 2 :
    cout<<"Tuesday";
    break;
case 3 :
    cout<<"Wednesday";
    break;
case 4 :
    cout<<"Thursday";
    break;
case 5 :
    cout<<"Friday";
    break;
case 6 :
    cout<<"Saturday";
    break;            
case 7 :
    cout<<"Sunday";
    break;    
default:
    cout<<"Enter a valid number!!";
    break;
}
*/

/*
// example using char
char ch;
cout<<"Enter a character:";
cin>>ch;
switch (ch)
{
case 'm':
    cout<<"Monday";
    break;

case 't' :
    cout<<"Tuesday";
    break;
case 'w' :
    cout<<"Wednesday";
    break;
case 'T':
    cout<<"Thursday";
    break;
case 'f' :
    cout<<"Friday";
    break;
case 's' :
    cout<<"Saturday";
    break;            
case 'S':
    cout<<"Sunday";
    break;    
default:
    cout<<"Enter a valid character!!";
    break;
}
*/


//  ********* Day 15 - Scope of a variable****************

// variable having same name are not valid in same block
// Local and Global variable

/*
// generally , curly brackets separates the scope/block  of the variables
int n = 5;
int num = 10; //Global variable
if ( n ==  5)
{
    int num = 15;  // local variable 
    cout<<"Local variable is:"<< num <<endl;  //15
}
 cout<<"Global variable is:"<<num<<endl; //10

*/

}