#include<iostream>
using namespace std;

// ******** Day 18 - Functions in C++***********

// function to add two numbers
int add(int a, int b ) //Function declaration 
// function defining 
{
int ans;
ans = a+b;
return ans;
}

// function to multiply two numbers
void mul(int a, int b ) //Function declaration 
// function defining 
{
int ans;
ans = a*b;
cout<<"Multiplication is: "<< ans<<endl; 
}

// to print factorial
int facto(int num){
int ans = 1;
for (int i = 1; i <= num; i++)
{
    ans = ans * i;
}
return ans;
}


// to print factorial using void type
void facto1(int n1){
int ans1 = 1;
for (int i = 1; i <= n1; i++)
{
    ans1 = ans1 * i;
}
cout<<"Factorial is: "<<ans1<<endl;
}


// to return no is prime or not
bool isprime(int n){
if (n< 2)
{
    return 0;
}
for (int i = 2; i < n; i++)
{
    if (n % i == 0)
    {
        return 0;
    }
    else
    return 1;
}
}

// to print no is prime or not using void type
void isprime1(int n){
    int flag;
if (n< 2)
{
    cout<<"Not a Prime"<<endl;
    return;
}

for (int i = 2; i < n; i++)
{
    if (n % i == 0)
    {
         flag = 1;
    }
}
if (flag == 1)
{
     cout<<"Not a Prime"<<endl;
}
else
            cout<<"it is Prime"<<endl; 

}


//  void type function - it is a empty function it does not retuns any value
void func(){
    cout<<"Hello, Connections"<<endl;
}

// it does not work bcoz here variable stored pass by value type 
void swap(int a ,int b){
    int c;
    a = c;
    a = b;
    b = c;
}

// it works bcoz here variable stored pass by reference type 
void swapNew(int &c ,int &d){
    int b;
    b= c;
    c = d;
    d = b;
}

// there is a function overloading in which functions are same 
// but they have different parameters

// swapping of float data type
// it works bcoz here variable stored pass by reference type 
void swapNew(float &a ,float &b){
    float c;
    c = a;
    a = b;
    b = c;
}

int main(){

/*
int a , b;
cout<<"Enter two numbers to add:";
cin>>a >>b;
cout<<"Addition is: "<<add(a,b)<<endl;  //function call
*/

/*
int a1 , b1;
cout<<"Enter two numbers to multiply:";
cin>>a1 >>b1;
mul(a1,b1);  //function call
*/

/*
int num;
cout<<"Enter a no to get factorial:";
cin>>num;
cout<<"Factorial is: "<< facto(num)<<endl;
*/

/*
// 1 - it is prime no , 0 - Not a prime no
int n1;
cout<<"Enter a number to check prime:";
cin>>n1;
cout<<isprime(n1)<<endl;
*/

// func();
// it prints Hello, Connections

/*
// Multiple Operations
int A ,B;
cout<<"Enter a values: ";
cin>> A >> B;

// A is prime or not
isprime1(A);

// factorial of A
facto1(A);

// B is prime or not
isprime1(B);

// Factprial of B
facto1(B);

// B-A is prime or not
isprime1(B-A);

// factorial of B-A
facto1(B-A);
*/

/*
// swapping of two numbers 
int c , d;
cout<<"Enter two no for swap:";
cin>> c>> d;
swapNew(c,d);
cout<<"After Swapping: "<< c<<" "<<d;
*/

/*
// swapping of floating datatypes 
float c1 = 3.67, d1 = 9.23;
swapNew(c1,d1);
cout<<"After Swapping: "<< c1 <<" "<<d1;
*/



}