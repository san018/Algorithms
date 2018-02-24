/*QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample output.

Sample Input:
5

Sample Output:
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*/

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = n;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        if(j==i)
	        {
	            cout << count;
	        }
	        else
	        {
	            cout << count << " ";
	        }
	    }
	    count--;
	    cout << endl;
	}
}
