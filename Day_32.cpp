#include <iostream>
using namespace std;

// function which returns peak index using binary search
int peakindex(int arr[], int n)
{
    int s = 0, e = n - 1, mid;

    while (s <= e)
    {

        mid = e + (s - e) / 2;
        // peak element
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        else if (arr[mid] > arr[mid - 1])
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}
int main()
{

    // cout<<"Hello"<<endl;

    // *******Day 32 - Solving questions on leetcode*******

    // Problem(1) - Peak index in mountain array

    /*
    // approch 1 - linear search - time complexity is O(n)

    int arr[7] = {2, 4, 6, 8, 10, 8, 5};
    // basically peak of mountain array is largest number
    int a = INT32_MIN;

    for (int i = 0; i < 7; i++)
    {
        a = max(a, arr[i]);
    }
    cout<<"Peak of mountain array is: "<<a<<endl;
    */

    /*
    // Approch (2) - most optimized approch is binary search
    // it has time complexity O(log n)
    // peak element - which is greater than its left and right element

    int arr1[7] = {2, 4, 6, 8, 10, 8, 5};

    cout<<"Peak of mountain array is: "<<peakindex(arr1 , 7)<<endl;
    // 10 is at forth index
    */


/*
    // Problem (2) - Minimum element in rotated array

    // using binary search
int nums[6] = {4 , 6, 8, 10, 1, 2};

    int s = 0, ans = nums[0];
    int e = 5 , mid;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        else
        {
            ans = nums[mid];
            e = mid - 1;
        }
    }
    cout<<"Minimum element in an rotated array is: "<<ans<<endl;

    */


// Problem(3)  - Search in rotated array

int ar2[7] = {4,5,6,7,0,1,2};
int target = 0;

 int s =0 , e = 6 , mid;
        int ans = -1;
        while( s <= e)
        {
            mid = s + (e-s) /2;

            if( ar2[mid] ==  target){
                ans = mid;
                break;
            }
            // left side sorted
            else if( ar2[mid] >= ar2[0]){
                if(ar2[s] <= target && target <= ar2[mid]){
                    e = mid - 1;
                }
                else
                {
                s = mid + 1;
                }
            }

            // right side sorted
            else
                if( target >= ar2[mid] && target <= ar2[e]){
                    s = mid + 1;
                }
                else
                 e = mid -1 ;
            
        }
       cout<<"Target index is: "<<ans<<endl; 
   
}