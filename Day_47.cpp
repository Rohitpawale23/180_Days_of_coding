#include <iostream>

using namespace std;

int main()
{

    // cout<<"Hello"<<endl;

    // *******Day 47 - Solving HARD Problems on Arrays ************

    /*
    How to store two number in one position

    here we have to use / and % operator

    ex - int a = 602
    if 602 /100 is equals to 6
    and if 602 %2 is gives 2
    so in this way we can store two numbers in one position
    but condition is range of number is must be defined ex 1 to 99
    */

    // #Problem(1) - Find Missing and Repeating elements

    /*
    Brute force approch
    //Approch 1 - linear search -
    first find repeating then find missing number
    it has time complexity O(N^2)
    */

    /* better approch
    //  Approch 2 - it has time complexity O(nlog(n))
    first sort the given array
    and then find repeating and missing number
    */

    /*
    Best approch
    // Approch 3 - it has time complexity O(n)

    make an array named as count and store number of occurance as 0 ,1 ,2 in it
    then check if count[i] == 0 it is a missing number
    if count[i] == 2 then it is a repeated number
    but it has space complexity O(n) bcoz we created an array
    */

    /*

    // initialize count with 0

    int n ; //size of an array
    vector<int>count(n ,0);
    for (int i = 0; i < n; i++)
    {
        count[arr[i]-1]++;
    }

    // missing number
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 0)
        {
        cout<<i+1;
        break;
        }
    }

    // Repeated element
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 2)
        {
        cout<<i+1;
        break;
        }
    }
    */

    /*
    Optimized  approch
    // approch 4 - storing two numbers in one position
    it has time complexity O(n) ans space complexity O(1)
    */

    /*
    Input:
    N = 2
    Arr[] = {2, 2}
    Output: 2 1
    Explanation: Repeating number is 2 and
    smallest positive missing number is 1.
    */

    /*

    //  decrease each element by 1
    int arr[2] = {2 ,2};
    int n = 2;

     for(int i = 0; i<n; i++)
            {
                arr[i]--;
            }

            // occurance
            for(int i =0; i<n; i++)
            {
                arr[arr[i]%n] += n;
            }


            // repeating
            for(int i = 0;  i<n; i++)
            {
                if(arr[i] /n == 2){
                    cout<<i+1<<" ";
                //   break;
                }
                else if(arr[i] /n == 0){
                    cout<<i+1 <<" ";

                }
            }

    */

    // #Problem(2) - Find the Occurance of Number

    /*
    it can be solved using above approches
    */

    /*
    Optimized approch -
    */

    // #Problem(3) -  Majority Element

    /* Approcn 1 - linear search
     it has time complexity O(n^2)
    */

    /* Approch 2 - first sort the array then count the elements
     it has time complexity O(nlog(n))
    */

    // Optimized approch  - Moore voting Algorithm
    // it has time complexity O(n)

    /*
    Given an array nums of size n, return the majority element.
    The majority element is the element that appears more than ⌊n / 2⌋ times.
    You may assume that the majority element always exists in the array.
    Example 1:

    Input: nums = [3,2,3]
    Output: 3
    Example 2:

    Input: nums = [2,2,1,1,1,2,2]
    Output: 2
    */

    int nums[8] = {2, 2, 1, 1, 1, 2, 2};
    int n = 8;

    int candidate, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = nums[i];
        }
        else
        {
            if (candidate == nums[i])
                count++;
            else
                count--;
        }
    }
    cout << candidate << endl;
}