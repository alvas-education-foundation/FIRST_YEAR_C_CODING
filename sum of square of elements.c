#include <stdio.h>


int main() 

{
   
	int n,a[100],i,sum=0,square;
 
        printf("Enter the size of array\n");
   
        scanf("%d\n",&n);
   
        printf("%d\n",n);
 
        printf("Enter the array elemnts\n");
  
        for(i=0;i<n;i++)
   
        {
  
           scanf("%d\t",&a[i]);
  
           printf("%d\t",a[i]);
 
        }
  
        printf("\nSquare of elements\n");
   
        for(i=0;i<n;i++)
   
       {
         
            square=pow(a[i],2);
     
            printf("%d\t",square);
  
       }
    
  
       for(i=0;i<n;i++)

      {
       
           sum=sum+pow(a[i],2);

      }
    printf("\nsum of square of elements\n");
   
      printf("%d",sum);
  
      return 0;

}