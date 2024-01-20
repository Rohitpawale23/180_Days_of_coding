
//  **** DAY 94 -  Josephus Problem || Predict The Winner *****

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// BruteForce
int Bwinner(vector<bool> &person, int n, int index, int p_left, int k)
{
    // Base case
    if (p_left == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (person[i] == 0)
            {
                return i;
            }
        }
    }

    int elim = (k - 1) % p_left;

    while (elim--)
    {
        index = (index + 1) % n;

        // increament index till we get non eliminated person
        while (person[index] == 1)
        {
            index = (index + 1) % n;
        }
    }

    // if we got the index then eliminate that person
    person[index] = 1;

    while (person[index] == 1)
    {
        index = (index + 1) % n;
    }

    return Bwinner(person, n, index, p_left - 1, k);
}

// OPtimized Approach
int Owinner(int n, int k)
{
    // Base condition
    if (n == 1)
    {
        return 0;
    }

    return (Owinner(n - 1, k) + k) % n;
}

int main()
{

    int n, k;
    cout << "Enter number of Persons: ";
    cin >> n;
    cout << "Enter Value of k: ";
    cin >> k;

    /*
    vector<bool>person(n,0);

    cout<<"Winner is : "<<Bwinner(person ,n ,0 , n , k )<<endl;
    */

    /*
    BruteForce Approach
    - create a bool type array of size n initialize with zero
    - change zero to one when person get eliminated
    - here we used circular increament to use array as circular array

    Time Complexity - O(n^2)
    Space Complexity - O(N)

    */

    /*
    Optimized Approach
    - without using any extra array and person left

    Time Complexity - O(N)
    Space Complexity - O(N)
    */
    cout << "Winner is : " << Owinner(n, k) << endl;
}