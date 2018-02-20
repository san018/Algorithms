/*
QUESTION:

Find dup character
In a given string, there is one character which appears twice. Find a function to find the character and return it.
 
Input: "hello"
Output : 'l'
Input: "asdfghja"
Output: 'a'

NOTE: Do not use any printf or scanf statements while writing answers in C Language.
*/

#include<stdio.h>
#include<string.h>
char func(char * str){
  char a = 'a';
  int i,j;
  for( i=0;i<strlen(str);i++)
  {
      for(j= i+1;j<strlen(str);j++)
      { 
         if(str[i]== str[j])
          {
            a = str[i];
            break;
          }
      }
  }
return a;
}
