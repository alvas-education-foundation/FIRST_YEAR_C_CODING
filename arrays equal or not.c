#include <stdio.h>

int main()

{

       
	int a1[100],a2[100],i,n,m,f;
       
 	printf("enter the  first number of array\n");
   
        scanf("%d\n",&n);
      
        printf("%d\n",n);
       
        printf("enter the second number of array\n");
    
        scanf("%d\n",&m);
       
        printf("%d\n",m);
        
        printf("Enter the first array \n");
    
        for (i=0;i<n;i++)
       
        {
               
            scanf("%d",&a1[i]);
           
            printf("%d\t",a1[i]);
     
        }
       
       printf("\nenter the second array\n");
    
       for(i=0;i<m;i++)
     
       {
           
           scanf("%d\t",&a2[i]);
          
           printf("%d\t",a2[i]);
    
       }
      
       for(i=0;i<n;i++)
   
       {
           
   
                
	  if(a1[i]!=a2[i])
              
          {
                    
              f=0;
                  
              break;
             
          }
              
          else
              
          {
                  
              f=1;
             
          }
              
       }
         
       if(f==0)
      
       {
              
           printf("\nTwo arrays are not equal\n");
    
        }
      
       else
        
       {
              
           printf("\nTwo arrays are equal\n");
         
       }

}