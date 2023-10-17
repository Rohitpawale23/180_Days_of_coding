#include <iostream>
#include <cmath>
using namespace std;

char capi(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int countd(int n)
{
    int c = 0;
    while (n)
    {
        c++;
        n = n / 10;
    }
    return c;
}

void arm(int num, int digit)
{
    int n = num;
    int ans = 0;
    int rem;
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        cout << 1;
    else
        cout << 0;
}

void trailingZeroes(int N)
{
    int c = 0;

    while (N >= 5)
    {
        c = c + N / 5;

        N /= 5;
    }
    cout << "No of trailing zero: " << c << endl;
}

int main()
{

    // *******Day 19 - Solving HARD Problems *********

    /*
    // Problem(1) - convert smallcase char to uppercase
    char ch1;
    cout<<"Enter a character:";
    cin>>ch1;
    cout<<"Capital: "<< capi(ch1)<<endl;
    */

    /*
    // Problem(2) - Armstrong number
    // Not working
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int co = countd(num);
    arm(num , co);
    */

    /*
    // Problem (3) - Find trainling zero in fact
    int n4;
    cout<<"Enter a number to check traling zeros:";
    cin>>n4;
    trailingZeroes(n4);
    */

    /*
    // Problem (4) - Valid Rectangle
    int a, b , c,d;  //sides of rectangle
    if ((a == b&& c == d) ||(a == c&& b == d) ||(a == d&& c == b))
    {
        cout<<1;
    }
    else
    cout<<0;
    */

    // Problem(5) - total moves of Bishop (unt/camal)

    // Problem (6) - Nim game
}