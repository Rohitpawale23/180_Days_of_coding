
//  ****** DAY 80 - Recursion in BINARY Search ********

#include <iostream>
using namespace std;

// it returns index of the searching elements if not exits then return 0

int LinearSearch(int arr[], int X, int i)
{
    if (i == -1)
    {
        return 0;
    }

    if (arr[i] == X)
    {
        return i;
    }

    return LinearSearch(arr, X, i - 1);
}

// s = start index and e = end index , It is for increasing or non decreasing order
int BinarySearchIncre(int arr[], int X, int s, int e)
{
    // it returns -1 when element in not present
    if (s > e)
    {
        return -1;
    }

    // find the mid , to avoid integer overflow write it as follows instead of (s+e)/2
    int mid = s + (e - s) / 2;

    // if element X found
    if (arr[mid] == X)
    {
        return mid;
    }
    else if (arr[mid] < X)
    {
        return BinarySearchIncre(arr, X, mid + 1, e);
    }
    else
    {
        return BinarySearchIncre(arr, X, s, mid - 1);
    }
}

// s = start index and e = end index , It is for decreasing or non increasing order
int BinarySearchDecre(int arr[], int X, int s, int e)
{
    // it returns -1 when element in not present
    if (s > e)
    {
        return -1;
    }

    // find the mid , to avoid integer overflow write it as follows instead of (s+e)/2
    int mid = s + (e - s) / 2;

    // if element X found
    if (arr[mid] == X)
    {
        return mid;
    }
    else if (arr[mid] > X)
    {
        return BinarySearchIncre(arr, X, mid + 1, e);
    }
    else
    {
        return BinarySearchIncre(arr, X, s, mid - 1);
    }
}

int main()
{

    // Problem  - Linear Search using Recursion

    int arr1[5] = {5, 20, 15, 7, 18};
    int X = 8;

    cout << LinearSearch(arr1, X, 4) << endl;

    // Problem - Bianary Search using Recursion
    // for increasing / non-decreasing order

    int arr2[6] = {3, 8, 11, 15, 20, 22};
    int Y = 2;

    cout << BinarySearchIncre(arr2, Y, 0, 5) << endl;

    // Problem - Bianary Search using Recursion
    // for decreasing / non-increasing order

    int arr3[6] = {33, 28, 21, 15, 10, 2};
    int Z = 10;

    cout << BinarySearchDecre(arr3, Z, 0, 5);
}
