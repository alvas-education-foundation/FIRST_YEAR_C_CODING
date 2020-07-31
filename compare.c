#include <stdio.h>

int main() 
{
    int a,b;
    printf("Enter the value of a and b \n");
    scanf("%d\n%d\n",&a,&b);
    printf("%d\n%d\n",a,b);
    compare(a,b);
	
}
int compare(int a,int b)
{
    if(a ^ b)
    {
        printf("Valiue of a = %d is not equal to Value of b = %d\n",a,b);
    }
    else
    {
        printf("Value of a = %d is equal to Value of b = %d\n",a,b);
    }
}