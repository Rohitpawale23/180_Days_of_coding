
//  **** DAY 93 -  Tower Of Hanoi *****

/*
Their are three rods source , helper and Destination
our aim is to move all disks from source to Destination
but Conditions are -
- We can only move one disk at one time
- Small Disks should be placed on big disks
- it is not aloud to place big disk on small disk
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Tower of Hanoi

void TOH(int n, int sour, int help, int dest)
{
    // Base condition
    if (n == 1)
    {
        cout << "Move disk " << n << " from " << sour << " to " << dest << endl;
        return;
    }

    TOH(n - 1, sour, dest, help);

    cout << "Move disk " << n << " from " << sour << " to " << dest << endl;

    TOH(n - 1, help, sour, dest);
}

int main()
{

    int n;
    cout << "Enter a number of Disks: ";
    cin >> n;

    TOH(n, 1, 2, 3);

    cout << "Steps are : " << pow(2, n) - 1 << endl;

    /*
    Time complexity
    Function runs for 2^n -1 steps
    so , time complexity is - O(2^n -1) == O(2^n)

    Space complexity - O(n)
    */
}