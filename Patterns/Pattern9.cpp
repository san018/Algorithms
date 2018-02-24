/*
QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample output.

Sample Input:
4

Sample Output:
1
0 1
1 0 1
0 1 0 1

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%2 ==0) 
        {
            count = 0;
        }
        else
        {
            count = 1;
        }
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
            if(count == 0) 
            {
                count = 1;
            }
            else if(count == 1)
            {
                count = 0;
            }
        }
        cout << endl;
    }
}
