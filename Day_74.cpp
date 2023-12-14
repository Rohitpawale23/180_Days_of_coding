#include<iostream>
using namespace std;

// factorial of a number
int fact(int num)
{   
    // base case - factorial of 0 is 1
    if(num == 0)
    {
        return 1;
    }
    return num*fact(num-1);
}

// sum of first N natural numbers
int sfnatural(int N)
{
    // base condition
    if(N == 0)
    {
        return 0;
    }
    if (N ==1)
    {
        return 1;
    }
    return N+sfnatural(N-1);
}

// Power of n
// n is base and m is index - n raise to m
int powerof(int n  , int m)
{
    // base condition
    if(m == 1)
    {
        return n;
    }
    return n*powerof(n , m-1);
}

// Sum of first n natural numbers
int sqsum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return (n*n) + sqsum(n-1);
}

int main()
{

// cout<<"Hello Coders!!"<<endl;

// *** Day 74 - Solving Recursion Questions ***


// # Problem(1) - Factorial of a number

int num = 5;

/*
// iterative method
int fact =1;
for(int i=1; i<=num; i++)
{
    fact *= i;
}
cout<<"Factorial of nums is: "<<fact<<endl;
*/

/*
// using Recursion 
cout<<"Factorial of number is: "<<fact(num);
*/



//  #Problem(2) - Sum of First N natural numbers

int N = 5;

/*
// iterative method
int sum =0;
for(int i=1; i<=N; i++)
{
    sum += i;
}
cout<<"Sum of first "<<N<<" Natural numbers is :"<<sum<<endl;
*/

/*
// Recursive method

cout<<"Sum of first "<<N<<" Natural numbers is :"<<sfnatural(N)<<endl;
*/


// #Problem(3) - Power of 2;

int m = 10;

/*
// iteration method
int pow = 1;
for(int i=1; i<=m; i++)
{
    pow *= 2; 
}
cout<<pow<<endl;
*/

/*
// Recursive method

cout<<"power of 2 is : "<<powerof(2 , m)<<endl;
*/


//  # Problem(4) - Sum of Square of First K natural numbers

int k = 5;

/*
// iterative method
int ans =0;
for(int i=1; i<=k; i++)
{
    ans += i*i;
}
cout<<ans<<endl;
*/


// Recursive method

cout<<"sum of square of first "<<k<<" Natural no. is: "<<sqsum(k);

}
