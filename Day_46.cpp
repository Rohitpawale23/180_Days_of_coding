#include <iostream>
using namespace std;

int main()
{

    // cout<<"Namaste Coders !!"<<endl;

    // *******Day 46 - Binary search , search in row-col wise in sorted matrix*************

    // note - to apply binary search array must be sorted

    // # Problem(1) - Search in 2-D array

    /*
    it is an Brute force approch
    // *First approch - linear search in an array

     n is number of rows and m is number of columns

     it has time complexity O(n*m) and space complexity O(1)
    */

    /*
    *Second approch - Binary search in an 2-D array / matrix
     here condition is array / matrix should be sorted
    it better aproch than first it has time complexity O(N+log(M)) ans space complexity O(1)
    */

    /*
    int mat[4][5] = {2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};

    int n = 4; //rows
    int m = 5; // columns
    int x = 52;

    // first find row in which x is present
    // then apply binary search for this row only

    for (int i = 0; i <n; i++)
    {
        if(mat[i][0] <= x && x <= mat[i][n-1])
        {
            int s = 0 , e = n-1;
            int mid = (s+e) /2;

            while (s< e)
            {

            if ( mat[i][mid] == x)
            {
            cout<<1<<endl;
            break;
            }
            else if( mat[i][mid] < x){
                s = mid +1;
            }
            else{
                e = mid -1;
            }
            cout<<0<<endl;
            break;
            }

        }
    }
    // it returns 1 bcoz 52 present in matrix

    */

    /*
    Best approch
    * Third approch - it has time complexity log(n*m) ansd space complexity O(1)
    use
    row-index = index / col
    column-index = index % col
    */

    /*

    int mat[4][5] = {2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};

    int n = 4; //rows
    int m = 5; // columns
    int x = 111;

    int s = 0  , e = n*m-1 ,rindex , cindex , mid ;

    while ( s<= e)
    {
        mid = (s+e) /2 ;

        rindex = mid /m;
         cindex = mid % m;

        if(mat[rindex][cindex] == x){
            cout<<1<<endl;
            break;
        }
        else if(mat[rindex][cindex]  < x){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }

    }
    // it returns 1 bcoz 111 present in matrix

    */

    // # Problem(2) - search in sorted row-col wise Matrix

    int matrix[5][5] = {4, 8, 15, 25, 60, 18, 22, 26, 42, 80, 36, 40, 45, 68, 104, 48, 50, 72, 83, 130, 70, 99, 114, 128, 170};

    int m = 5;
    int n = 5;
    int x = 72;

    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            cout << 1 << endl;
            break;
        }
        else if (matrix[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    // cout<<0<<endl;
    // it returns 1 bcoz 72 is present in matrix
}
