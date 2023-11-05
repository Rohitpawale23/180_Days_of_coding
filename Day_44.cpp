#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void wave(int arr[][4], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
    }
}

int main()
{

    // *******Day 44 - 2-D array interview problem , 2-D vector************

    // cout<<"HII coders!!"<<endl;

    /*
    // creting an 2-D vectors
    vector<vector<int> >matrix (3 , vector<int>(4 ,1));

    cout<<"Rows are: "<<matrix.size()<<endl;

    cout<<"Columns are: "<<matrix[0].size()<<endl;

    for(int i = 0; i<3; i++)
    for(int j = 0; j<4; j++)
    cout<<matrix[i][j]<<" ";

    */

    /*

    // Taking value of row and col from user

    int n , m;
    cout<<"Enter rows and columns :";
    cin>>n>>m;

    vector<vector<int> >matrix1 (n , vector<int>(m ,2));

    cout<<"Rows are: "<<matrix1.size()<<endl;

    cout<<"Columns are: "<<matrix1[0].size()<<endl;

    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cin>>matrix1[i][j];


    cout<<"Entered elements are: "<<endl;

    for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++)
    {
    cout<<matrix1[i][j]<<" ";
    }
    cout<<endl;
    }

    */

    /*

    // # Problem 1 - print Wave Form

    int ar2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    wave(ar2 , 3 ,4);

    */

    // it is not working in the v s code please fix it

    // # Problem 2 - print Spiral Form

    /*
    Input: matrix = [1,2,3,4,5,6,7,8,9]
    Output: [1,2,3,6,9,8,7,4,5]
    */

    /*

    int matrix[3][3] = {1,2,3,4,5,6,7,8,9} ;
    // vector<vector<int> >matrix (3 , vector<int>(3 ,1));
    // int ans[row][col];

    vector<int>ans;

            int row = 3;
            int col = 3;
            int top = 0 , right = col -1, left=0 , bottom= row -1 ;

    // int ans[row][col];
            while(left<= right && top <= bottom)
            {
                // print top
                for(int j = left; j<=right; j++)
                ans.push_back(matrix[top][j]);
                top++;
                // print right
                for(int i = top; i<= bottom; i++)
                ans.push_back(matrix[i][right]);
                right--;

                if(top <= bottom)
                {
                // print bottom
                for(int j = right; j>= left; j-- )
                ans.push_back(matrix[bottom][j]);
                bottom--;
                }

                // print left
                if( left <= right){
                for(int i = bottom; i>= top; i--)
                ans.push_back(matrix[i][left]);
                left++;
                }

            }

            cout<<"Input  is: "<<endl;
    for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++)
    {
    cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }
           cout<<"It's spiral form is: "<<endl;
    for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++)
    {
    cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }

    */

    // # Problem 3 - print Transpose of an matrix

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 3; // size of an array n*n

    cout << "Matrix is:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "Transpose matrix is:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}