#include<iostream>
#include<vector>
using namespace std;

int main()
{

// cout<<"Let's Do it!!"<<endl;

// ******Day 38 - Two pointer in C++ ***********

// #Problem(1) - Segregate 0s and 1s from an given arrray

/*
Input:
N = 5
arr[] = {0, 0, 1, 1, 0}
Output: 0 0 0 1 1
*/

/*
int n = 5;  //size of an array
int arr[] = {0, 0, 1, 1, 0};

  int s =0 , e=n-1;
        
        while(s < e)
        {
            if(arr[s] == 0){
                s++;
            }
            else
            {
                if(arr[e] == 0){
                    swap(arr[s] , arr[e]);
                    s++ , e--;
                }
                else
                e--;
                
            }
            
        }

// array printing
cout<<"After segregation of 0s ans 1s :"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
*/


// #Problem(2) - Two Sum

/*
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/

/*
int nums [4]= {2,7,11,15};
int target = 9;


 int s = 0, e = 4 -1;
int ans1 , ans2;
 while( s < e){

   if( nums[s] + nums[e] == target)
  {
    ans1 = nums[s];
    ans2 = nums[e];
    break;
   }
   else if(  nums[s] + nums[e] < target){
       s++;
   }
    else
     e--;
   }
//    output
// 2+7 = 9
    cout<<ans1<<" ";
    cout<<ans2<<" ";
*/


// #Problem(3) - Pair with given difference 

/*
Input 1:

 A = [5, 10, 3, 2, 50, 80]
 B = 78

 Explanation 1:

 Pair (80, 2) gives a difference of 78.
*/

/*
int a [6]= { 5, 10, 3, 2, 50, 80};
int B = 78;

// array must be sorted
int a1 , b1;
 int s =0, e =1 , n1 = 6;
    
    if(B < 0){
        B = B * -1;
    }
    
    while( e < n1)
    {
        
    if (a[e] - a[s] == B ){
    a1 = a[s] , b1 = a[e];
    break;
    }
    
    else if( a[e] - a[s] < B){
        e++;
    }    
    else
    s++;
    
    if(s == e)
        e++;
    }
    
 cout<<a1<<" "<<b1<<endl;

*/






}