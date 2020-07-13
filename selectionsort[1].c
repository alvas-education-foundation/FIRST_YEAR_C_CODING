#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[20], n, i, j, pos, temp;
     printf("Enter number of elements\n ");
     scanf("%d", &n);
     printf("%d\n",n);
    printf("Enter the array elements\n");
     for(i=0;i<n;i++)
 {
    scanf("%d",(arr+i)); 
    printf("%d\t",*(arr+i));
 }
    for (i=0;i<(n-1);i++) 
 {
    pos=i;
    for (j=i+1;j<n;j++ )
 { 
     if (*(arr+pos)> *(arr+j)) 
     pos=j;
 }
     if ( pos!=i )
 { 
     temp= *(arr+i);
     *(arr+i)= *(arr+pos);
     *(arr+pos)= temp;
 }
 }
    printf("\nSorted list in ascending order:\n");
    for(i=0;i<n;i++)
     printf("%d\t", *(arr+i));

 return 0;
}