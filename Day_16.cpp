#include <iostream>
using namespace std;

int main (){

// ******Day 16 - Conversions ******

// Decimal to Binary 
cout<<"****Decimal to Binary conversion*****"<<endl;
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
cout<<"Binary numbwer: "<<ans <<endl;


/*
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


cout<<"****Binary to Decimal conversion*****"<<endl;
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
cout<<"Decimal number: "<< an <<endl;




cout<<"****Decimal to octal conversion*****"<<endl;
//  Decimal to octa decimal
int n1;
cout<<"Enter a decimal number:";
cin>>n1;
int r;
int m1 = 1;
int ans1 = 0;
while (n1 > 0)
{
  // remender
  r = n1 % 8 ; 
  //  divide number by 8
  n1 = n1 /8;
  // ans
  ans1 = ans1 + r*m1;
  // multiply
  m1 = m1*10;
}
cout<<"Octal number: "<<ans1 <<endl;


cout<<"****Binary to Octal conversion*****"<<endl;
// Binary to octa decimal

// binary to decimal amd then decimal to octa

  //  binary to decimal
  int n2;
  cout<<"Enter a Binary number:";
cin>>n2;
int r2;
int m2 = 1;
int a2 = 0;

while (n2 > 0)
{
  // remender
    r2 = n2 % 10;
    // num la divide kara
    n2 = n2 / 10;
    // ans 
    a2 = m2 * r2 + a2;
    // multiply
    m2 *= 2;
}

int n4 ;
 n4 = a2;
// cout<<n4;
 //decimal number
// decimal to octal conversion
int r3;
int m3 = 1;
int ans3 = 0;
while ( n4 > 0)
{
  // reminder
  r3 = n4 % 8;
  // divide th number
  n4 = n4 / 8;
  // ams
  ans3 = r3 * m3 + ans3;
  // 
  m3 = m3 * 10;
}
cout<<"Octal number:"<< ans3<<endl;



}