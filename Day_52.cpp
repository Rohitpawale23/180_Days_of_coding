#include<iostream>
#include<vector>
using namespace std;


int main()
{

// cout<<"HII"<<endl;

//  *****Day 52 - Longest Pallindrome || Sorting the sentence ********

// Problem  - Longest Pallindrome

/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built 
is "dccaccd",
 whose length is 7.

*/

/*

string s = "abccccdd";

   vector<int> lower(26 , 0) , upper(26 ,0);

// storing frequencies of all alphabates

        for(int i = 0; i<s.size(); i++)
        {
        if(s[i] >= 'a')
        lower[s[i] -'a']++;
        else
        upper[s[i] -'A']++;
        }
    int count = 0;
    bool odd = 0;
        for(int i = 0; i<26; i++)
        {

        //for lower
        if(lower[i] %2 == 0)
        count += lower[i];  // if evven direct add
        
        else{    
        count += lower[i] -1; //if odd minus 1 to make even then add
        odd = 1;
        }
        
        //for upper
        if(upper[i] %2 == 0)
        count += upper[i];  // if evven direct add
        
        else{    
        count += upper[i] -1 ; //if odd minus 1 to make even then add
        odd = 1;
        }
    }    

cout<<"Longest Pallindrome size is: "<<count + odd;


*/

// Problem  - Sorting the sentence


/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position
 to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as
 "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words,
 reconstruct and return the original sentence.
*/

/*
Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions 
"This1 is2 a3 sentence4", then remove the numbers.
*/

string s = "is2 sentence4 This1 a3";

 vector<string>ans(10);
        // string ans;

       string temp ="";
        int count = 0 , index = 0;

        while(index < s.size())
        {
            if( s[index] == ' ')
            {
                int pos = temp[temp.size()-1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            }
            else
            temp += s[index];
            index++;
        }
         int pos = temp[temp.size()-1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;

        // accessing the ans
        for(int i = 1; i<=count; i++)
        {
            temp += ans[i];
            temp += ' ';
        }
        temp.pop_back();

        cout<<"Output is: "<<endl;
      cout<<temp;


}