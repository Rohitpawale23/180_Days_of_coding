
//  **** DAY 95 -  Print N-Bit Binary No. Having More 1s Than 0s *****

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void find(int n, vector<string> &ans, int zero, int one, string &temp)
{
    // Base case
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back('1');
    find(n, ans, zero, one + 1, temp);

    temp.pop_back();

    if (zero < one)
    {
        temp.push_back('0');
        find(n, ans, zero + 1, one, temp);

        temp.pop_back();
    }
}

int main()
{

    /*

    Given a positive integer N, the task is to find all the N bit binary numbers having more than or equal 1’s than 0’s for any prefix of the number.

    Example 1:

    Input:  N = 2
    Output: 11 10
    Explanation: 11 and 10 have more than
    or equal 1's than 0's
    Example 2:

    Input:  N = 3
    Output: 111 110 101
    Explanation: 111, 110 and 101 have more
    than or equal 1's than 0's

    Expected Time Complexity: O(|2N|)
    Expected Auxiliary Space: O(2N)

    */

    int n = 4;

    vector<string> ans;
    string temp;

    find(n, ans, 0, 0, temp);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}