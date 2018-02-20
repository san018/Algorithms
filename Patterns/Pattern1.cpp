/*
QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample outputs. There is a trailing space at the end of each line.

Sample Input:
5

Sample Output:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/


#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
		//If condition handles the space after the last number
			if(j==i+1)
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
