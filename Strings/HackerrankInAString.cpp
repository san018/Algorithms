/*


QUESTION:
We say that a string contains the word hackerrank if a subsequence of its characters spell the word hackerrank.
For example, if string s = haacckkerrannnnk it does contain hackerrank, but s = haaackkeerank  does not. In the second case, the second r is missing. 
If we reorder the first string as hccaakkerrannnnk, it no longer contains the subsequence due to ordering.

For each query, print YES on a new line if the string contains hackerrank, otherwise, print NO.

Input Format

The first line contains an integer , the number of queries. 
Each of the next  lines contains a single query string .


Output Format
For each query, print YES on a new line if  contains hackerrank, otherwise, print NO.


Sample Input 0

2
hereiamstackerrank
hackerworld
Sample Output 0

YES
NO

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string x = "hackerrank";
        int t =0;
        for(int i=0;i<s.size();i++)
            {
            if(s[i]==x[t])  ++t;
        }

    
    if(t==x.size()) 
        {
        cout << "YES" << endl;
        }
    else
        {
        cout << "NO" << endl;
        }
    }
    return 0;
}
