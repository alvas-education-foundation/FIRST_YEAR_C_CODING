#include <stdio.h>
#include<math.h>
int main() 

{
    long n;
    int dec=0,i=0,rem;
    printf("Enter the binary number\n");
    scanf("%ld",&n);
    printf("%ld",n);
     while (n != 0)
     {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
     }
     printf("\nAfter coverting Binary to Decimal\n");
     printf("%d",dec);
	return 0;
}