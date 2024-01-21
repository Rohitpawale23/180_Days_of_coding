
//  **** DAY 94 -  RAT IN A MAZE *****

// Recursion in 2-D Array

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
string dir = "UDLR";

bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>> &matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited)
{
    // Base case
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;

    for (int k = 0; k < 4; k++)
    {

        if (valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
        {
            path.push_back(dir[k]);

            total(matrix, i + row[k], j + col[k], n, path, ans, visited);

            path.pop_back();
        }
    }

    visited[i][j] = 0;
}

int main()
{

    /*
    Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
    Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

    Example 1:

    Input:
    N = 4
    m[][] = {{1, 0, 0, 0},
             {1, 1, 0, 1},
             {1, 1, 0, 0},
             {0, 1, 1, 1}}
    Output:
    DDRDRR DRDDRR
    Explanation:
    The rat can reach the destination at
    (3, 3) from (0, 0) by two paths - DRDDRR
    and DDRDRR, when printed in sorted order
    we get DDRDRR DRDDRR.
    */

    int n = 4;

    // int m[4][4] = {{1, 0, 0, 0},
    //          {1, 1, 0, 1},
    //          {1, 1, 0, 0},
    //          {0, 1, 1, 1}};

    vector<vector<int>> m{{1, 0, 0, 0},
                          {1, 1, 0, 1},
                          {1, 1, 0, 0},
                          {0, 1, 1, 1}};

    string path;
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));

    // if(m[0][0] == 0 || m[n-1][n-1] == 0)
    // {
    //     return ans;
    // }

    total(m, 0, 0, n, path, ans, visited);

    // cout<<ans<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}