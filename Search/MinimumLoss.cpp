/*
QUESTION:
https://www.hackerrank.com/challenges/minimum-loss/problem
*/

#include <bits/stdc++.h>

using namespace std;
main()
{
        long int n,min=0,diff;
        cin >> n;
        //pair the index with the price and sort
        vector <pair<long,int>> p(n);
        for(int i=0;i<n;i++)
        {
                cin >> p[i].first;
                p[i].second = i;
        }
        
        sort(p.begin(),p.end());
        
        //find the least loss by traversing 
        for(int i=1;i<n;i++)
        {
                if(p[i].second > p[i-1].second)
                continue;
                diff = p[i].first - p[i-1].first;
                if(min == 0 || diff < min)
                {
                        min = diff;
                }
                
        }
        cout << min;
}
