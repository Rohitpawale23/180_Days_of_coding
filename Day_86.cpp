
//  DAY 86 - Recursion On Subsequence

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// Array subsequence
void subseq(int arr[] ,int index , int n , vector<vector<int > > &ans , vector<int > &temp )
{

    // base case
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    // Not included / Excluded
    subseq(arr ,index+1 , n , ans , temp );

     // Included
    temp.push_back(arr[index]);
    
     subseq(arr ,index+1 , n , ans , temp );

     temp.pop_back();

}


// String Subsequence
void subseqstr(string str , int index , int n , vector<string>&ans1 , string &temp1 )
{
    // base case
    if(index == n)
    {
        ans1.push_back(temp1);
        return;
    }

    // Not included / Excluded
    subseqstr(str ,index+1 , n , ans1 , temp1 );

     // Included
    temp1.push_back(str[index]);
    
    subseqstr(str ,index+1 , n , ans1 , temp1 );

     temp1.pop_back();
}


// Generate Valid Paranthesis : 
void paranthesis(int n , int left , int right , vector<string>&ans2 , string &temp2)
{

// Base condition
    if(left + right == 2*n)
    {
        ans2.push_back(temp2);
        return;
    }
    // Left Parenthesis
    if(left < n)
    {
        temp2.push_back('(');
        paranthesis(n , left+1 , right , ans2 , temp2);
        temp2.pop_back();
    }

    // Right Parenthesis
    if(right < left)
    {
        temp2.push_back(')');
        paranthesis(n , left , right+1 , ans2 , temp2);
        temp2.pop_back();
    }
}


int main()
{


// Array Subsequence
/*
Time Complexity - O(2^N)
Space Complexity - O(N)
becoz both ans and temp vectors passed by reference
*/

cout<<"Array Sunsequence : "<<endl;

int arr[] = {1,2,3};

vector<vector<int > >ans;
vector<int>temp;

subseq(arr , 0, 3 , ans , temp );

// ans printing

for(int i=0; i<ans.size(); i++)
{
    for(int j=0; j<ans[i].size(); j++)
    {
         cout<<ans[i][j]<<" ";
    }

    cout<<endl;
   
}
cout<<endl;


cout<<"String Sunsequence : "<<endl;


// Array Subsequence
/*
Time Complexity - O(2^N)
Space Complexity - O(N)
becoz both ans1 and temp1 vectors passed by reference
*/

string str = "abcd";

vector<string>ans1;
string temp1;

subseqstr(str , 0, str.size() , ans1 , temp1 );

// ans printing

for(int i=0; i<ans1.size(); i++)
{
         cout<<ans1[i]<<endl;
}
cout<<endl;


cout<<"Generate Valid Paranthesis : "<<endl;

/*
Required output - 

for n = 2
o/p - (()) , ()()   --- 2

for n = 3
---> 5
o/p = ()()() , (())() , ()(()) , ((())) , (() ())

valid paranthesis = ()() , (())

Invalid paranthesis = )()( , )(

- Here condition is 
no. of opening brackets  >= no. of Closing brackets

time Complexity = O(2^n)

Space complexity - O(2^n -1)
*/

int n ;
cout<<"Enter value of n : ";
cin>>n;

vector<string>ans2;
string temp2;

paranthesis(n , 0 , 0 , ans2 , temp2);

for(int i=0; i<ans2.size(); i++)
{
    cout<<ans2[i]<<endl;
}

}