#include <stdio.h>
int main()
{

    int m,n,i,j,m1[10][10],m2[10][10],m3[10][10];
    printf("Enter the value of m and n\n");
    scanf("%d %d\n",&m,&n);
    printf("%d %d\n",m,n);
    printf("Enter the first matrix\n");
    for(i = 0; i < m; i++)
    {
       for(j = 0; j < n; j++)
        {
             scanf("%d\t",&m1[i][j]);
             printf("%d\t",m1[i][j]);
            
        }
    printf("\n");
    }
   
    printf("Enter the second matrix\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d\t",&m2[i][j]);
             printf("%d\t",m2[i][j]);
            
        }
        printf("\n");
    }
    
   printf("Addition of matrix\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
  
    printf("Subtraction of matrix\n");
    for(i = 0;i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            m3[i][j]=m1[i][j]-m2[i][j];
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
   
 return 0;
}-