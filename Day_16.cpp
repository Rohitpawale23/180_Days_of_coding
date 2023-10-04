#include <iostream>
using namespace std;

int main (){

// ******Day 16 - Conversions ******

// Decimal to Binary 
/*
// first approch
int num;
cout<<"Enter a decimal number:";
cin>>num;
int ans = 0;
int rem;
int multi = 1;
while ( num > 0)
{
    rem = num %2;
   num/=2;    // num = num /2;
     ans += rem* multi;  // ans = rem * multi + ans;
     multi*= 10;    // multi = multi * 10;
}
cout<<ans <<endl;


// second approch
int num1;
cout<<"Enter a decimal number:";
cin>>num1;
int ans1 = 0;
int rem1;
int multi1 = 1;
while ( num1 > 0)
{
    rem1 = num1 & 1;
   num1 = num1>>1;    // num = num /2;
     ans1 += rem1* multi1;  // ans = rem * multi + ans;
     multi1*= 10;    // multi = multi * 10;
}
cout<<ans1;
*/


//  Binary to decimal
int n;
cout<<"Enter a binary number:";
cin>>n;
int m= 1;
int an =0;
int re ;
while (n > 0)
{
    // remender
    re = n % 10;
    // num la divide kara
    n = n / 10;
    // ans 
    an = m * re + an;
    // multiply
    m *= 2;
}
cout<< an <<endl;








}