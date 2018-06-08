/*

QUESTION:
Given a array, Sort it in a alternate order.
For example, First element is sorted in ascending, second element in descending and so on.

Input format:
5
7 8 9 1 2

Output format:
1 9 2 8 7

*/

#include <iostream>
using namespace std;
int main()
{
	int n ,temp ;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int flag = 1;
	for(int i=0;i<n-1;i++)
	{
		for(int j= i+1;j<n;j++)
		{
			if(a[i] > a[j]  && flag > 0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if( a[i] < a[j] && flag < 0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
		flag *= -1;
	}
	
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
}
