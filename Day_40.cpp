#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // cout<<"Hello , coders !! "<<endl;

    // *****Day 40 - 3 Interview Important problems ********

    // # Problem(1) - Trapping Rain Water

    /*
    int tr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};


    int n = 12;

    // Approch 1 - which having time complexity O(n) and space complexity O(2n) = O(n)
    // becoz here we are using extra space
    int minheight ;
    int lmax [n];
    // left max - time complexity - O(n)
    lmax[0] = 0;
    for (int i = 1; i < n; i++)
    {
    lmax[i] = max(lmax[i-1] , tr[i-1]);

    }
    int rmax [n];
    // right max -  time complexity - O(n)
    rmax[n-1] = 0;
    for (int i = n-2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i+1] ,tr[i+1]);

    }


    // water - time complexity - O(n)
    int water = 0 ;

    for (int i = 0; i < n; i++)
    {
        minheight = min(lmax[i] , rmax[i]);

        if (minheight > tr[i] )
        {
            water += minheight - tr[i];
        }

    }
    cout<<"Trapped units of rain water are: "<<water<<endl;

    */

    // Approch 2 - without using any extra space , space complexity O(1)
    /*
    Input:
    N = 4
    arr[] = {7,4,0,9}
    Output:
    10
    Explanation:
    Water trapped by above
    block of height 4 is 3 units and above
    block of height 0 is 7 units. So, the
    total unit of water trapped is 10 units.
    */

    /*
    int arr[4] = {7,4,0,9};

    int n = 4;

      long long  maxi = arr[0] , index =0 , leftmax = 0 , rightmax = 0;
            long long water = 0;
            for(int i =1; i<n; i++){
                if(arr[i] > maxi){
                      maxi = arr[i];
                index = i;
                }
            }

            // left side
            for(int i =0; i<index; i++){

                if(leftmax > arr[i])
                water += leftmax - arr[i];
                else
                leftmax = arr[i];
            }

            // right side
            for(int i = n-1; i>= index; i--){

                if(rightmax > arr[i])
                water += rightmax - arr[i];
                else
                rightmax = arr[i];
            }
        cout<<"Trapped water is : "<<water<<" units"<<endl;
    */
    // Homework
    // Approch - solve using two pointers
    // traverse an array only one time

    //  #Problem(2) - 3 sum / triplet sum

    /*
    int ar2[6] = {1  ,4, 45 , 6, 10 , 8};
    int x = 13;
    int m4 = 6;


    // Approch 1 - bruteforce approch
    //  time  complexity O(n^3)
    int i , j, k;
    for (i = 0; i < m4; i++)
    {
        for (j =i+1 ; j < m4; j++)
        {
            for ( k = j+1; k < m4; k++)
            {
                if(ar2[i] + ar2[j] + ar2[k] == x){
                    cout<<"YES"<<endl; //because 1+4+8 = 13
                }
            }

        }

    }
    */

    // Approch 2 - using two pointers - converting 3 sum into 2 sum

    //  note array must be sorted
    // it has time complexity O(n^2)

    /*
    int cr3[6] = {1 ,4 ,6 , 8, 10 , 45};

    int c2 = 6;
    int ans = 0;
    int x1 = 24;
    int ab;
    for (int i = 0; i < c2-2; i++)
    {
         ab = x1 - cr3[i];
         int s =i+1, e = c2-1;

    while (s < e)
    {
        if(cr3[s] + cr3[e] == ab){
            cout<<"YES"<<endl;
            break;
        }
        else if(cr3[s] + cr3[e] > ab){
            e--;
          }
        else
            s++;
    }
       }

    */

    // #Problem(3) - Four sum / Four elements

    // just like 3 sum problem approch
    // it has time complexity O(n^3)

    // Array must be sorted

    /*
    Input:
    N = 6
    A[] = {1, 5, 1, 0, 6, 0}
    X = 7
    Output:
    1

    Explantion:
    1, 5, 1, 0 are the four elements which makes sum 7.
    */

    int A[6] = {1, 5, 1, 0, 6, 0};
    int n = 6;
    int x = 7;


    // array sorting using selection sort

    // selection sort
    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[index])
            {
                index = j;
            }
        }
        swap(A[i], A[index]);
    }

    for (int j = 0; j < n - 3; j++)
    {
        int an = x - A[j];
        for (int i = j + 1; i < n - 1; i++)
        {

            int ans = an - A[i];
            int s = i + 1, e = n - 1;

            while (s < e)
            {

                if (A[s] + A[e] == ans){
                cout<<"YES"<<endl;
                break;

                 }
                else if (A[s] + A[e] > ans)
                    e--;

                else
                    s++;
            }
        }
    }





}