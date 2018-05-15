/*

QUESTION:
Numeros the Artist had two lists that were permutations of one another. He was very proud. Unfortunately, while transporting them from one exhibition to another, some numbers were lost out of the first list. Can you find the missing numbers?

Notes

If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
You have to print all the missing numbers in ascending order.
Print each missing number once, even if it is missing multiple times.
The difference between maximum and minimum number in the second list is less than or equal to .
Input Format

There will be four lines of input:
m - the size of the first list,  
The next line contains  m space-separated integers  
n - the size of the second list,  
The next line contains n  space-separated integers 


Output Format:

Output the missing numbers in ascending order.

Sample Input

10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204
Sample Output

204 205 206
Explanation

 is present in both arrays. Its frequency in  is , while its frequency in  is . 
 Similarly,  and  occur twice in , but three times in . The rest of the numbers have the same frequencies in both lists.

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
    ll n,m,a[1000010]={0},b[1000010]={0},f;
    cin >> n;
    for(int i=0;i<n;i++) {cin >> f; a[f]++;}
    cin >> m;
    for(int j=0;j<m;j++) { cin >> f; b[f]++;}
    if(m>n) m=n;
    for(int i=0;i<1000010;i++)
    {if(a[i] != b[i]) cout << i << " ";      
    }
    return 0;
}



/* TOPICS :

Search, Caching, Arrays, Looping 

*/
