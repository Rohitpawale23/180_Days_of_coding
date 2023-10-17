#include <iostream>
using namespace std;

int main()
{

    // cout<<"HELLO , HII"<<endl;

    // *********** Day 23 - Master arrays by Solving problems ******************

    // Problem(1) -Search element in an array

    /*
    // Approch -1
    // declaration
    int arr[] = { 10 ,20,7,11,8,4};
    // find 11 if present then return its index
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 11)
        {
         cout<<i<<" ";
        }
    }
    */

    /*
        // Approch -2

        // declaration
        int arr1[] = {10, 20, 7, 11, 8, 4};
        // find 11 if present then return its index
        // if not then return -1
        int index = -1;
        int key = 11;
        for (int i = 0; i < 6; i++)
        {
            if (arr1[i] == key)
            {
                index = arr1[i];
            }
        }
        cout<<index<<endl;
    */

    // Problem(2) - Reverse an array

    /*
    // Approch 1
     int a[5] = { 23, 45, 27, 17, 96};

     for (int  i = 4; i >= 0 ; i--)
     {
        cout<<a[i]<<" ";
     }
     */

    /*
   // Approch 2
   int b[6] = {6,11,7,4,8,9};
   // declaration of temp array
   int temp[6];

   int i = 5 , j=0;
   while (i>=0)
   {
       temp[i] = b[j]; //storing elements from  b to temp in reverse order
       j++;
       i--;
   }

   // storing these reverse elements in an array b
   for (int i = 0; i < 6; i++)
   {
       b[i] = temp[i];
   }

   // printing of reversed array b[]
   cout<<"Reversed array is:"<<endl;
   for (int i = 0; i < 6; i++)
   {
       cout<<b[i] <<" ";
   }
   */

    /*
    // Approch 3 - using swapping
    int c[6] = {6,8,14,11,3,9};
    int i =0 , j=5;
    while (i<=j)
    {
        swap(c[i] , c[j]);
        j--;
        i++;
    }

    // printing of reversed array c[]
    cout<<"Reversed array is:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<c[i] <<" ";
    }
    */

    /*
     // Problem(3) - Second max in an array

    int sm[7] = {2,6,4,3,8,5,1};
    int ans = INT32_MIN;
    int temp[7];
    for (int i = 0; i < 7; i++)
    {
        if (sm[i] > ans)
    {
         ans = sm[i];
    }
    }

    cout<<"Largest number is: "<<ans<<endl;

    int second = INT32_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (ans != sm[i])
        {
        second = max(second, sm[i]);
        }

    }
    cout<<"Second Largest number is: "<<second<<endl;
    */

    /*
    // Problem(4) - Missing number in an array

    //  Here N = 6 , size of array = N-1 = 6-1

    int mn[5] = {1,3,4,5,6};
    // sum of all elements in an array
    int sum =0;
    for (int i = 0; i < 5; i++)
    {
        sum += mn[i];
    }

    // sum of n number
    int N = 6;
    int a1 = N*(N+1)/2;

    int ams1 = a1 - sum;

    cout<<"Missing Number is:"<<ams1<<endl;
    */

    /*
    // Problem(5) - Fibonacci Series using array
    int n;
    cout<<"Enter a number:";  //nth fibonacci number
    cin>>n;

    int Fs[1000] ; //declaration
    // first = 0
    // second = 1
    Fs[0] = 0;
    Fs[1] = 1;

    for (int i = 2; i < n; i++)
    {
        Fs[i] = Fs[i-1] + Fs[i-2];
    }
    cout<<Fs[n -1];
    */

    /*
    // Problem(6) - Cyclic Rotate/Rotation

    int c1[6] = {2,7,4,11,5,8};
    int n = 6 ;//size of array c1
    int last = c1[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        c1[i+1] = c1[i];
    }
    c1[0] = last;

    cout<<"After one cyclic rotation array brcomes:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<c1[i] <<" ";
    }
    */
}
