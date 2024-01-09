
// ***DAY 79 - Recursion in stings **** 

#include<iostream>
using namespace std;

bool checkpall(string str , int s , int e)
{
    if(s >= e)
    {
        return 1;
    }

    if(str[s] != str[e])
    {
        return 0;
    }

    return checkpall(str , s+1 , e-1);
}


int Vcount(string str , int i)
{
    if(i == -1)
    {
        return 0;
    }

    if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
    {
        return 1+Vcount(str , i-1);
    }
    else
    {
        return Vcount(str , i-1);
    }
}

// "&str"  string must be passed by reference
void revstring(string &str , int s , int e)
{
    // base case
    if(s  >= e)
    {
        return ;
    }

    // swapping function
    char c = str[s];
    str[s] = str[e];
    str[e] = c;
    
    revstring(str, s+1 , e-1);
}

// "&str"  string must be passed by reference
void LowtoUpp(string &str , int i)
{
    if(i == -1)
    {
        return ;
    }

    str[i] = 'A' + str[i] -'a';

    LowtoUpp(str , i-1);

}

// "&str"  string must be passed by reference
void Upptolow(string &str  , int i)
{
    if(i== -1)
    {
        return ;
    }

    str[i] = 'a' + str[i] - 'A';

    Upptolow(str , i-1);
}


int main()
{

// Problem (1) - Check Pallindrome 

string str = "naman";

cout<<checkpall(str ,0 , 4)<<endl;


// Problem (2) - Count Vowels - all alphabates are in lowercase

string str2 = "rohie";

cout<<Vcount(str2 , 4 )<<endl;
// here we are pssing last index of str2 as i


// Problem (3) - Reverse a String
// here string is passed by reference in function to make changes in main string

string str3 = "Reverse";

revstring(str3 , 0 ,6);

cout<<str3<<endl;


// Problem (3) - Covert Lowercase string into Uppercase

string low_upp = "rohit";

LowtoUpp(low_upp , 4);

cout<<low_upp<<endl;


// **** Homework ****

// Problrm(1) - convert string in Uppercase to Loercase

string Upp_low = "ROHIT";

Upptolow(Upp_low , 4);

cout<<Upp_low<<endl;

}