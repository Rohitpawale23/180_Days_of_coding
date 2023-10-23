#include<iostream>
using namespace std;

int  main()
{

// cout<<"Hello"<<endl;

 // ******** Day 27 - Sorting in arrays - Insertion sort*********


/*
// Example

int ar2[5] = {1,4,6,8,5};
// here first two elemets are sorted so we have to sort 5 to its appropriate place
// required output - 1 4 5 7 8
// here j starts from n-1 to j>0
for (int j = 5-1; j > 0; j--)
{
    if (ar2[j] < ar2[j-1]){
        swap(ar2[j] , ar2[j-1]);
    }
    else
    break;
}

// array printing 
for (int i = 0; i < 5; i++)
{
    cout<<ar2[i] <<" ";
}
*/

/*
int is[100];
cout<<"Enter a size of an array:";
int n;
cin>>n;
cout<<"Enter elemets of an array:";
// input array
for (int i = 0; i < n; i++)
{
    cin>>  is[i];
}

// outer loop starts from 1 to <n
for (int  i = 1; i < n; i++)
{
    // innner loop starts from i to 1
    for (int j = i; j > 0; j--)
    {
        if (is[j] < is[j-1])
        {
            swap(is[j] , is[j-1]);
        }
        else
        break;
    }
    
}

cout<<"Sorted array is: "<<endl;
// array printting
for (int i = 0; i < n; i++)
{
    cout<<is[i]<<" ";
}

*/

/*
// Homework - insertion sort in decreasing order
// ex - 3 1 2 4 5
//  o/p - 5 4 3 2 1 
int is1[100];
cout<<"Enter a size of an array:";
int n1;
cin>>n1;
cout<<"Enter elemets of an array:";
// input array
for (int i = 0; i < n1; i++)
{
    cin>>  is1[i];
}

// outer loop starts from 1 to <n
for (int  i = 1; i < n1; i++)
{
    // innner loop starts from i to 1
    for (int j = i; j > 0; j--)
    {
        if (is1[j] > is1[j-1])
        {
            swap(is1[j] , is1[j-1]);
        }
        else
        break;
    }
    
}

cout<<"Sorted array is: "<<endl;
// array printting
for (int i = 0; i < n1; i++)
{
    cout<<is1[i]<<" ";
}
*/




// Homework - insertion sort in increasing order but start from last

}