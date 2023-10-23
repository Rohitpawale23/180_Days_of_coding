#include <iostream>
using namespace std;

int main()
{

    // cout<<"Hey User!!"<<endl;

    // ******Day 31 - Solving 4 Leetcode Questions ******

    // Problem(1) -  First and last Position of element in a sorted array

    /*
    // here we are using linear search it has time complexity
    int arr[6] = {5,7,7,8,8,10};

    // here we have to find index of first and last occurrance of target
    int target = 9;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            cout<<i<<endl;
            break;
        }
        else
        cout<<-1<<endl;
        break;
    }

    for (int j = 5; j >= 0 ; j--)
    {
        if (arr[j] == target)
        {
            cout<<j;
              break;
        }
         else
        cout<<-1<<endl;
        break;
    }
    */

    /*
    // Method 2 - using binary search it is optimized way

    int ar2[100] ;
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    // inputing array elements
    for (int i = 0; i < n; i++)
    {
        cin>>ar2[i];
    }
    // here we have to find index of first and last occurrance of target
    int k;
    cout<<"Enter a element to search: ";
    cin>>k;
    // time complexity is  O(logn)
    // binary search
    int s = 0;
    int e = n-1;


    int first = -1;
    int last = -1;

    // loop 1
    while (s <= e)
    {
        int mid = s + (e - s)/2;
        if (ar2[mid] == k)
        {
            first = mid;
            e = mid - 1;
        }
        else if (ar2[mid] < k)
        {
            s = mid + 1;
        }
        else
        e = mid - 1;
    }
    cout<<"First Occurance: "<<first<<endl;

    s = 0;
    e = n-1;

    // loop 2
    while (s <= e)
    {
        int mid = s + (e - s)/2;
        if (ar2[mid] == k)
        {
           last = mid;
            s = mid + 1;
        }
        else if (ar2[mid] < k)
        {
            s = mid + 1;
        }
        else
        e = mid - 1;
    }
    cout<<"Last Occurance: "<<last<<endl;
    // */

    /*
    // Problem(2) - search insert position

    int nums[4] = {1,3,5,6} ;
    int target = 5;
            int s = 0 , e = 4- 1;
            int mid , index = 4 ;

            while(s <= e)
            {
                mid = s +(e - s)/2;
                if(nums[mid] == target){
                    index = mid;
                    break;
                }
                else if(nums[mid] < target){
                    s = mid + 1;
                }
                else{
                index = mid;
                e = mid -1;
                }
            }
            cout<< index<<endl;
    */

    /*
    // Problem(3) - sqrt(X) - using binary search

    int x;
    cout<<"Enter a number to find sqrt: ";
    cin>>x;

    int s = 0 , e = x;
    int mid , ans;

    while (s <= e)
    {
        mid = s + (e -s) /2;

        if (mid*mid == x)
        {
            ans = mid;
            break;
        }
        else if (mid*mid < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e  = mid -1;
        }
    }
    cout<<"Sqrt is : "<<mid<<endl;

    */


    // problem(4) - kth positive missing integer
    // Kth Missing Positive Number
    /*
    Input: Input: arr = [2,3,4,7,11], k = 5
    Output: 9
    Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
    */


/*

    int arr[5] = {2, 3, 4, 7, 11};
    int k = 5;

    int s = 0, e = 4, mid, ans = 5;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }

    cout<<"Output is: "<< ans+ k <<endl;

*/


}