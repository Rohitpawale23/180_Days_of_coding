#include <iostream>
using namespace std;

// fibonacci number
int fibo(int n)
{
    // Base case
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

// nth step
int totalWays(int m)
{
    if (m <= 1)
    {
        return m;
    }
    return totalWays(m - 1) + totalWays(m - 2);
}

// GCD of two numbers
void Gcd(int num1, int num2)
{
    if (num2 == 0)
    {
        cout << num1 << endl;
        return;
    }
    Gcd(num2, num1 % num2);
}

int main()
{

    // *** Day 75 - Recursion Problems On Leetcode ****

    //  # Nth Fibonacci Number

    int n = 4;
    // iterative method

    // /*
    // Recursive method
    // cout<<fibo(n)<<endl;
    // */

    //  # M th Stair
    int m = 5;

    // Iterative method

    /*
    // Recursive Method
    cout<<totalWays(m)<<endl;
    */

    // # GCD Of a numbers (Greatest Common Divisor)

    int num1 = 18, num2 = 48;

    cout << "Required answer is : " << endl;
    Gcd(num1, num2);
}