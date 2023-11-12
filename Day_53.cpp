#include<iostream>
#include<vector>

#include <bits/stdc++.h>
using namespace std;

string add(string num1 ,string num2){

string ans;
int index1 = num1.size()-1 , index2 = num2.size()-1;
int sum ,carry =0;

while(index2 >=0){

    sum = (num1[index1] -'0') + (num2[index2] -'0') + carry;
    carry = sum /10;
    char c = '0' + sum%10;
    ans += c;
 index2-- , index1--;
}

while(index1 >=0){

    sum = (num1[index1] -'0') + carry;
    carry = sum /10;
    char c = '0' + sum%10;
    ans +=c;
    index1--;
}

if(carry){
    ans += '1';
}\

// reverse the ans string

reverse(ans.begin() , ans.end());

return ans;

}


int main()
{
// cout<<"Interview problems on strings"<<endl;

// *****Day 53 - Sort vowels || Add Strings *******

// #Problem(1) - Sort Vowels in a String

/*
1.select the vowels 
2. sort the vowels
3. insert the vowels in its appropriate position
*/

/*
Given a 0-indexed string s, permute s to get a new string t such that:

All consonants remain in their original places. More formally, if there is an index i 
with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
The vowels must be sorted in the nondecreasing order of their ASCII values.
 More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
Return the resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase.
 Consonants comprise all letters that are not vowels.

Example 1:

Input: s = 
Output: "lEOtcede"
Explanation: 'E', 'O', and 'e' are the vowels in s; 'l', 't', 'c', and 'd' are all consonants. The vowels are sorted according to their ASCII values, and the consonants remain in the same places.
*/

/*

string s = "lEetcOde";

 vector<int>lower(26 ,0);     
    vector<int>upper(26 ,0);
    
    for(int i=0; i<s.size(); i++){

        // lower a e i o u
        if(s[i] == 'a'|| s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
            lower[s[i] -'a']++;
            s[i] ='#';
        }

        // upper A E I O U
          if(s[i] == 'A'|| s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'){
            upper[s[i] -'A']++;
            s[i] ='#';
        }
    }

    string vowel;

    // upper
    for(int i=0; i<26; i++){
        char c = 'A' + i;
        while(upper[i]){
            vowel += c;
            upper[i]--;
        }
    }

    // lower
    for(int i=0; i<26; i++){
        char c = 'a' + i;
        while(lower[i]){
            vowel += c;
            lower[i]--;
        }
    }
// inserting sorted vowels in main s string
int first = 0 , second = 0;
// second pointer for vowel index 
// first pointer for s string

while(second < vowel.size()){

    if(s[first] == '#'){
        s[first] = vowel[second];
        second++;
    }
    first++;
}

cout<<"Output is: "<<s<<endl;

*/

// # Problem - ADD Strings 

/*
Given two non-negative integers, num1 and num2 represented as string,
 return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for 
handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.


Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
*/

string num1= "11";
string num2= "123";

// we defined add function before main

if(num1.size() < num2.size()){
        cout<<"output is: "<<add(num2 , num1);
        }
        else
        cout<<"output is: "<<add(num1 , num2);

}