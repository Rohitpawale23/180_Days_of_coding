#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void lpsfind(vector<int>&lps , string s) {
	    
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

    int KMP_MATCH(string haystack, string needle) {
        

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
        return 1;
        else
        return 0;
    }



int main()
{

//  Day 60 - String HARDProblems for Coding Rounds

// Problem (1) - Longest pallindromic substring 

/*
Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
Note: A palindrome is a word which reads the same backward as forward. Example: "madam".
Example 1:
Input:
S = "abc"
Output: 2
Explanation: 
Add 'b' and 'c' at front of above string to make it
palindrome : "cbabc"
Example 2:

Input:
S = "aacecaaa"
Output: 1
Explanation: Add 'a' at front of above string
to make it palindrome : "aaacecaaa"
*/

/*

string str = "aacecaaa";

 // string reverse 
        string rev = str;
        reverse(rev.begin() , rev.end());
        
        int size = str.size();
        
        str += '$'; //separartor
        str += rev;
        
        // longest prefix suffix
        int n = str.size();
        vector<int>lps(n , 0);
        
        int pre = 0 , suf = 1; 
        
        while(suf < str.size())
        {
            // matched
            if(str[pre] == str[suf])
            {
                lps[suf] = pre + 1;
                pre++ , suf++;
            }
            // Not matched
            else
            {
                if(pre == 0)
                suf++;
                else
                {
                    pre = lps[pre -1];
                }
            }
        }
        // final answer
        
        cout<<"output is: "<<size - lps[n-1];
   */

// Problem (2) - Circular Pattern Matching (H W)   





// Problem (3) - Repeated string match

/*
Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".
Example 1:
Input: a = "abcd", b = "cdabcdab"
Output: 3
Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.
*/

string a = "abc" , b = "cdabcdab";


      if(a == b)
      return 1;

      int repeat =1;
      string temp = a;

      while(temp.size() < b.size())
      {
          temp += a;
          repeat++;
      }  
    //   KMP Pattern search
    if (KMP_MATCH(temp , b)== 1)
    cout<<repeat;

    // temp+a  , KMP Search 
    if (KMP_MATCH(temp+a , b)== 1)
    cout<<repeat+1;

    // return -1;



}
