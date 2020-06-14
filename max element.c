#include <stdio.h>
int main()
{
  int m, n, i, j, a[100][100], max[100];

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d\t%d",&m,&n);
  printf("%d\t%d\n",m,n);
  printf("Enter the elements of the matrix\n");
    for (i = 0; i< m; i++)
    {
    for(j= 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
      printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (a[i][j] > max[i])
        max[i] = a[i][j];
    }
  }
  for(i=0;i<m;i++)
  {
     
       printf("Maximum element in the row %d is\n",i+1);
      printf("%d\n",max[i]);
  }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[j][i]>max[i]);
            max[i]=a[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("maximum element in the column %d is\n",i+1);
        printf("%d\n",max[i]);
    }
  return 0;
}