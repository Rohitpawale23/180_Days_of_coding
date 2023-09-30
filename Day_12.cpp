#include <iostream>
using namespace std;



int main(){

//  ********* Day12 - Operators in one shot ********************

// ##Arithmatic operators##

//  + , - , / . *. %
/*
cout<< 2*3 - 4;
cout<<23.44/4 << endl;
cout<<2.33 * 11;
*/


// ##Comparision operator Relational operators##
// returns ans in 1 and 0
//  < , >, ==, <=, >= , !=

/*
int a = 10;
int b = 5;
cout<< (a > b)<<endl;
cout<< (a < b)<<endl;
cout<< (a == b)<<endl;
cout<< (a != b)<<endl;
*/


// ##Logical Operators##
// && and , || or , ! nor
/*
cout<<(1 && 1) << endl;
cout<<( !1) << endl;
cout<<( !0) << endl;
cout<<( 1|| 0) << endl;
*/

/*
int a, b, c;
cin>>a >> b >>c;
if (a>b && a>c)
{
        cout<<"YES";
    
}
else
cout<<"NO";
  */

/*
//check vowel or consonent
char n;
cout<<"Enter a character "
cin>>n;

if ( n == 'A' || n == 'E' || n == 'I' ||n == 'O' ||n == 'U' ||n == 'a' || n == 'e' ||n == 'i' ||n == 'o' ||n == 'u')
{
   cout<<"Vowel";
}
else
cout<<"Consonent";
*/


// ##Bitwise operators ##
// it converts firsst decimal to binary
// & , | , ^ , ~ , << , >>
// bit by bit operator
// cout<<(2&3) <<endl; // And - first decimal get converted into binary and then operation starts
// cout<<(2|3)<<endl;  // OR  
// cout<<(2^3)<<endl;  // XOR 

/*
// << left shift  = num*2**X
int ans = 2<<3;
cout<< ans <<endl;

// >> left shift  - num/2**X
int ans1 = 2>>3;
cout<< ans1 <<endl;

int a = ~4;
cout<<a <<endl;

int b = ~-4;
cout<<b<<endl;
*/


}



