#include <iostream>
using namespace std;

int main()
{

    // cout<<"Hello Coders!!"<<endl;

    // *********** Day 22 - Arrays in C++ *****************

    /*
    // Declaration of array

    int arr[5];  //in []bracets size of an aaray is declared

    // initialization of an array

    int arr1[5]= {1,34,55,83,9};

    //accessing a aaray element
    // cout<<arr1[2]<<endl;  //55

    //  array printing
    for (int i = 0; i <5 ; i++)
    {
        cout<<arr1[i]<<" ";
    }
    */

    /*
    // initialization of an array with 0 null array

    int arr1[5]= {0};

    //accessing a aaray element
    // cout<<arr1[2]<<endl;  //55

    //  array printing
    for (int i = 0; i <5 ; i++)
    {
        cout<<arr1[i]<<" ";
    }
    */

    /*
    // Taking input elements of array from user
    int ar[5];  //declaration of array
    // here we are taking 5 elements from user
    for (int i = 0; i < 5; i++)
    {
        cin>>ar[i];
    }
    cout<<"elements stored in array"<<endl;
    // printing of an array
    for (int  i = 0; i < 5; i++)
    {
          cout<<ar[i]<<" ";
    }

    // Making size of an array variable is a bad programming practice
    */

    // size of data type using sizeof function
    /*
    int a ;
    cout<<sizeof(a)<<" ";

    char b;
    cout<<sizeof(b)<<" ";

    float n;
    cout<<sizeof(n)<<" ";

    bool h;
    cout<<sizeof(h)<<" ";

    // */

    /*
    int ar2[5] = { 2, 34 , 6, 99, 33};
    cout<<sizeof(ar2)<<" ";
    // it returns 20 in o/p bcoz their are 5 element so , 5*4 = 20.
    */

    /*
    // using above size of array we can able to find the elements in an array
    int ar3[5] = { 23, 4, 56, 8, 14};
    cout<< "Number of elemets in an array: "<<sizeof(ar3) / sizeof(ar3[0])<<" ";
    // it returns 5
    */

    /*

    // Finding Minimum and Maaximun elements in an array

    int arr3[5] = {23, 4, 66, 1, 8};

    int ans = INT32_MAX;
    for (int  i = 0; i < 5; i++)
    {
        if (arr3[i] < ans)
        {
        ans = arr3[i];
        }
    }
    cout<<"smallest number is: "<<ans<<endl;  // 1 is smaller

    int ans1 = INT32_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr3[i] > ans1)
        {
        ans1 = arr3[i];
        }
    }
    cout<<"smallest number is: "<<ans1<<endl;  // 66 is largest element

    */
}