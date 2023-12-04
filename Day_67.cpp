#include<iostream>

using namespace std;

int main()
{

// *** Day 67 - DYNAMIC MEMORY ALLOCATION IN ARRAYS***

// stack memory is a default memory allocation

//  Heap memory allocation for variable
// here new is used

int *ptr = new int;

*ptr = 10 ;//value assigned to heap variable
cout<<ptr<<endl; //address
cout<<*ptr<<endl; //value


float *ptr1  = new float;
*ptr1 = 3.79;
cout<<ptr1<<endl; //address
cout<<*ptr1<<endl; //value

// making size of array variable using heap
// Dynamic memory allocation - new

int n ;
cout<<"Enter size of array: ";
cin>>n;

// creating array in heap memory
int *p = new int[n];

// inserting values in array
for(int i=0; i<n; i++)
p[i] = i+1;

// printing array
for(int i=0; i<n; i++)
cout<<p[i]<<endl;

// delete keyword use - it is used to release the memory from heap
// it deletes memory allocated in heap only
delete ptr;
delete ptr1;
delete[] p;

// vector uses dynamic memory allocation

}