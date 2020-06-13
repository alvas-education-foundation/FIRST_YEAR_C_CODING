#
include <stdio.h>
int main()
{
    int a[10][10], t[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d\n", &r, &c);
    printf("%d %d\n",r,c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d\n",&a[i][j]);
            printf("%d\n",a[i][j]);
        }
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    for (i = 0; i < r; ++i)
       {
        for (j = 0; j < c; ++j)
        {
            t[j][i] = a[i][j];
        }
       }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d  ", t[i][j]);
            if (j == r - 1)
                printf("\n");
      }
    }
    return 0;
}