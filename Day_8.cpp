#include<iostream>
using namespace std;


int main(){
// Pattern printing part 1

// pattern 1
int n;
cout<<"Enter a number:";
cin>>n;
for (int i = 1; i <= n ; i++)
{
  for (int j = 1; j <= n; j++)
  {
    cout<< "*"<<" ";
  
  }

  cout <<endl;
 
}


// pattern 2
int n1;
cout<<"Enter a number:";
cin>>n1;
for (int row = 1; row <= n1 ; row++)
{
  for (int col = 1; col <= n1; col++)
  {
    cout<< "10 " ;
  
  }

  cout <<endl;
 
}

// pattern 3
int n2;
cout<<"Enter a number:";
cin>>n2;
for (int row = 1; row <= n2 ; row++)
{
  for (int col = 1; col <= n2; col++)
  {
    cout<< row <<" ";
  
  }
  cout <<endl;
 
}

// pattern 4
int n3;
cout<<"Enter a number:";
cin>>n3;
for (int row = 1; row <= n3 ; row++)
{
  for (int col = 1; col <= n3; col++)
  {
    cout<< col <<" " ;
  
  }

  cout <<endl;
}



// pattern 5
int n4;
cout<<"Enter a number:";
cin>>n4;
for (int row = 1; row <= n4 ; row++)
{
  for (int col = n4; col >= 1; col--)
  {
    cout<< col  <<" " ;
  
  }

  cout <<endl;
 
}


// pattern 6
int no1;
cout<<"Enter a number:";
cin>>no1;
for (int row = 1; row <= no1 ; row++)
{
  for (int col = 1; col <= no1; col++)
  {
    cout<< col*col <<" " ;
  
  }

  cout <<endl;
}


// pattern 7
int no2;
cout<<"Enter a number:";
cin>>no2;
for (int row = 1; row <= no2 ; row++)
{
  for (int col = 1; col <= no2; col++)
  {
    cout<< col*col*col <<" " ;
  
  }

  cout <<endl;
}


// pattern 8
char ch = 'a';
int no4;
cout<<"Enter a number:";
cin>>no4;
for (int row = 1; row <= no4 ; row++)
{
  for (int col = 1; col <= no4 ; col++)
  {
    cout<< ch <<" " ;
  
  }
    ch++;
  cout <<endl;
}



// Pattern 9
int no3;
cout<<"Enter a number:";
cin>>no3;
for (int row = 1; row <= no3 ; row++)
{
  for (int col = 1; col <= no3 ; col++)
  {
    char ch =  'a'+ col - 1;
     cout<< ch <<" ";
  }
   
  cout <<endl;
}


// Pattern 10
int num;
cout<<"Enter a number:";
cin>>num;
int count1 = 1;
for (int row = 1; row <= num ; row++)
{
  for (int col = 1; col <= num; col++)
  {
    cout<< count1 <<" " ;
    count1++;
  
  }

  cout <<endl;
}




}
