/*
Linear Search

The linear search does a sequential search for the whole array. If the element is found, it breaks out of the loop
Time Complexity : O(n)

*/


#include <iostream>

using namespace std;

int main() {
int n,key;
cin >> n;
int a[n];
for(int i=0;i<n;i++)
{
    cin >> a[i]; 
}
cin >> key;
for(int i=0;i<n;i++)
{
    if(a[i] == key)
    {
        cout << "Element found";
        return 0;
    }
}
cout << "Element not found";
return 0;
}
