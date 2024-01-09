
//  ******* DAY 82 - MERGE SORT ALGORITHM **********

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[] , int s, int mid, int e  )
{
    vector<int>temp(e-s+1);

    int left = s , right = mid+1, index = 0;

    while(left <= mid && right <= e)
    {
        // when left element is smaller than right element
        //  to make array sorted in decreasing order then condition is - arr[left] >= arr[right]
        //  for increasing order condition is - arr[left] <= arr[right]
        if(arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++ , left++;
        }
         // when left element is smaller than right element
        else
        {
            temp[index] = arr[right];
            index++ , right++;
        }
     }   
     
      // when left array is not empty
        while(left <= mid)
        {
            temp[index] = arr[left];
            index++ , left++;
        }
        // when right array is not empty
        while(right <= e)
        {
            temp[index] = arr[right];
            index++ , right++;
        }

        // add elements from ans to arr
        index = 0;
        while(s <= e)
        {
            arr[s]= temp[index];
            index++ , s++;
        }
   

}


// function merge sort - which is used to divide two arrays
void mergesort(int arr[] , int s , int e)
{
    // base case
    if(s == e)
    {
        return;
    }

  int mid = s+ (e-s)/2;
    // left division of array
    mergesort(arr , s , mid);

    // right division of array
    mergesort(arr , mid+1 , e);

    // merge is an function which actually megers to arrays in sorting form

    merge(arr , s ,mid ,e);
}



int main()
{


// it works on priciple - Divide and then merge according to sorting order

int arr[] = {6,3,1,2,8,9,10,7,3,10};

mergesort(arr , 0 ,9);

// array printing to check it is sorted or not
for(int i=0; i<10; i++)
{
    cout<<arr[i]<<" ";
}

}