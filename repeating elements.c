#include <stdio.h>

int main()   

{    
    
   
   int arr[100],i,j,n;
 
   printf("enter the size of array\n");
   
   scanf("%d\n",&n);
   
   printf("%d\n",n);
   
   printf("enter the array elements\n");
 
   for(i=0;i<n;i++)
    
   {
   
      scanf("%d\t",&arr[i]);
  
      printf("%d\t",arr[i]);
   
   }    
  
   printf("\nDuplicate elements in given array: \n");    
 
   for( i = 0; i < n; i++)
  
    {    
      
      for( j = i + 1; j < n; j++)
      
       {    
          
         if(arr[i] == arr[j])    
       
         printf("%d\t", arr[i]);    
    
       }    
  
    }    
   
    return 0;   
 
}