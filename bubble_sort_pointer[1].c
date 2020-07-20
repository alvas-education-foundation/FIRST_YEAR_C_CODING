#include <stdio.h>
void main()
{
   int *a,i,j,tmp,n;
    
   
   printf(" Enter the number of elements\n");
   scanf("%d",&n);
   printf("%d",n);
   
   printf("\nInput %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	 
	  scanf("%d",a+i);
	  printf("%d\t",*(a+i));
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++)
      {
	  printf("%d\t",*(a+i));
	  }         
printf("\n");
}