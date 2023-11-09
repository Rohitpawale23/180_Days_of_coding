#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateclockwise(string &s)
{

    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0)
    {

        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

void rotateanticlockwise(string &s)
{
    char c = s[0];

    int index = 1;

    while (index < s.size())
    {

        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

int main()
{

    // cout<<"Interview Problems"<<endl;

    // *****Day 51 - String Interview Problmes******

    //  #Problem(1) - Defanging an IP Address

    /*
    Given a valid (IPv4) IP address, return a defanged version of that IP address.

    A defanged IP address replaces every period "." with "[.]".

    Example 1:

    Input: address = "1.1.1.1"
    Output: "1[.]1[.]1[.]1"
    */

    /*
     string address = "255.100.50.0";

      int index = 0;
            string ans;

            while(index < address.size())
            {
                if(address[index] == '.')
                ans += "[.]";
                else
                ans += address[index];

                index++;
            }
            cout<<"Defanged version of IP address is: "<<ans<<endl;

    */

    //  #Problem(2) - Chech if String is rotated by two places

    /*
    Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.

    Example 1:

    Input:
    a = amazon
    b = azonam
    Output:
    1
    Explanation:
    amazon can be rotated anti-clockwise by two places, which will make it as azonam.
    */

    // for that we have to define two function before main to ratate clocke=wise and anticlockwise

    /*

        string str1 = "amazon";
        string str2 = "azonam";

        if (str1.size() != str2.size())
        {
            // return 0;
            cout<<0<<endl;
            return 0;
        }

        string clockwise, anticlockwise = str1;

        clockwise = str1;

        rotateclockwise(clockwise); // rotated by 1 palece

        rotateclockwise(clockwise); // 1 place rotation

        if (clockwise == str2)
        {
            // return 1;
            cout<<1<<endl;
            return 0;
        }

        anticlockwise = str1;

        rotateanticlockwise(anticlockwise); // rotated by 1 palece

        rotateanticlockwise(anticlockwise); // 1 place rotation

        if (anticlockwise == str2)
        {
            // return 1;
            cout<<1<<endl;
            return 0;
        }

        // return 0;

    */

    // # Problem(3) - Check Pangram

    /*
    A pangram is a sentence where every letter of the English alphabet appears at least once.

    Given a string sentence containing only lowercase English letters,
    return true if sentence is a pangram, or false otherwise.

    Example 1:

    Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
    Output: true
    Explanation: sentence contains at least one of every letter of the English alphabet.


    */

    /*

    string sentence = "thequickbrownfoxjumpsoverthelazydog";

     vector<bool>alpha(26 , 0);

        for(int i = 0; i< sentence.size(); i++){

            alpha[sentence[i] - 'a'] = 1;
        }

    for(int i = 0; i<26; i++){

        if(alpha[i] == 0)
        cout<<0;
    }

    cout<<1<<endl;

    */

    // # Problem(4) - Sort a string which contain only lowercase latters

    /*
    Given a string consisting of lowercase letters, arrange all its letters in ascending order.

    Example 1:

    Input:
    S = "edcab"
    Output: "abcde"
    Explanation: characters are in ascending
    order in "abcde".
    */

    string s = "edcab";

    // create array to count the occurance

    vector<int> alpha(26, 0);

    for (int i = 0; i < s.size(); i++)
    {

        alpha[s[i] - 'a']++;
    }
    string ans;

    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;

        while (alpha[i])
        {
            ans += c;
            alpha[i]--;
        }
    }
    cout << "Sorted string is- " << ans << endl;
}