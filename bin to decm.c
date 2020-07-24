#include <stdio.h>
#include<math.h>
int main() 

{
    int n,*n1;
    int dec=0,i=0,rem;
    printf("Enter the binary number\n");
    scanf("%d",&n);
    printf("%d",n);
    n1=&n;
     while (*n1 != 0)
     {
        rem = *n1 % 10;
       *n1 /= 10;
        dec += rem * pow(2, i);
        ++i;
     }
     printf("\nAfter coverting Binary to Decimal\n");
     printf("%d",dec);
	return 0;
}