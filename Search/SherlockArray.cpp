/*
QUESTION:

Watson gives Sherlock an array of integers. 
His challenge is to find an element of the array such that the sum of all elements to the left is equal to the sum of all elements to the right. 
For instance, given the array [5,6,8,11] , 8  is between two subarray that sum to 11. 
If your starting array is [1], that element satisfies the rule as left and right sum to 0.

You will be given arrays of integers and must determine whether there is an element that meets the criterion.

Input Format

The first line contains t, the number of test cases.

The next  pairs of lines each represent a test case. 
- The first line contains n, the number of elements in the array . 
- The second line for each test case contains n space-separated integers.

Output Format

For each test case print YES if there exists an element in the array, 
such that the sum of the elements on its left is equal to the sum of the elements on its right; otherwise print NO.

Sample Input 0

2
3
1 2 3
4
1 2 3 3
Sample Output 0

NO
YES

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
   
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
     ll sum[100000];
        cin >> t;
    while(t--){
        ll n,a;
        cin >> n;
        for(int i=0;i<n;i++)
            { cin >> a;
            if(i==0) sum[i]=a;
                else sum[i] = sum[i-1] + a;               
        }
        bool flag = false;
        for(int i=1;i<n-1;i++)
            {
            if(sum[i-1] == (sum[n-1] - sum[i])){
            flag = true;
                break;}
        }
        if(flag == true || n==1 ) cout << "YES" << endl;
        else cout << "NO" << endl;       
    }
    
    return 0;
}

