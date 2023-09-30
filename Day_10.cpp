#include<iostream>
using namespace std;

int main(){

// HARD pattern printing


// pattern 1
int n0;
cout<<"Enter a number: ";
cin>>n0;

for (int i = 1; i <= n0; i++)
{
    //space print
    for (int  j = 1; j <= n0 -i; j++)
    {
    
      cout<< "  " ;  
    }
    // star printing
    for (int k = 1; k <= i; k++)
    {
     cout<< "* " ;
    }

    cout<<endl;
}


// pattern 2
int n1;
cout<<"Enter a number: ";
cin>>n1;

for (int i = 1; i <= n1; i++)
{
    //space print
    for (int  j = 1; j <= n1 -i; j++)
    {
    
      cout<< "  " ;  
    }
    // number printing
    for (int k = 1; k <= i; k++)
    {
     cout<< i <<" ";
    }

    cout<<endl;
}


//  pattern 3
int n2;
cout<<"Enter a number: ";
cin>>n2;

for (int i = 1; i <= n2; i++)
{
    //space print
    for (int  j = 1; j <= n2 -i; j++)
    {
    
      cout<< "  " ;  
    }
    // number printing
    for (int k = 1; k <= i; k++)
    {
     cout<< k <<" " ;
    }

    cout<<endl;
}


//  pattern 4

int no;
cout<<"Enter a number:";
cin>>no;

for(int i =1; i<=no; i++){
    
// space print
for (int j = 1; j <= no - i; j++)
{
    cout<<"  ";
}
//  character printing
for ( char name = 'A'; name <= 'A'+i-1 ; name++)
{
   
    cout<< name <<" ";

}
cout<<endl;
}


//  pattern 5
int n;
cout<<"Enetr a number:";
cin>>n;

for (int i = 1; i <= n; i++)
{
    //print spaces
    for (int j = 1; j <= n -i; j++)
    {
        cout<<"  ";
    }
    
//print number pattern
for (int k = i; k >= 1; k--)
{
    cout<< k <<" " ;
}
cout<<endl;

}

}
