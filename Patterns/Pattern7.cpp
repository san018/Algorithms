/* QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample output.

Sample Input:
4

Sample Output:
1
2 3
4 5 6
7 8 9 10
*/


#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==i)
            {
                cout << count;
            }
            else
            {
                cout << count << " ";
            }
            count++;
        }
        cout << endl;
    }
}
