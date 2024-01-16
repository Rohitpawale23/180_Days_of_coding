
//  ***DAY 87 - Subset Sum || Target Sum ***

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Subsetsum(int arr[] , int index , int n , int sum , vector<int > &ans)
{

    // base case
    if(index == n)
    {
        ans.push_back(sum);
        return;
    }

    // not included
    Subsetsum(arr , index+1 , n , sum , ans);

    // included
     Subsetsum(arr , index+1 , n , sum+arr[index] , ans);
}

bool isequal(int arr[] , int index , int n , int target)
{
    // base case
    if(target == 0)
    {
        return 1;
    }

    if(index == n || target<0)
    {
        return 0;
    }

    return isequal(arr , index+1 , n , target) || isequal(arr , index+1 , n , target-arr[index]);

}


int main()
{


// Problem - Subset Sum 
/*
Return sum of each possible subset in the output
repeatation is not aloud and order should be maintained
- Time Complexity - O(2^n)
- SpacecComplexity- O(n)
*/

cout<<"Subset sum : "<<endl;

int arr[] = {3,4,5};
vector<int>ans;

Subsetsum(arr , 0 , 3, 0 , ans);

// ans printing
for(int i=0; i<ans.size(); i++)
{
        cout<<ans[i]<<" ";
}
cout<<endl;


// Problem - Target Sum 
/*
Return 1 if any one subset of array  having sum equals to Target sum
else return 0 

- Time Complexity - O(2^n)
- SpacecComplexity- O(n)
*/
cout<<"\nTarget Sum: "<<endl;

int arr1[] = {3,6,4,5};
int target = 12;

cout<<isequal(arr1 , 0 ,4 , target )<<endl;

// it return 1 becoz {3,4,5} sum is equals to target
// 3+7+5 = 12 == target

}