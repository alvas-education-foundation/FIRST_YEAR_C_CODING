#include<stdio.h>
int add(); 
int main()
{   
    int sum; 
    sum=add(); 
    printf("sum is %d",sum);
}
    int add()
{
    int sum, i=10,j=20;
    sum=i+j; 
    return sum;
}