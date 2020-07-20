#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[20], n, i, j, pos, temp;
     printf("Enter number of elements\n ");
     scanf("%d", &n);
     printf("%d\n", n);
     
 printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d\t", (arr+i));
printf("%d\t", *(arr+i));
}
    printf("\nDisplay array elements\n");
    for(i=0;i<n;i++)
     printf("%d\t", *(arr+i));

 return 0;
}
