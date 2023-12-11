#include<iostream>
using namespace std;


void fun0(int n)
{
     cout<<"Happy Birthday!!\n";
}

void fun1(int n) 
{
     cout<<n<<" Days left for Birthday\n";
    fun0(n-1);
}


void fun2(int n)
{
     cout<<n<<" Days left for Birthday\n";
    fun1(n-1);
}

void fun3(int n)
{
     cout<<n<<" Days left for Birthday\n";
     fun2(n-1);
}

void singlefun(int n)
{
    if(n == 0)
    {   
        // base case - without this program runs infinitely - segmentation fault occurs in output
        cout<<"Happy Birthday!!\n";
        return;
    }
     cout<<n<<" Days left for Birthday\n";
    singlefun(n-1); //function calling itself again and again
}

void mfun(int n)
{
    // base case
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    mfun(n-1);
}


void evenfun(int n)
{
    // base case
    if(n==2)
    {
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    evenfun(n-2);
}

int main()
{
    
//  *** DAy 72 - Introduction To Recursion ***

int n = 3;

/*
// // Iterative approch
// for(int i=n; i>0; i--)
// {
//     cout<<i<<" Days left for Birthday\n";
// }
// cout<<"Happy Birthday !!"<<endl;
*/

/*
// Using Functions / Recursion
fun3(3); 
  //only calling one function
// fun2(2);
// fun1(1);
// fun0(0);
*/

/*
// if value of n is large so we have to write large functions
// to avoid this we can print required o/p using recursion
// function calling itself again and again untill a specific condition
// we can print o/p using only single function - one function
singlefun(5);
*/

// Problem - print m to 1
int m=6;

/*
// -iterative approch
for(int i=m; i>0; i--)
{
    cout<<i<<endl;
}
*/


// -Recursive approch
// mfun(m);


// Problem - print k to 2 - all even no. k is even
int k=8;

/*
// -iterative approch
for(int i=k; i>0; i=i-2)
{
    cout<<i<<endl;
}
*/


// -Recursive approch
evenfun(k);

}