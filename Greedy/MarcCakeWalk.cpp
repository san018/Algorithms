/*

Question:

https://www.hackerrank.com/challenges/marcs-cakewalk/problem

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++)
        {
        cin >> a[i];
    }
    sort(a,a+n,greater<long long int>());
    long long int miles =0;
    
    for(int i=0;i<n;i++)
        {
        miles += (a[i] * pow(2,i));
    }
    cout << miles;
}
