#include<iostream>

using namespace std;

int main()
{

// cout<<"Hello , Coder army"<<endl;

//  ****** Day 50 - Introducation to Strings ******

// String uses dynamic memory allocation in HEAP

//  string using character array
char arr[] = {'a' , 'p' ,'p' ,'l','e'};

// print
// cout<<arr;

/*
// print using for loop
for (int i = 0; i < 5; i++)
{
    cout<<arr[i];
}

*/

/*
// Declaring size character array

char name[10];
cin>>name;
cout<<name;
// here we can only input 9 elements /character bcoz last space is stored for null char \0

*/

// initialization and declaration of string
// string s = "Coder";
// cout<<s;

/*

// taking string from user as input
string n1;
cin>>n1;
cout<<n1;
// when we enter any space between character then it takes space as null character 
// and print upto space ex - Rohit Pawale it only prints Rohit
*/
 
//  string s3 = "Rohit Pawale";
// cout<<s3;

/*
// to solve above problem of space
string st;
getline(cin , st); //this function is used
cout<<st<<endl;
cout<<"Size of str is : "<<st.size(); //it gives 10
*/

/*
// to find size of string
string str = "Programmer";

cout<<"Size of str is : "<<str.size(); //it gives 10
*/

/*
// Adding two strings

string str1 = "He";
string str2 = "llo";
string str3 = str1 + str2;
cout<<str3;
*/

/*

// use double quotws in output

// string str = "He is a "Good" boy ";
// cout<<str;
// it throws error bcoz it is not valid

// here we have to use escape character (\) to print next char directly

string str = "He is a \"Good\" boy ";
cout<<str<<endl;
// it does not throws error bcoz we used escape character

string str4 = "\\";
cout<<"Printing escape character: "<<str4;

*/

/*
// # Problem - Reverse the string

string n3 ;
cout<<"Enter an string : ";
cin>>n3;
// reverse an string 
int s = 0 , e = n3.size() -1;

while (s < e)
{
    swap(n3[s] , n3[e]);
    s++ , e--;
}
cout<<"Reversed string is: "<<n3<<endl;

*/

/*
// # Problem - find size of an string without using size() functio

string si ;
cout<<"Enter an string : ";
cin>>si;
int size = 0; //initialize size with 0
while ( si[size] != 0)
{
    size++;
}

cout<<"Size of string is : "<<size<<endl;

*/

// # To check string is palindrome or not

string cp ;
cout<<"Enter an string : ";
cin>>cp;
// reverse an string 
int s = 0 , e = cp.size() -1;

while (s < e)
{
    if (cp[s] != cp[e])
    {
    cout<<"Not a pallindrome"<<endl;
    return 0;
    }
    s++ , e--;
}
cout<<"is a pallindrome"<<endl;



}