#include <stdio.h>

int main() 
{
    int i,n,fact,*n1;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    printf("%d",n);
    n1=&n;
    fact=1;
       for(i=1;i<=*n1;i++)
    {
       fact = fact*i; 
    }
    printf("\nFactorial of %d = ",*n1);
    printf("%d",fact);
	return 0;
}