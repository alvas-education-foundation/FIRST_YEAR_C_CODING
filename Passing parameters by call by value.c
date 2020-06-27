#include<stdio.h>
int add (int i, int );
void main()
{
    int sum, a=50, b=200; 
    sum=add (a,b); 
    printf("sum is %d", sum);
}

    int add (int i, int j)
{
    int sum;
    sum = i+j;
    return sum;
}