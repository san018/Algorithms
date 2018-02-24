/*
QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample output.

Sample Input:
5

Sample Output:
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        count = n - i;
        for(int j=count;j<=n;j++)
        {
            if(j==n)
            {
                cout << j;
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
