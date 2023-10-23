#include <iostream>
using namespace std;

int main()
{

    // cout<<"Hello coders!!"<<endl;

    // ********Day 33 - Top Interview problems on Binary search********************

    // #Problem(1) - Book allocation /Allocate minimum number of pages

    /*
    Book distribution among m students
    - Every student get at least 1 book
    - Book will be allocated in continuous way
    - out of all permutation student with most number of books get min pages
    */

    /*
      Output:113
      Explanation:Allocation can be done in
      following ways:
      {12} and {34, 67, 90} Maximum Pages = 191
      {12, 34} and {67, 90} Maximum Pages = 157
      {12, 34, 67} and {90} Maximum Pages =113.
      Therefore, the minimum of these cases is 113,
      which is selected as the output.
      */

    /*
       int A[4] = {12, 34, 67, 90};
       int M = 2;
       int N = 4;

       if (M > N)
       {
           cout << -1;
       }
       // using binary search
       int s = 0, e = 0, mid, ans;
       // s is the maximun element and e is the sum of an array elements
       for (int i = 0; i < N; i++)
       {

           s = max(s, A[i]);
           e += A[i];
       }

       while (s <= e)
       {
           mid = s + (e - s) / 2;

           int pages = 0, count = 1;

           for (int i = 0; i < N; i++)
           {
               pages += A[i];
               if (pages > mid)
               {
                   count++;
                   pages = A[i];
               }
           }

           if (count <= M)
           {
               ans = mid;
               e = mid - 1;
           }
           else
               s = mid + 1;
       }

       cout << ans << endl;

   */

    // #Problem(2) - Painter Partition
    // The Painter's Partition Problem-

    // same as above problem but instead of pages their are allocation of wall in length
    //  1 length of wall = 1 unit
    /*
    Output: 35
    Explanation: The most optimal way will be:
    Painter 1 allocation : {5,10}
    Painter 2 allocation : {30}
    Painter 3 allocation : {20,15}
    Job will be done when all painters finish
    i.e. at time = max(5+10, 30, 20+15) = 35

    */

    /*
    int k = 3;

    int arr[5] = {5,10,30,20,15};

    int n = 5;
    long long s =0 , e =0, mid  ,ans;
            for(int i = 0; i<n; i++){
               if(s < arr[i]){
                   s = arr[i];
               }
                e += arr[i];
            }

            while(s <= e)
            {
                mid = s + (e - s)/2;
               long long wall=0 , man=1;
                for(int i = 0; i<n; i++)
                {
                    wall += arr[i];
                    if(wall > mid){
                        man++;
                        wall = arr[i];
                    }

                }
                    if(man <= k){
                        ans = mid;
                        e = mid -1;
                    }
                    else
                    s = mid + 1;
            }
            cout<<"Output is: "<<ans<<endl;

    */

    // HomeWork
    // #Problem(3) -  Capacity To Ship Packages Within D Days

    /*
    Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
    Output: 15
    Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
    1st day: 1, 2, 3, 4, 5
    2nd day: 6, 7
    3rd day: 8
    4th day: 9
    5th day: 10
    Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
    */

/*
    int weights [10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int days = 5;
    int s = 0, e = 0, mid, ans;

    for (int i = 0; i < n; i++)
    {
        if (s < weights[i])
        {
            s = weights[i];
        }
        e += weights[i];
    }

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        int pack = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            pack += weights[i];
            if (pack > mid)
            {
                count++;
                pack = weights[i];
            }
        }
        if (count <= days)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    cout<<"answer is : "<<ans<<endl;

*/

}