#include<iostream>

using namespace std;

int main()
{

// ***DAY 71 - Dynamic Memory Allocation in 2-D and 3-D Arrays ***

/*

// implementation of 2-D array using Arrays
// we have to connect multiple 1-d array to create 2-d array

int n , m;
cin>>n>>m;  // n = rows , m = columns

// double pointer are used while creating 2-D array using pointers
int **ptr = new int *[n];
// created 2-d array
for(int i=0; i<n; i++)
{
    ptr[i] = new int [m];
}

// inputing elements in array
for (int i = 0; i < n; i++)
{
    for(int j=0; j<m; j++)
    cin>>ptr[i][j];
}

// print array values
for (int i = 0; i < n; i++)
{
    for(int j=0; j<m; j++)
    cout<<ptr[i][j]<<" ";
    cout<<endl;
}

// release the memory from the heap
for(int i=0; i<n; i++)
{
    delete[] ptr[i];
}
delete[] ptr;


*/


// implementation of 3-D arrays 
// we have to connect multiple 2-d array to create 3-d array

int L , B , H;
// L-length , B-breadth , H-height
cin>>L>>B>>H;

// triple pointer is used to create 3-d array

int ***ptr = new int **[L];

// create 2d array and store its address in ptr
for (int i = 0; i < L; i++)
{
    ptr[i] = new int *[B];

    for(int j=0; j<B; j++)
    {
        ptr[i][j] = new int [H];
    }
}


// inputing elements in array
for (int i = 0; i < L; i++)
{
    for(int j=0; j<B; j++)
    {
        for(int k=0; k<H; k++)
        {
            ptr[i][j][k] = i+j+k;
        }
    }
    
}

// print array values
for (int i = 0; i < L; i++)
{
    for(int j=0; j<B; j++)
    {
        for(int k=0; k<H; k++)
        {
        cout<<ptr[i][j][k]<<" ";
        }
    }
    
}
// release the memory from the heap
for(int i=0; i<L; i++)
{
    for (int j = 0; j < B; j++)
    {
        delete[] ptr[i][j];
    }    
}
delete[] ptr;



}