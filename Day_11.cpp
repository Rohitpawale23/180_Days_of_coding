#include<iostream>
using namespace std;

int main(){

//  *********Pattern Printing Day11 Super hard********************


// pattern 1

int n;
cout<<"Enter a number:";
cin>>n;

for ( int row = 1; row <= n; row = row +1)
{
    //Space
    for (int col = 1; col <= n - row ; col++)
    {
        cout<<"  ";
    }
    //star printing
    for ( int col= 1; col <= row*2 -1 ; col++)
    {
        cout<<"* " ;
       
    }
    cout<<endl;
}

// pattern 2

int n1;
cout<<"Enter a number:";
cin>>n1;

for (int row = 1; row <= n1; row++)
{
    // space  
    for (int col = 1; col <= n1 - row; col++)
    {
        cout<<"  ";
    }
    // Number printing  1 to row
    for (int col = 1; col <= row ; col++)
    {
        cout<< col <<" " ;
    }
    // row - 1 to 1
    for (int col = row-1; col >= 1; col--)
    {
        cout<< col << " ";
    }
    
    
    cout<<endl;
}


// pattern 3

int n2;
cout<<"Enter a number:";
cin>>n2;

for (int i = 1; i <= n2; i++)
{
   //space printing 1 to i
   for (int j = 1; j <= i ;j++)
   {
    cout<<"  ";
   }
//    star printing n to i
   for (int j = n2; j >= i; j--)
   {
    cout<< "* ";
   }
// star printing n-i to i
for (int j = n2 -i; j >= 1; j--)
{
    cout<<"* ";
}

   cout<<endl;
}


// pattern 4
int n3;
cout<<"Enter a number:";
cin>>n3;

for (int i = 1; i <= n3; i++)
{
    // star printing
    for (int j = n3; j >= i; j--)
    {
        cout<<"* ";
    }
    //  Space printing
    for (int j = 1; j < (2 *i) ; j++)
    {
        cout<<"  ";
    }
    for (int j = n3; j >= i; j--)
    {
        cout<<"* ";
    }
    cout<<endl;
}



// pattern 5
int no;
cout<<"Input a number :";
cin>>no;
for ( int  row= no; row >= 1; row--)
{
    // star printing 1 to row
    for (int j = 1; j <= row; j++)
    {
        cout<<"* ";
    }
    // space printing 1 to 2n - 2 into row
    for ( int j = 1; j <= 2*no-2*row; j++)
    {
        cout<<"  ";
    }
    // star prinitng
    for (int  j = 1; j <= row ; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}

for (int row= 1; row <= no; row++)
{
    // star printing 1 to row
    for (int j = 1; j <= row; j++)
    {
        cout<<"* ";
    }
    // space printing 1 to 2no- 2 into row
    for (int j = 1; j <= 2*no-2*row; j++)
    {
        cout<<"  ";
    }
    // star prinitng
    for ( int j = 1; j <= row ; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}


// pattern 6
// Butterfly pattern 
int no1;
cout<<"Input a number: ";
cin>>no1;
for ( int i = 1; i <= no1; i++)
{
    // star printing 1 to row
    for ( int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
    
    // print space  1 to 2*n - 2*i
    for (int j = 1; j <= 2*no1 - 2*i; j++)
    {
        cout<<"  ";
    }
    
 // star printing
     for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
cout<<endl;
}

for ( int i = no1; i >= 1; i--)
{
    // printing star
    for ( int j = i-1; j >= 1; j--)
    {
        cout<<"* ";
    }
    
    // printing space
     for ( int k = 1; k <=  2*no1- 2*(i - 1); k++)
    {
        cout<<"  ";
    }
    // printing star
    for (int j = i-1; j >= 1; j--)
    {
        cout<<"* ";
    }
    cout<<endl;
}


//  pattern 7
// Diamond patern
int no2;
cout<<"Enter a number:";
cin>>no2;

for (int i = 1; i <=no2; i++)
{
    // space
    for (int j = 1; j <= no2 -i; j++)
    {
        cout<<" ";    //only one space is required to get result
    }
    
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}

for (int i = no2; i >= 1; i--)
{
    // space
    for (int j = 1; j <= no2 -i; j++)
    {
        cout<<" ";
    }
    
    for (int j = 1; j <= i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}



}