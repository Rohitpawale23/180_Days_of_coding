#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

// cout<<"HII"<<endl;

// Problem - Longest prefix suffix | KMP Algorithm 

/*
Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

Example 1:

Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper 
prefix and suffix. 
*/

string s = "abab";

 vector<int>lps(s.size() , 0);
	    
	    int pre=0 ,suf=1;
	    
	    while(suf < s.size())
	    {
	       // equal
	       if(s[pre] == s[suf]){
	           lps[suf] = pre +1;
	           pre++ , suf++;
	       }
	          //not equal
	       else{
	           
	           if(pre == 0){
	               lps[suf] = 0;
	               suf++;
	           }
	           else
	           pre = lps[pre -1];
	       }
	    
	    }
	    cout<<"Output is: "<<lps[s.size() -1];



}