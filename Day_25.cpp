#include <iostream>
using namespace std;

int main()
{

    // ******** Day 25 - Sorting in arrays - Selection sort*********

    // sorting - arranging elements in ans array in decreasing or increasing order

    // first we have to select the elemet either smaller or largest then place it at desired location

    /*
    // locate the smallest no. at first position then keep doing further
    int arr[100];
    int n;
    cout<<"Enter a size of an array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
            index = j;
            }
        }
        swap (arr[i] , arr[index]);
    }
    cout<<"After Sorting "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    */

    /*
    // Homework - locate largest no. at the end of array
    int arr[100];
    int n;
    cout<<"Enter a size of an array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        int index = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] < arr[index])
            {
            index = j;
            }
        }
        swap (arr[i] , arr[index]);
    }
    cout<<"After Sorting "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    */

    /*
    // Homework - sort the character array
    char ch[100] = {'d' , 'e' , 'a', 'n', 'b'};
    int n = 5; // size of an array is 5

    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i+1; j < n; j++)
        {
            if (ch[j] < ch[index])
            {
            index = j;
            }
        }
        swap (ch[i] , ch[index]);
    }
    cout<<"After Sorting "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<ch[i]<<" ";
    }
    */
}