/*
QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample outputs.

Sample Input 1: 
5

Sample Output 1:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Sample Input 2:
3

Sample Output 2:
1 2 3
1 2
1
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=n;i>=1;i--)
	{
             for(int j=1;j<=i;j++)
              {
                   if(j == i)
                  {
                  cout << j ;
                  }
                  else
                  {
                  cout << j << " ";
                  }
              }
              cout << endl;
	  }
return 0;
}
