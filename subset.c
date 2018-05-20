  #include<stdio.h>
#include<stdbool.h>
void subsetGenerator(int a[], int n, bool b [], int index, int len , int subsetSize )
{
    int i=0;
    //prints if len matches the subsetSize
    if(len == subsetSize)
    {
        for(i=0;i<n;i++)
        {
            if(b[i] == true)
            {
                printf("%d ",a[i]);
            }
        }
        printf("\n");
        return;
    }
    
    //if index reaches end of array
    if(index == n)
    {
        return;
    }
    
    //including element from that index
    b[index] = true;
    subsetGenerator(a,n,b,index+1,len+1,subsetSize);
    
    //excluding element from that index
    b[index] = false;
    subsetGenerator(a,n,b,index+1,len,subsetSize);
}
int main() {
   int n,a[100],i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d", &a[i]);
   }
   bool b [n];
   
   //Because empty set is also a subset of given array (Including Null array, we get 2^n subsets)
   printf("NULL\n");
   
   //generating subsets of all sizes
   for(i=1;i<=n;i++)
   {
   subsetGenerator(a,n,b,0,0,i);
   }
   
}
