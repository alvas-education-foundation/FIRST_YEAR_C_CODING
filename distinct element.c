#include<stdio.h>
int main()
{
 int a[20],count=0,i,n,j;
 printf("Enter the size of array\n");
 scanf("%d",&n);
 printf("%d\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  printf("%d\t",a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<=i;j++)
  {
   if(a[i]==a[j])
   break;
  }
  if(i==j)
  {
   count++;
  }
 }
 printf("\nThe count of distinct elements in array is %d",count);
}