#include <stdio.h>
struct bsort
{
    int array[100];
};
int main()
{
    struct bsort b;
    int n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("%d\n",n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
  {
    scanf("%d", &b.array[c]);
    printf("%d\t",b.array[c]);
}
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (b.array[d] > b.array[d+1]) /* For decreasing order use < */
      {
        swap       = b.array[d];
        b.array[d]   = b.array[d+1];
        b.array[d+1] = swap;
      }
    }
  }

  printf("\nSorted list in ascending order:\n");

  for (c = 0; c < n; c++)
  {
     printf("%d\t", b.array[c]);
  }

  return 0;
}