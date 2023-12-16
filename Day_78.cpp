#include<iostream>
using namespace std;

void print(int arr[] , int index , int n)
{
    if(index == n)
    {
        return;
    }
    cout<<arr[index]<<" ";
    print(arr , index+1 , n);
}

// reverse print using n
void rprint(int arr[] , int index , int n)
{
    if(index == n)
    {
        return;
    }
     rprint(arr , index+1 , n);
    cout<<arr[index]<<" ";
   
}

// reverse print without n
void revprint(int arr[] , int index)
{
    if(index == -1)
    {
        return;
    }
    cout<<arr[index]<<" ";
    revprint(arr , index-1);
}

// sum of array elements
arrsum(int arr[] , int index , int n)
{
    if(index == n)
    {
        return 0;
    }
    return arr[index] + arrsum(arr , index+1 , n);
}

// sum of elements of array without passing size
int asum(int arr[] , int index)
{
    if(index == -1)
    {
        return 0;
    }
     return arr[index] + asum(arr , index-1 );
}


// to find minimum element in array
int minele(int arr[] , int index , int n)
{
    if(index == n-1)
    {
        return arr[index];
    }

    return min(arr[index] , minele(arr , index+1 , n) );

}


int main()
{

// *** Day 78 - Recursion in Arrays *****


// # Print Elements in array
int arr[5] = {3,6,2,9,4};
int n = 5;

/*
// iterative method
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
*/


// Using Recursion

// in normal order
// print(arr , 0 , 5);

// in reverse order by passing size n of an array
// rprint(arr , 0,5);

// array reverse printing without passing size n of array
// revprint(arr ,n-1);


// # Sum of all elements in an array

int ar1[5] = {3,4,5,8,2};
int m = 5;

/*
// iterative method
int sum = 0;
for(int i=0; i<m; i++)
{
    sum += ar1[i];
}
cout<<"Sum of array is: "<<sum<<endl;
*/

// Using Recursion
// cout<<"Sum is: "<<arrsum(ar1 , 0 , m);

// without passing size of array
// cout<<"Required array sum is: "<<asum(ar1 ,m-1);


//  # Minimum /Smallest element in an array

int ar2[6] = {23,6,41,7,9,5};
int k = 6;


/*
// Iterative method
int min = ar2[0];

for(int i=0; i<k; i++)
{
    if(ar2[i] < min)
    {
        min = ar2[i];
    }
}
cout<<"Smallest number is: "<<min<<endl;
*/


// Using Recursion
cout<<"Smallest element is: "<<minele(ar2 , 0 , k);


}
