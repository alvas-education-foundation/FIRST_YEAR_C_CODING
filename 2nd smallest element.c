#include <stdio.h>
#include <string.h>
 
main()
{
    int small, secondsmallest;
    int a[100],n, i;
    printf("How many elements do you want to enter: ");
    scanf("%d", &n);
    printf("%d",n);
    printf("\nEnter %d elements: ", n);
    for (i = 0 ; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d\t",a[i]);
    }
    if (a[0] < a[1])
    {
        small = a[0];
        secondsmallest = a[1];
    }
    else 
    {
      small = a[1];
      secondsmallest = a[0];
    }
    for (i = 2; i < n; i++)
    {
        if (a[i] < small)
        {
        secondsmallest = small;
        small = a[i];
        }
        else if (a[i] < secondsmallest)
        {
            secondsmallest = a[i];
        }
    }
    printf(" \nSecond smallest element is %d", secondsmallest);
}+