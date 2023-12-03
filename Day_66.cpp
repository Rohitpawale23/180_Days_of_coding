#include<iostream>
using namespace std;

int main()
{

// *** Day 66 - Double and multiple Pointers in C++ ****


    int n =12;
    int *p1 = &n; //single pointer
    int **p2 = &p1; //Double pointer
    int ***p3 = &p2; //Triple pointer

    // // Addresses of pointers
    // cout<<p1<<endl;
    // cout<<&p1<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;
    // cout<<&p3<<endl;

/*


// Modifying value of n using these pointers
cout<<n<<endl;
// single pointer
*p1 = *p1 + 5; //5 gets added in n
cout<<n<<endl;
// Duoble Pointer
**p2 = **p2 + 10; //10 gets added in n
cout<<n<<endl;

// Triple Pointer
**p2 = **p2 + 10; //10 gets added in n
cout<<n<<endl;

*/



}