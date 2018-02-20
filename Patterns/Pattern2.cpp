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
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

*/
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
      for(int j=n;j>=i;j--)
		    {
           if(j-1!=i-1)
           cout << i << " ";
           else
          cout << i;
		    }
		  cout << endl;
	}
  return 0;
}
