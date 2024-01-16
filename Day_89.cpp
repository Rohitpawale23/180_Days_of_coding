
//  ****DAY 89 - Permutations of Arrays and Strings ****

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{

    // Base condition
    if (visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);

            permut(arr, ans, temp, visited);

            visited[i] = 0;
            temp.pop_back();
        }
    }
}

void permut2(vector<int> arr, vector<vector<int>> &ans, int index)
{

    // base condition
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);

        permut2(arr, ans, index + 1);

        swap(arr[i], arr[index]);
    }
}

int main()
{

    // Problem - Permutations Of Arrays

    /*
    Required output is - 123 , 132 , 231 , 213 , 312, 321
    total numbers are 3 so permutaions formed are 3! = 3*2*1 = 6
    We have to return all possible permutations

    Time complexity - O(N*N!)
    Space Complexity _ O(N)
    - ans , temp and visited are passed by reference
    */

    // Method 1 -

    cout << "Permutations of array using visited and temp vectors : " << endl;

    int arr[] = {1, 2, 3, 4};
    vector<vector<int>> ans;

    vector<int> temp;
    // temp stores each permutaion at each step then pushbacks in ans vector
    vector<bool> visited(4, 0);
    // size of visited is equals to size of arr when element is visited then its value changes from 0 to 1

    permut(arr, ans, temp, visited);

    // ans printing
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    // Method 2 -

    cout << "\nPermutations of array Without** using visited and temp vectors : " << endl;

    int arr1[] = {1, 2, 3};
    // vector<int>arr1(1,2,3);
    vector<vector<int>> ans2;
    permut2(arr1, ans2, 0);

    // ans2 printing
    for (int i = 0; i < ans2.size(); i++)
    {
        for (int j = 0; j < ans2[i].size(); j++)
        {
            cout << ans2[i][j] << " ";
        }
        cout << endl;
    }
}