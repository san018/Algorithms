/*
QUESTION:
Roy wanted to increase his typing speed for programming contests.
His friend suggested that he type the sentence "The quick brown fox jumps over the lazy dog" repeatedly.
This sentence is known as a pangram because it contains every letter of the alphabet.
After typing the sentence several times, Roy became bored with it so he started to look for other pangrams.
Given a sentence, determine whether it is a pangram.

Input Format
Input consists of a string 

Output Format
Output a line containing pangram if  is a pangram, otherwise output not pangram.

Sample Input
Input #1

We promptly judged antique ivory buckles for the next prize    
Input #2

We promptly judged antique ivory buckles for the prize    
Sample Output

Output #1

pangram
Output #2

not pangram
Explanation

In the first test case, the answer is pangram because the sentence contains all the letters of the English alphabet. 
The second sentence does not.

*/


#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
        int a[26] = {0};
        for(int i=0;i<s.length();i++)
        {
                if(s[i] >= 65 && s[i]<=90)
                {
                        a[s[i]-65]++;
                }
                else
                {
                        a[s[i]-97]++;
                }
        }
        
        for(int i=0;i<26;i++)
        {
                if(a[i]==0)
                {
                        return "not pangram";
                }
        }
        return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
