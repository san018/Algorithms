/*

QUESTION:
https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int min;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin >> a[i];
    }
    sort(a,a+n);
    min = abs(a[0]-a[1]);
    for(int i=0;i<n-1;i++)
        {
        if(abs(a[i]-a[i+1])<min)
            min = abs(a[i]-a[i+1]);
    }
    cout << min;
    return 0;
}

