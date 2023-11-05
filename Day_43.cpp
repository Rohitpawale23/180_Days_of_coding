#include <iostream>
using namespace std;

void printar(int arr1[][4], int row, int col)
{
    // here we have to pass col number to find the address
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
    }
}

void printcol(int arr[][4], int row, int col)
{

    for (int j = 0; j < col; j++)
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << " ";
}

int main()
{

    // cout<<"Namaste Coders !!"<<endl;

    // ******Day 43 - 2-D Arrays in C++***********

    /*

    // Creating and 2-D array

    int arr1[3][4];
    // here we created array having 3 rows and 3 columns so , 4*3 = 12 elements

    // initialization of array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int row = 3 , col = 4;
    // 2-D Array printing in row wise
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        cout<<arr[i][j]<<" ";
        }

    }

    // updating element in array
    // arr[0][0] = 15;

    cout<<endl;
    // function call
    cout<<"array printing in column wise"<<endl;
    printcol(arr , 3, 4);

    cout<<endl;
    cout<<"array printing in row wise"<<endl;
    printar(arr , 3 , 4);

    */

    /*

    // # Problem - search element in an array

    int x = 77 ; // 77 we have to search
    // if present return yes else no;

    int ar3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int r = 3 , c=4;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        if(ar3[i][j] == x){
            cout<<"YES";
            return 0;
        }
        }
    }
    cout<<"NO";

    */

    /*
    // # Problem - Add two Matrix
    // add arr1 and arr2
    // both matrix should have equal numbwer od columns and rows
    int arr1[3][4] =  {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] =  {0,1,3,4,6,7,10,11,41,18,9,11};

    // it is the ans array
    int ans[3][4];
    int row = 3 , col = 4;

    for (int i = 0; i < row; i++){
        for(int j = 0; j<col; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout<<"Addition of two array:"<<endl;
    printar(ans , 3,4);

    */

    /*
    // Homework
    // # Problem - substraction of two arrays
     // substract arr1 and arr2
    // both matrix should have equal numbwer od columns and rows
    int arr1[3][4] =  {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] =  {0,1,3,4,6,7,10,11,41,18,9,11};

    // ans stores arr2 - arr1
    int ans[3][4];
    int row = 3 , col = 4;

    for (int i = 0; i < row; i++){
        for(int j = 0; j<col; j++)
        {
            ans[i][j] = arr2[i][j] - arr1[i][j];
        }
    }
    cout<<"Substraction of two array:"<<endl;
    printar(ans , 3,4);

    */

    /*
    // #Problem - Print Row index with maximum sum

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int sum = INT32_MIN , index = -1;
    int row = 3 , col = 4;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for(int j = 0; j< col; j++){

            total += arr[i][j];
            if(sum > total)
            sum = total;
            index = i;
        }
    }
    cout<<index<<endl;
    */

    /*
    // # Problem - Point sum of diagonal element

    // here row should be equals to col

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};


    int first = 0;

    int second = 0;

    int row = 3, col = 3;

    int i = 0;

    while (i <row)
    {
        first += arr[i][i];
        i++;
    }

    int j = col -1 , k = 0;
    while (j >= 0)
    {
        second += arr[k][j];
        k++ , j--;
    }

    cout<<"sum of first diagonal is: "<<first<<endl;
    cout<<"sum of second diagonal is: "<<second<<endl;

    */

    //  # Problem - Reverse each row of matrix

    int rr[3][4] = {2, 3, 4, 5, 1, 2, 6, 8, 4, 9, 3, 2};

    int row = 3, col = 4;

    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            swap(rr[i][start], rr[i][end]);
            start++, end--;
        }
    }

    cout << "After reversing each of an array: " << endl;
    printar(rr, 3, 4);
}