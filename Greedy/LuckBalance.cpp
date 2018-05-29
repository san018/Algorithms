/*

Question:

Hackerrank : https://www.hackerrank.com/challenges/luck-balance/problem

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,temp =0,count=0,t=0;
    cin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
          cin >> a[i] >> b[i];
           
    }
    for(int i=0;i<n-1;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                    if(a[i] < a[j])
                    {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                            temp = b[i];
                            b[i] = b[j];
                            b[j] = temp; 
                    }
            }
    }
    for(int i=0;i<n;i++)
    {
                  if(b[i]==0)
                  {
                           count += a[i];
                  }
                
                  else if(b[i] == 1 && t < k)
                  {
                        count += a[i];
                        t++;
                  }
                  else if(b[i]==1  )
                  {
                        count = count - a[i];
                  }
    }
 
    cout << count;
    
    return 0;
}
