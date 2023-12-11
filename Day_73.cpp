#include<iostream>
using namespace std;

void n2print(int num , int N)
{
    if(num == N)
    {
        cout<<N<<" ";
        return;
    }
    cout<<num<<" ";
    n2print(num+1 , N);
}

void n1print (int num)
{
    if(num == 1)
    {
        cout<<1<<" ";
        return;
    }
    n1print(num-1);
    cout<<num<<" ";

}


void n2evenprint(int num , int N)
{
    if(num > N)
    {
        return;
    }
    cout<<num<<" ";
    n2evenprint(num+2 , N);
}


void n1evenprint (int N)
{
    if(N == 2)
    {
        cout<<2<<" ";
        return;
    }
    n1evenprint(N-2);
    cout<<N<<" ";
}

int main()
{

//  ***Day 73 - Problems on Recursion***

// *Problem - Print 1 to N;

// int N;
// cin>>N;

/*
// # Iterative method
for (int i = 1; i <= N; i++)
{
    cout<<i<<" ";
}
*/

// # using recursion - passing two parameters

// n2print(1 , N );
// here num is constant 1 and N is changing so we can solve it by passing only one parameter


// # Using recursion - Passing only one parameter

// n1print(N);


// *Problem - print 1 to N (even numbers)

/*
// # Iterative method
for (int i = 1; i <= N; i++)
{
    if(i%2 == 0)
    cout<<i<<" ";
}
*/

// # using recursion - passing two parameters

// n2evenprint(2 , N );
// here num is constant 1 and N is changing so we can solve it by passing only one parameter


// # Using recursion - Passing only one parameter
int M;
cin>>M;
if(M %2==1)
M--;
// to make M even
n1evenprint(M);


}