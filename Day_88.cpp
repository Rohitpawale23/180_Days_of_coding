
//  ***Day 88 - Perfect Sum Problem || Target Sum with repeatation***

#include <iostream>
using namespace std;

int targetsum(int arr[], int index, int n, int target)
{
    // base conditions
    if (target == 0)
    {
        return 1;
    }

    if (index == n || target < 0)
    {
        return 0;
    }

    return targetsum(arr, index + 1, n, target) + targetsum(arr, index + 1, n, target - arr[index]);
}

int subsetsumR(int arr[], int index, int n, int sum)
{
    // Base condition
    if (sum == 0)
    {
        return 1;
    }

    if (index == n || sum < 0)
    {
        return 0;
    }

    return subsetsumR(arr, index + 1, n, sum) + subsetsumR(arr, index, n, sum - arr[index]);
}

int main()
{

    // Problem - perfect sum
    /*
    Return total number of subsets of array having sum equals to Target sum

    - Time Complexity - O(2^n)
    - SpacecComplexity- O(n)
    */
    cout << "\nTarget Sum: " << endl;

    int arr[] = {2, 5, 6, 1};
    int target = 8;

    cout << targetsum(arr, 0, 4, target) << endl;
    // here possible subsets with sum equal to target are 2 which are-->  {2,5,1} {2,6}

    cout << endl;

    // Problem - Target Sum with repeatation
    /*
    return total number of subset whose elements sum is equals to target value
    - Repeatation is allowed in this problem but order must maintained


    */

    cout << "Total number of Subsets having sum 6 with repeatation are-" << endl;

    int arr1[] = {2, 3, 4};

    int sum = 6;

    cout << subsetsumR(arr1, 0, 3, sum) << endl;

    /*
    Here repeatation of elements while subset forming is allowed so o/p is 3
    subsets having sum = 6 are --> {2,2,2} , {2,4} & {3,3}
    */
}