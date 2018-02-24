/* QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample output.

Sample Input:
5

Sample Output:
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            if(j-1 == 0)
            cout << i;
            else
            cout << i << " ";
        }
        cout << endl;
    }
}
