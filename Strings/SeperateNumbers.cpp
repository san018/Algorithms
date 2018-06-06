/*

QUESTION:
https://www.hackerrank.com/challenges/separate-the-numbers/problem

*/

#include <bits/stdc++.h>

using namespace std;
string s ;

int main( )
{
    int q ;
    cin >> q ;


    while( q-- ) {
        cin >> s ;

        if( s[ 0 ] == '0' ) {
            cout << "NO" << endl ;
            continue ;
        }

        bool flag = false ;
        int n = s.length() ;

        long long cur_val = 0 ;
        for( int i = 0 ; i < n - 1 ; i++ ) {
              cur_val = cur_val * 10 + s[i] - '0' ;
              int j = i + 1 ;
              long long exp_val = cur_val + 1 , new_val = 0 ;

              while( j < n ) {
                    if( new_val == 0 && s[ j ] == '0' ) {
                        new_val = 1 ;
                        break ;
                    }
                  
                    new_val = new_val * 10 + s[ j ] - '0' ;
                    if( new_val == exp_val ) {
                          exp_val++ ;
                          new_val = 0 ;
                    }
                    j++ ;
              }
              if( new_val == 0 ) {
                  cout << "YES" << " " << cur_val << endl ;
                  flag = true ;
                  break ;
              }

        }

        if( flag == false ) cout << "NO" << endl ;


    }

    return 0 ;
}
