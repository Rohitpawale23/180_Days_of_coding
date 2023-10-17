#include <iostream>
using namespace std;

int main()
{

    // ******** Day 26 - Sorting in arrays - Bubble sort*********

    // their are two list one is sorted and another is unsorted
    // adjacent elements are get compared with each other
    // if first no. is greater than ssecond number then they get swapped
    // this process continue till all the array is not sorted

    /*
        int a1[1000];
        int n;
        cout << "Enter a size of array:";
        cin >> n;
        cout << "Enter elements of an array:";
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (a1[j] > a1[j + 1])
                {
                    swap(a1[j], a1[j + 1]);
                }
            }
    }
    cout<<"Sorted array:"<<endl;
            // array printing
            for (int i = 0; i < n; i++)
            {
                cout << a1[i] << " ";
            }

    */

    /*
    // to check array is already sorted
    // just add bool variable in above program
     int b1[1000];
     int flag;
        int m;
        cout << "Enter a size of array:";
        cin >> m;
        cout << "Enter elements of an array:";
        bool swapped = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b1[i];
        }

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < m; j++)
            {
                if (b1[j] > b1[j + 1])
                {
                    swapped = 1;
                    swap(b1[j], b1[j + 1]);
                }
            }
            if (swapped == 1)
            flag = 1;
            break;

    }
    cout<<"Sorted array:"<<endl;

            // array printing
            for (int i = 0; i < m; i++)
            {
                cout << b1[i] << " ";
            }
           */

    /*
        // homework - apply bubble sort to sort an array in decreasing order

        int c2[100];
        int n1;
        cout << "Enter a size of an array:";
        cin >> n1;
        cout << "Enter elements of an array:";
        for (int i = 0; i < n1; i++)
        {
            cin >> c2[i];
        }

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                if (c2[j] < c2[j + 1])
                {
                    swap(c2[j], c2[j + 1]);
                }
            }
        }

        // array printing
        cout<<"Sorting of array in decreasing order:"<<endl;
        for (int i = 0; i < n1; i++)
        {
            cout << c2[i] << " ";
        }
    */

    // Homework - sort Array in increasing order but start a bubble form last
    // error is present in this code it is not working properly
    /*
    int d2[100];
        int m1;
        cout << "Enter a size of an array:";
        cin >> m1;
        cout << "Enter elements of an array:";
        for (int i = 0; i < m1; i++)
        {
            cin >> d2[i];
        }

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                if (d2[j] > d2[j + 1])
                {
                    swap(d2[j], d2[j + 1]);
                }
            }
        }

        // array printing
        cout<<"Sorted  array :"<<endl;
        for (int i = 0; i < m1; i++)
        {
            cout << d2[i] << " ";
        }
    */
}