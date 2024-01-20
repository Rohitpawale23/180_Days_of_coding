
//  **** DAY 92 - Permutations -2 || Ways To sum N *****

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permut(vector<int> &arr, int index, vector<vector<int>> &ans)
{
    vector<bool> visited(21, 0);

    // base condition
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (visited[arr[i] + 10] == 0)
        {
            swap(arr[i], arr[index]);
            permut(arr, index + 1, ans);
            swap(arr[i], arr[index]);
            visited[arr[i] + 10] = 1;
        }
    }
}

// Ways to do sum of elements in array to get required target sum

int ways(int arr[], int m, int sum)
{
    // Base consition
    if (sum == 0)
    {
        return 1;
    }

    if (sum < 0)
    {
        return 0;
    }

    long long ans = 0;

    for (int i = 0; i < m; i++)
    {
        ans += ways(arr, m, sum - arr[i]);
    }

    return ans;
}

int main()
{

    //  Problem - Permutation - 2

    /*
    Given a collection of numbers, nums, that might contain duplicates,
     return all possible unique permutations in any order.

    Example 1:

    Input: nums = [1,1,2]
    Output:
    [[1,1,2],
     [1,2,1],
     [2,1,1]]
    */

    /*
    vector<int>arr(1,1,2);

    vector<vector<int>>ans;

    permut(arr , 0  ,ans);

    // ans printing
    for(int i=0; i<ans.size; i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }

    */

    //  Problem - Ways to sum N

    int arr[] = {1, 5, 6};
    int sum = 7;
    int m = 3;

    cout << "Output is : " << ways(arr, m, sum) << endl;
}