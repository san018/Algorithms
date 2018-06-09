/*
QUESTION:

Consider an array of numeric strings where each string is a positive number with anywhere from 1 to  10^6 digits.
Sort the array's elements in non-decreasing, 
or ascending order of their integer values and print each element of the sorted array on a new line

Sample Input 0

6
31415926535897932384626433832795
1
3
10
3
5
Sample Output 0

1
3
3
5
10
31415926535897932384626433832795
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool fun (string i,string j)
    {
    int n = i.length();
    int m = j.length();
    if(n==m)
        return (i<j);
        
    return(n<m);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 long long int n;
 cin >> n;
 vector<string> a(n);
 for(int i=0;i<n;i++) 
 {
         cin >> a[i];
 }
 sort(a.begin(),a.end(),fun);
 for(int i=0;i<n;i++)
 {      
         cout << a[i] << endl;
 }
}
