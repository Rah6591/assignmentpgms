#include<stdio.h>
int main()
{
 int arr[5];
 int n,i,max,min;
 printf("Give the size\n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }

 max = arr[0];
 min = arr[0];

 for(i=0;i<n;i++)
 {
   if(arr[i] > max)
   max = arr[i];

   if(arr[i] < min)
   min = arr[i];
 }
 printf("max = %d min = %d\n",max,min);

 return 0;

}
