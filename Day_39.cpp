#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{

    int prefix = 0, t_sum = 0, n = arr.size();

    for (int i = 0; i < n; i++)
    {
        t_sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];

        // int ans =  t_sum - prefix;
        if (t_sum == 2 * prefix)
            return 1;
    }
    return 0;
}

int main()
{

    // cout<<"Day 39 /180 days of coding challenge !!!"<<endl;

    // ******Day 39 - Prrefix and Suffix , KADANE'S Algorithm*********

    // Prefix and Suffix

    /*
    // Prefix sum
    int ar2[6] = {6,4,5,-3,2,8};

    int ans3[6];

    ans3[0] = ar2[0];

    for (int i = 1; i < 6; i++)
    {
        ans3[i] = ans3[i-1] + ar2[i];
    }
    // array printing
    cout<<"Prefix sum array is: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<ans3[i]<<" ";
    }
    */

    /*
    // Suffix sum

    int cr[6] = {6,4,5,-3,2,8};

    int an[6];
    int n = 6;
    an[n-1] = cr[n-1];
    for(int i = n-2; i >= 0; i--){
        an[i] = an[i+1] + cr[i];
    }
    // array printing
    cout<<"Suffix sum array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<an[i]<<" ";
    }
    */

    // Subarray of an array
    // it should be continuous part of an main array
    // ex - 3 , 7 is yhe subarray of 4,3,7,2

    
    // Homework - take an array and print its all possible subarray

// /*
    int t[4] = {4, 3,7, 2};
    int m = 4;
// */

    /*
// approch 1
    cout<<"Subarray containing one element:"<<endl;
    for (int  i = 0; i < m; i++)
    {
        cout<<t[i]<<" "<<endl;

    }

    cout<<"Subarray containing two elements:"<<endl;
    for (int  i = 0; i < m-1; i++)
    {
        cout<<t[i]<<" ";
        cout<<t[i+1]<<endl;

    }

    cout<<"Subarray containing three elements:"<<endl;
    for (int  i = 0; i < m-2; i++)
    {
        cout<<t[i]<<" ";
        cout<<t[i+1]<<" ";
        cout<<t[i+2]<<endl;

    }
    cout<<"Subarray containing four elements:"<<endl;
    for (int  i = 0; i < m-3; i++)
    {
        cout<<t[i]<<" ";
        cout<<t[i+1]<<" ";
        cout<<t[i+2]<<" ";
        cout<<t[i+3]<<endl;

    }

    // this is not a optimized solution make it optimized
    */

// Approch 2 - optimized solution






    // #Problem - Divide array in 2 subarray with equal sum

    /*
    // approch 1-

    int ad[8] = {3,4,-2,5,8,20,-10,8};
    int ans1 =0;
    int ans2 = 0;
    int c=8;

    for (int i = 0; i < c-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ans1 += ad[j];
        }

        for (int j = i+1; j < c; j++)
        {
            ans2 += ad[j];
        }
        if( ans1 == ans2){
            cout<<"TRUE"<<endl;
        }
    }
    */

    /*
    // Second Approch

    int ad[8] = {3,4,-2,5,8,20,-10,8};
    int s = 8;
    int total = 0;
    int answ;
    int pre = 0;
    for (int i = 0; i < s; i++)
    {
        total += ad[i];
    }
    // cout<<total;

    for (int j = 0; j < s -1; j++)
    {
        pre += ad[j];

    answ = total - pre;

    if ( answ == pre)
    {
        cout<<"YES"<<endl;
    }

    }
    */

    /*
    // using user defined function
    int n;
    cout<<"Enter a size if array: "<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements in array: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    cout<<divide(v);
    */

    // #Problem - Largest sum in contiguous subarray

    /*
    // Approch 1 - time complexity O(n^2)
    // it does not working properly
    int n3;
    cout<<"Enter a size if array: ";
    cin>>n3;

    int vrr[1000];

    int maxi = INT32_MIN;
    int sum = 0;
    cout<<"Enter elements in array: ";

    for (int i = 0; i < n3; i++)
    {
        cin>>vrr[i];
    }

    for (int i = 0; i < n3; i++)
    {
        for (int j = i; j < n3; j++)
        {
            sum += vrr[j];
           maxi = max(maxi , sum);
        }

    }
    cout<<"Largest sum in subarray is :"<<maxi <<endl;
    */

    // Optimized approch - KADANE'S Algorithm

    /*
    Input:
    N = 5
     kd[] = {1,2,3,-2,5}
    Output:
    9
    Explanation:
    Max subarray sum is 9
    of elements (1, 2, 3, -2, 5) which
    is a contiguous subarray.
    */

    /*
    int kd[5] = {1,2,3,-2,5};
    int n = 5;

      int maxi = INT32_MIN;
      int sum = 0;

           for(int i = 0; i<n; i++){

               sum += kd[i];
               maxi = max(maxi , sum);

               if(sum < 0)
                   sum = 0;
           }
        cout<<"Largest sum in subarray is :"<< maxi <<endl;
    */

    // #Problrem - Max difference between 2 element conditions apply

    int me[8] = {9, 5, 8, 12, 2, 3, 7, 4};

    int m1 = 8;
    // here we need o/p as 12 - 5 = 7

    // Approch 1
 
 /*
    int ans4 = INT32_MIN;
    
    for (int i = 0; i < m1-1; i++)
    {
        for (int j = i + 1; j < m1-1; j++)
        {
            ans4 = max( ans4, me[j] - me[i]); 
        }
      
    } 
    cout <<ans4;
*/

// Approch 2-

// /*

// suffix max

int suffixMax[1000];

suffixMax[m1 - 1] = me[m1 - 1];

    for (int i = m1 - 2; i >= 0; i--) {
        suffixMax[i] = max(suffixMax[i + 1], me[i]);
    }

    int maxDiff = INT32_MIN; // Initialize the maximum difference to a minimum value.

    for (int i = 0; i < m1 - 1; i++) {
        int diff = suffixMax[i + 1] - me[i];
     
     maxDiff = max(maxDiff , diff);
        }
    

    cout<<maxDiff<<endl;

// */

}