#include <iostream>
using namespace std;

int main()
{

    // cout<<"HII Everyone!!"<<endl;

    //  *****Day 36 - Binary Search hard interview problems*******

    //  Problem(1) - Aggressive Cows

    /*
    Input:
    n=5
    k=3
    stalls = [1 2 4 8 9]
    Output:
    3
    Explanation:
    The first cow can be placed at stalls[0],
    the second cow can be placed at stalls[2] and
    the third cow can be placed at stalls[3].
    The minimum distance between cows, in this case, is 3,
    which also is the largest among all possible ways.
    */

    /*
        int n = 5;
        int k = 3;
        int stalls[5] = {1, 2, 4, 8, 9};

        int s = 1,  mid, ans;

        // sort the array in increasing order

        // sort(stalls.begin(), stalls.end());

       int e = stalls[n - 1] - stalls[0];

        while (s <= e)
        {
            mid = s + (e - s) / 2;
            int count = 1, pos = stalls[0];

            for (int i = 1; i < n; i++)
            {

                if (pos + mid <= stalls[i])
                {
                    count++;
                    pos = stalls[i];
                }
            }

            if (count < k)
            {
                e = mid - 1;
            }
            else
            {
                ans = mid;
                s = mid + 1;
            }
        }

        cout<<"output is : "<<ans<<endl;;

    */

    // #Problem(2) - KOKO Eating Banana

    /*
    Given N piles of bananas, the ith pile has piles[i] bananas and H hours time
    until guards return (N <= H). Find the minimum (S) bananas to eat per hour
    such that Koko can eat all the bananas within H hours. Each hour, Koko chooses
    some pile of bananas and eats S bananas from that pile. If the pile
    has less than S bananas, then she consumes all of them,
    and wont eat any more bananas during that hour.

    Example 1:
    Input:
    n = 4
    piles = [3, 6, 7, 11]
    H = 8
    Output: 4
    */

/*
    int N = 4;
    int piles[4] = {3, 6, 7, 11};
    int H = 8;

    long long sum = 0;
    int s = 0, e = 0, ans, mid;

    for (int i = 0; i < N; i++)
    {
        e = max(e, piles[i]);
        sum += piles[i];
    }

    s = sum / H;
    if (!s)
    {
        s = 1;
    }

    while (s <= e)
    {

        mid = s + (e - s) / 2;
        int ttime = 0;
        for (int i = 0; i < N; i++)
        {

            ttime += piles[i] / mid;

            if (piles[i] % mid)
            {
                ttime++;
            }
        }

        if (ttime > H)
        {
            s = mid + 1;
        }
        else
        {
            ans = mid;
            e = mid - 1;
        }
    }

   cout<<"Answer is:"<<ans<<endl;

*/




}