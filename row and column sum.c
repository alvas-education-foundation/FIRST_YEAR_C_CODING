#include <stdio.h>
  
  int main ()
   
 {
 
       
	 int a[10][10],i, j, m, n, rsum,csum;
  
         printf("Enter the order of the matrix\n");
   
         scanf("%d %d\n", &m, &n);
      
	 printf("%d %d\n",m,n);
    
         printf("Enter the matrix\n");
    
         for (i = 0; i < m; ++i)
       
         {
           
             for (j = 0; j < n;   ++j) 
   
             {
               
		 scanf("%d\t", &a[i][j]);
               
		 printf("%d\t",a[i][j]);
       
	     }
         
	      printf("\n");
      
  	}
 
     
        for (i = 0; i < m; i++) 
      
        {
         
       	   rsum=0;
          
           for (j = 0; j < n; j++) 
   
           {
                
              
               rsum = rsum + a[i][j] ;
          
           }
 
          
	   printf("Sum of the %d row is = %d\n", i, rsum);
   
        }
       
        for (j = 0; j < m; ++j) 
 
        {
           
            csum=0;
         
            for (i = 0; i < n; ++i)
        
            {
               
                csum = csum + a[i][j];
   
            }
 
           
            printf("Sum of the %d column is = %d\n", j, csum);
 
   
        }
   
 }

 
    