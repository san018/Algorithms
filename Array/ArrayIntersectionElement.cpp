/*
QUESTION:
Array - Intersection Element

Find the intersection of two given string.
Return the string which has character which appears in both string (same sequence order as string1). 
Input: String1: "Hello"  String2: "world"
Output: "lo"
Input: String 1: "hi" String2: "bye"
Output: null

NOTE: Do not use any printf or scanf statements while writing answers in C Language.
*/

#include "common.h"
#include <string.h>

char * func(char * str1, char * str2){
	// WRITE YOUR CODE HERE
	if(str1==NULL)return NULL;
	char a[1000];
	int i,j,k;
	for(i=0;i<strlen(str1);i++)
	{
	    for(j=0;j<strlen(str2);j++)
	    {
	        if(str1[i]==str2[j])
	        {
              //alter the second string, otherwise duplicates will appear
	            str2[j]='0';
	            a[k]=str1[i];
	            k++;
	        }
	    }
	}
	if(strlen(a)>0) return a;
	return NULL;
}


