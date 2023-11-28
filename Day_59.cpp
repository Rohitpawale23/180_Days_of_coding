#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


void lpsfind(vector<int>&lps , string s) {
	    // Your code goes here
	   
	    
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
	}

int main()
{

// Day 59 - String matching | KMP Algorithm 

// Problem - String matching 

/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

string haystack = "sadbutsad", needle = "sad";

 vector<int>lps(needle.size() ,0);
        lpsfind(lps , needle);

        int first =0 , second=0 ;

        while(first < haystack.size() && second <needle.size())
        {

            // match
            if(haystack[first] == needle[second]){
                first++ , second++;
            }
            // not match
            else{
                if(second == 0)
                first++;
                else
                second = lps[second-1];
            }
        } 

        // answer exits
        if( second == needle.size())
        return first-second;
        else
        return -1;





}