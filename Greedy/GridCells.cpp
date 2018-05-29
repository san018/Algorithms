/*

Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending.
Determine if the columns are also in ascending alphabetical order, top to bottom. Return YES if they are or NO if they are not.

For example, given:
a b c
a d e
e f g

The rows are already in alphabetical order. The columns a a e, b d f and c e g are also in alphabetical order, so the answer would be YES. 
Only elements within the same row can be rearranged. They cannot be moved to a different row.

Input Format

The first line contains , the number of testcases.

Each of the next  sets of lines are described as follows: 
- The first line contains , the number of rows and columns in the grid. 
- The next  lines contains a string of length 

Output Format

For each test case, on a separate line print YES if it is possible to rearrange the grid alphabetically ascending in both its rows and columns, 
or NO otherwise.

Sample Input

1
5
ebacd
fghij
olmkn
trpqs
xywuv
Sample Output

YES
Explanation

The x grid in the  test case can be reordered to

abcde
fghij
klmno
pqrst
uvwxy


*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
        int testcase,n;
        cin >> testcase;
        while(testcase--)
        {       
                cin >> n;
                char a[n][n];
                for(int i=0;i<n;i++)
                {
                        for(int j=0;j<n;j++)
                        {
                                cin >> a[i][j];
                        }
                } 
                for(int i=0;i<n;i++)
                {
                      sort(a[i],a[i]+n);
                }
                bool flag = true;
                
                for(int i=0;i<n;i++)
                {
                        for(int j=0;j<n-1;j++)
                        {
                                if(a[j][i] > a[j+1][i])
                                {
                                        flag = false;
                                }
                        }
                }
                if(flag)
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
