#include<iostream>

using namespace std;

void swap(int *p1 , int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{

// cout<<"Hello I am Back !!"<<endl;

// *** DAy 65 - Pointers with character Array ***

/*

char ch[5] = "1234";

char *pt2 = ch;
// cout<<ch<<endl;
// cout<<pt2;
// but as per pointer here address will be returns not actial value

// here in string its implementation in different so it print value instead address

// we can print the address of char using void typecasting
cout<<"Address of char is : "<<endl;
cout<<(void*)ch<<endl;
cout<<(void*)pt2;



char name = 'a';
cout<<name<<endl;

char *ptr = &name;
cout<<ptr<<endl;

cout<<"address is : "<<endl;
cout<<(void*)ptr<<endl;
cout<<(void *)name<<endl;
cout<<(void *)&name<<endl;

*/

/*
// Functions with Pointer - call by pointer 

int a = 10;
int b = 30;

swap(&a , &b); //function to swap two numbers

cout<<"After swapping : "<<endl;

cout<<"Value of a is : "<<a<<endl;
cout<<"Value of b is : "<<b<<endl;
// swapping can we also performed using passed by reference &
// we used pointer without pointer swap function does not work
*/

// Reference variable - another name of variable

int n = 17;
int &temp = n;  //here temp is reference variable
// both n and temp pointing same value

cout<<"Value of n is: "<<n<<endl;
cout<<"Value of temp is: "<<temp<<endl;

temp++;
cout<<"Value of n is: "<<n<<endl;

cout<<"Both temp and n have same aadress"<<endl;
cout<<"Value of n is: "<<&n<<endl;
cout<<"Value of temp is: "<<&temp<<endl;

// use pass by reference for string and vector
// use pass by pointer for array and string for convinienc



}