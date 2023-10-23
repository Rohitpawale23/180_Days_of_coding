#include <iostream>
using namespace std;


int BinarySearch(int arr[] , int n , int key)
{

// start , end , mid;
int start = 0 , end = n-1 , mid ;

while (start <= end)
{
    // mid ko find karo
    mid = (start + end) /2;

    // arr[mid] == key
    if (arr[mid] == key)
    {
        return mid;
    } 
    // arr[mid] <key
    else if (arr[mid] < key)
    {
        start = mid + 1;
    }
    // arr[mid] > key
    else
        end = mid -1 ;
}
return -1;
}


int main()
{

    // cout<<"Hey Coders!!"<<endl;

    // *******Day 30 - Binary Search Algorithm *********

/*
    int b[100];

    cout << "Please enter a sorted array for binary search" << endl;
    cout << "Enter a size of an array:";
    int n;
    cin >> n;
    cout << "Enter the elemets in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "Enter a searching element:";
    int key; // key is a element to find in an array
    cin >> key;

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (b[mid] == key)
        {
            cout << "Got it , stop" << endl;
            cout << "Key found at index " << mid << endl;
            break;
        }

        else if (b[mid] < key)
        {
            start = mid + 1;
        }

        else
        end = mid - 1;
          
    }
*/    

/*

// using defined BinarySearch function  

// array declaration
int bs[100];
cout<<"Enter the size of an array: ";
int n1;
cin>>n1;

// inputing array elements
cout<<"Enter elemets of an array:";
for (int i = 0; i < n1; i++)
{
 cin>>bs[i];
}

// key - element which we have to search
int key1;
cout<<"Enter a value of key: ";
cin>>key1;
// binary search function 
cout<< BinarySearch(bs, n1 , key1)<<" ";
// it returns -1 when element is absent
return 0;

*/


// /*

// Homework - apply binary search for decreasing sorted array

// **problem not working

int ar2[100];
int m;
cout<<"Enter size of an array:";
cin>>m;
// input an decreasing sorted array
cout<<"Enter elements of an array:";
for (int  i = 0; i < m; i++)
{
    cin>>ar2[i];
}

int k2;
cout<<"Enter a value of an key:";
cin>>k2;

int start1 = 0;
int end1 = m-1;
int mid1 = ( start1 + end1  )/2;


while (end1 >= start1)
{
    if (ar2[mid1] == k2)
    {
     cout << "Got it , stop" << endl;
    cout << "Key found at index " << mid1 << endl;
    break;
    }
    
    else if (ar2[mid1] < k2)
    {
    end1 = mid1 + 1;
    }
    else
    start1 = mid1 - 1;

    
}
// */



}

/*

# NOTE:
in many  of the compilters it gives error to the line
integer overflow error occurs at 
int mid = (start + end) /2

to overcome it write as

int mid =start + (end - start  )/2
it does not throws error

*/
