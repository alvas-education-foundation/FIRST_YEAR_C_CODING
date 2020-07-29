#include <stdio.h>

int main()
{
    int n,count,*c;
    long first,second,next;
   
    printf("Enter number of series\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Fibonnaci Numbers are\n");
    first = 0;
    second = 1;
    c=&count;
    for(*c=1; *c<=n;*c++)
    {
        printf("%ld\n",first);
        next = first+second;
        first=second;
        second=next;
       
    }
return 0;
}