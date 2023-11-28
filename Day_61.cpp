#include<iostream>
using namespace std;

int main()
{

// *** Day 61 - Pointers In C++ ***

// address of variable stored in binary form in memory 
// but while printing it get converted into hexadecimal form 

int a = 15;

// declaration of pointers 
int *ptr = &a;
//  ptr is a pointer which stores address of a 

cout<<"Value of a is - "<<a<<endl;

cout<<"Address of a is - "<<ptr<<endl;

cout<<"Address  of a by another method - "<<&a<<endl;

// dereferencing pointer - when we take pointer of pointer of pointer then it return value 

float b = 6.88;
// pointer for b
float *ptr2 = &b; 

// datatype of pointer and variable must be same

cout<<"Value of b is - "<<b<<endl;

cout<<"Address of b is - "<<ptr2<<endl;

// dereference pointer
cout<<"value of b using dereferencing  - "<<*ptr2<<endl;

// size of pointer
cout<<"Size of pointer is- "<<sizeof(ptr2)<<endl;

// size of pointer depends upon ram of system so it return 4 byte for 4 GB RAM

}
