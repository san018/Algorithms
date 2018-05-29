/*

QUESTION:


Priyanka works for an international toy company that ships by container.
Her task is to the determine the lowest cost way to combine her orders for shipping.She has a list of item weights.
The shipping company has a requirement that all items loaded in a container must weigh less than or equal to 4 units plus the weight of the minimum weight item. 
All items meeting that requirement will be shipped in one container.
What is the smallest number of containers that can be contracted to ship the items based on the given list of weights?

Input Format
The first line contains an integer , the number of orders to ship. 
Next line will contain  integers, , representing the orders in a weight array.

Output Format
Return the integer value of the number of containers Priyanka must contract ot ship all of the toys.

Sample Input

8
1 2 3 21 7 12 14 21

Sample Output

4

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int toy=1, init = a[0];
    for(int i=1;i<n;i++)
        if(a[i] - init > 4){
        init = a[i];
        toy++;
    }
    cout << toy;
    return 0;
}
