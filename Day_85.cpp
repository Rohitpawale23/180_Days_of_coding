
//  ******* DAY 85 - QUICK SORT ALGORITHM **********

/*
Algorithm

- Select the pivot element
- calculate the numbers / elements smaller than pivot element
- then insert the pivot element to its right position
- it has time complexity at average case O(logn)
- it has time complexity at worst case O(n^2) includes when array is sorted in increasing order and we have to sort it in decreasing order ans viceversa
- When data is already sorted then it is also an worst case
- it has space complexity O(N)
*/
#include<iostream>
#include<vector>
using namespace std;

// it gives us position of pivot element
int partition(int arr[] , int s , int e )
{
    // let consider start element as pivot element
    int pos = s;

    for(int i=s; i<= e; i++)
    {   
          //  to make array sorted in decreasing order then condition is - arr[i] >= arr[e]
        //  for increasing order condition is - arr[i] <= arr[e]
        if(arr[i] <= arr[e])
        {
            swap(arr[i] , arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quicksort(int arr[] , int s , int e)
{
    // base case
    if(s >= e)
    {
        return;
    }

    int pivot = partition(arr , s ,e);

    // left side
    quicksort( arr , s , pivot-1);

    // Right side
    quicksort( arr , pivot , e);
}


int main()
{


int arr[] = {6,3,1,2,8,9,10,7,3,10};

quicksort(arr , 0 , 9);

// array printing to check it is sorted or not
for(int i=0; i<10; i++)
{
    cout<<arr[i]<<" ";
}



}