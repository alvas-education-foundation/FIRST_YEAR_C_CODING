#include <stdio.h>
void distict_elements(int a[], int n);
int main()
{
    int size, i, a[20];
    printf("enter the number of elements\n");
    scanf("%d", &size);
    printf("%d\n",size);
     printf("enter the array elements\n");
     for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        printf("%d\t",a[i]);
    }
     printf("\ndistinct elments\n"); 
    distict_elements(a, size);
   return 0;
}
  
void distict_elements(int a[], int n)
{
    int i, j;
    
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<=i; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
    printf("%d\t",a[i]);
    }
}