#include <iostream>

using namespace std;

void Rotate90(int matrix[][4], int n)
{
    // transpose of an matrix
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse each row

    for (int i = 0; i < n; i++)
    {
        int s = 0, e = n - 1;
        while (s < e)
        {
            swap(matrix[i][s], matrix[i][e]);
            s++, e--;
        }
    }

    cout << "k times rotated array is:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
}

int main()
{

    // cout<<"Hey HII HELLO"<<endl;

    //  *******Day 45  - Rotate matrix by 90 clockwise ...*************

    // # Problem(1) - Rotate Matrix by 90 degree

    /*
    Traspose an array/matrix then reverse each row of an array

      Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
    Output: [[7,4,1],[8,5,2],[9,6,3]]
    */

    /*
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
            // int n = matrix.size();
            int n = 3;

            // transpose of an matrix
            for(int i = 0; i<n-1 ; i++){

                for(int j = i+1; j<n; j++ ){
                    swap(matrix[i][j] ,matrix[j][i] );
                }
            }

            // reverse each row

            for(int i = 0; i<n; i++){
                 int s = 0 , e = n-1;
                    while( s< e){
                        swap(matrix[i][s] ,matrix[i][e] );
                        s++ , e--;

                    }
            }

    cout<<"90 degree rotated array is:"<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
    cout<<matrix[i][j]<<" ";
        }
    }

    */

    // # Problem(2) - Rotate Matrix by 180 degree

    /*
    // First Approch - rotate array by 90 degree two times as mentioned in above array

    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
            // int n = matrix.size();
            int n = 3;

            // transpose of an matrix
            for(int i = 0; i<n-1 ; i++){

                for(int j = i+1; j<n; j++ ){
                    swap(matrix[i][j] ,matrix[j][i] );
                }
            }

            // reverse each row

            for(int i = 0; i<n; i++){
                 int s = 0 , e = n-1;
                    while( s< e){
                        swap(matrix[i][s] ,matrix[i][e] );
                        s++ , e--;

                    }
            }

            // transpose of an matrix -2
            for(int i = 0; i<n-1 ; i++){

                for(int j = i+1; j<n; j++ ){
                    swap(matrix[i][j] ,matrix[j][i] );
                }
            }

            // reverse each row -2

            for(int i = 0; i<n; i++){
                 int s = 0 , e = n-1;
                    while( s< e){
                        swap(matrix[i][s] ,matrix[i][e] );
                        s++ , e--;

                    }
            }

    cout<<"180 degree rotated array is:"<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
    cout<<matrix[i][j]<<" ";
        }
    }

    */

    /*

    // Second approch - first reverse all columns ans then reverse each row

    int mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int n1 = 4;

    // reverse each column

       for(int i = 0; i<n1; i++){
                 int s = 0 , e = n1-1;
                    while( s< e){
                        swap(mat[s][i] ,mat[e][i] );
                        s++ , e--;
                    }
       }

    // reverse each column

       for(int i = 0; i<n1; i++){
                 int s1 = 0 , e1 = n1-1;
                    while( s1< e1){
                        swap(mat[i][s1] ,mat[i][e1] );
                        s1++ , e1--;
                         }
         }

    cout<<"180 degree rotated array is:"<<endl;

    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n1; j++){
    cout<<mat[i][j]<<" ";
        }
    }

    */

    // Problem(3) - Rotate Matrix 90 Degree ANTICLOCKWISE

    // it as an 270 degree clockwise

    /*

    // First Approch  - rotate 90 degree 3 times two make 270 degree

    int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
            // int n = matrix.size();
            int n = 4;

            // transpose of an matrix -1
            for(int i = 0; i<n-1 ; i++){

                for(int j = i+1; j<n; j++ ){
                    swap(matrix[i][j] ,matrix[j][i] );
                }
            }

            // reverse each row -1

            for(int i = 0; i<n; i++){
                 int s = 0 , e = n-1;
                    while( s< e){
                        swap(matrix[i][s] ,matrix[i][e] );
                        s++ , e--;

                    }
            }

            // transpose of an matrix -2
            for(int i = 0; i<n-1 ; i++){

                for(int j = i+1; j<n; j++ ){
                    swap(matrix[i][j] ,matrix[j][i] );
                }
            }

            // reverse each row -2

            for(int i = 0; i<n; i++){
                 int s = 0 , e = n-1;
                    while( s< e){
                        swap(matrix[i][s] ,matrix[i][e] );
                        s++ , e--;

                    }
            }

            // transpose of an matrix -3
            for(int i = 0; i<n-1 ; i++){

                for(int j = i+1; j<n; j++ ){
                    swap(matrix[i][j] ,matrix[j][i] );
                }
            }

            // reverse each row -3

            for(int i = 0; i<n; i++){
                 int s = 0 , e = n-1;
                    while( s< e){
                        swap(matrix[i][s] ,matrix[i][e] );
                        s++ , e--;

                    }
            }

    cout<<"270 degree clockwise OR 90 degree Anticlockwise rotated array is:"<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
    cout<<matrix[i][j]<<" ";
        }
    }

    */

    /*

    // Second approch - first Transpose matrix and then reverse each column


    int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
            // int n = matrix.size();
            int n = 4;

            // transpose of an matrix
            for(int i =0; i<n-1; i++){
                for(int j =i+1; j<n; j++){
                    swap(matrix[i][j],matrix[j][i] );
                }
            }

            // reverse each column

            for(int i = 0; i<n; i++){
                int s =0 , e = n-1;
            while(s<e)
            {
                swap(matrix[s][i] ,matrix[e][i] );
                s++ , e--;
            }
            }

    cout<<"270 degree clockwise OR 90 degree Anticlockwise rotated array is:"<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
    cout<<matrix[i][j]<<" ";
        }
    }

    */

    /*
    // Third approch - first reverse each row and then transpose the matrix


    int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
            // int n = matrix.size();
            int n = 4;

     // reverse each row
            for(int i = 0; i<n; i++){
                int s =0 , e = n-1;
            while(s<e)
            {
                swap(matrix[i][s] ,matrix[i][e] );
                s++ , e--;
            }
            }

            // transpose of an matrix
            for(int i =0; i<n-1; i++){
                for(int j =i+1; j<n; j++){
                    swap(matrix[i][j],matrix[j][i] );
                }
            }


    cout<<"270 degree clockwise OR 90 degree Anticlockwise rotated array is:"<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
    cout<<matrix[i][j]<<" ";
        }
    }

    */

    // Problem(4) - Rotate Matrix by K times

    /*
    1 time = 90 degree
    2 time = 180 degree
    3 time = 270 degree
    4 time = 360 degree its original position  / 0 degree

    5 time = 90 degree / 1
    6 time = 180 degree / 2
    7 time = 270 degree / 3
    8 time = 360 degree its original position  / no rotation 0

    //  find k % 4 and then rotate it
     we created function for it above the main function
    */

    int matrix[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int k;
    cout << "Enter a value of k:";
    cin >> k;
    int n = 4;
    k = k % 4;

    while (k)
    {
        Rotate90(matrix, 4);
        k--;
    }
}