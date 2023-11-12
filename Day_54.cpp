#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;


int nums(char ch)
{
if(ch =='I')
return 1;

else if(ch =='V')
return 5;

else if(ch =='X')
return 10;

else if(ch =='L')
return 50;

else if(ch =='C')
return 100;

else if(ch =='D')
return 500;
else
return 1000;
}


vector<int> factorial(int N){
        // code here
        vector<int>ans(1 ,1);
        
        while(N >1){
            
            int carry =0 , res , size=ans.size();
            
            for(int i=0; i<size; i++){
                
                res = ans[i]*N + carry;
               
                ans[i] = res %10;
                 carry = res/10;
            }
            
            while(carry){
                ans.push_back(carry %10);
                carry /= 10;
            }
            N--;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }


int main()
{

// cout<<"Happy Diwali Coders"<<endl;

// *****Day 54 - Roman to Integer | Integer to roman | Factorial of large number*********

// # Problem - Roman to Integer

/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together.
 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right.
 However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
*/

/*
string s =  "III";


 int index =0 , sum =0;
        while(index < s.size()-1){
             if(nums(s[index]) < nums(s[index+1])){
                 sum -= nums(s[index]);
             }
             else
              sum += nums(s[index]);
              index++;
        }
          sum += nums(s[index]);
        cout<<"Output is: "<<sum<<endl;
*/

// HOMEWORK
// #Problem - Integer to Roman


/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together.
 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right.
 However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.
*/

/*Example 2:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
*/

/*

int num = 58;

 string ans="";

        while(num >= 1000){
            ans += "M";
            num -= 1000;
        }
        if(num >= 900){
            ans += "CM";
            num -= 900;
        }
        while(num >= 500){
            ans += "D";
            num -= 500;
        }
        if(num >= 400){
            ans += "CD";
            num -= 400;
        }

        while(num >= 100){
            ans += "C";
            num -= 100;
        }
        if(num >= 90){
            ans += "XC";
            num -= 90;
        }

        while(num >= 50){
            ans += "L";
            num -= 50;
        }
       if(num >= 40){
            ans += "XL";
            num -= 40;
        }

        while(num >= 10){
            ans += "X";
            num -= 10;
        }
        if(num >= 9){
            ans += "IX";
            num -= 9;
        }

        while(num >= 5){
            ans += "V";
             num -= 5;
         }
         if(num >= 4){
             ans += "IV";
             num -= 4;
         }
        while(num >= 1){
            ans += "I";
            num -= 1;
        }

        cout<<"Output is: "<<ans<<endl;
*/

// #Problem - Factorial of a large number 

/*
Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
Example 2:

Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800
*/

int N= 10;

 vector<int>ans(1 ,1);
        int size=ans.size();

        while(N >1){
            
            int carry =0 , res ;             
            for(int i=0; i<size; i++){
                
                res = ans[i]*N + carry;
               
                ans[i] = res %10;
                 carry = res/10;
            }
            
            while(carry){
                ans.push_back(carry %10);
                carry /= 10;
            }
            N--;
        }
        reverse(ans.begin() , ans.end());

// cout<<ans;

}