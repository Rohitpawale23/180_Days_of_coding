#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{

// cout<<"Coder Army is Bcak !!"<<endl;

//  ******DAY 57 - SLIDING WINDOW************

// Problem (1) - longest substring without repeating character

/*
Given a string s, find the length of the longest 
substring
 without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/

/*
string s = "abcabcbb";

// sliding window approch

        // creat a vector of bool type of size 256 and inilialize with 0 S

        vector<bool>count(256,0);

        int first =0 , second=0 , len=0;
        
        while(second < s.size())
        {
            while(count[s[second]])
            {
                count[s[first]] = 0;
                first++;
            }
            count[s[second]] = 1;
            len = max(len , second -first +1);
            second++;
        }
        cout<<"Outpput is: "<<len<<endl;

*/


// Problem(2) - Smallest Distinct Window

/*
Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be dbca.

Example 1:

Input : "AABBBCBBAC"
Output : 3
Explanation : Sub-string -> "BAC"
Example 2:
Input : "aaab"
Output : 2
Explanation : Sub-string -> "ab"
*/

string str = "AABBBCBBAC" ;
vector<int>count(256 , 0);
        
int first =0 ,second=0 , len=str.size() , diff =0;
        
        // calculate all the unique characters
        
        while(first < str.size())
       {
           if(count[str[first]] == 0)
           diff++;
           
           count[str[first]]++;
           first++;
       }
       
       for(int i=0; i<256; i++)
           count[i]=0;
           
       first =0;
        
        while(second < str.size())
        {
            // diff exixts karta hai
            while(diff && second <str.size())
            {
                if(count[str[second]] == 0)
                diff--;
                
                count[str[second]]++;
                second++;
            }
            
            len = min(len , second -first);
            
            // diff ki value 1 na ban jaye
            while(diff != 1){
                
                len = min(len , second-first);
                count[str[first]]--;
                
                if(count[str[first]] == 0)
                diff++;
                
                first++;
            }
        }
        cout<<"Output is: "<<len<<endl;





}