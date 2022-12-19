#include<stdio.h>

int rmduplicates(int arr[], int n)
{
  if(n==0 || n==1)
   return n;

   int len = 0,i;
  for(i=0;i<n-1;i++)
    if(arr[i] != arr[i+1])
    arr[len++] = arr[i];
    arr[len++] = arr[n-1];
   return len;
}

int main()
{
 int arr[] = {1,2,2,3,4,4,4,5,5};
 int n,i;
  n = sizeof(arr) / sizeof(arr[0]);
  n = rmduplicates(arr,n);

 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
 return 0;

}
