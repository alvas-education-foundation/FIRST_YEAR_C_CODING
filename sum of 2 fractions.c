#include <stdio.h>

  int main ()
 {
   
     int x1, y1, x2, y2, x3, y3, div, i;
 
     printf("Enter the value for x1 and y1(x1/y1):");
      
     scanf("%d/%d", &x1, &y1);
    
     printf("%d/%d\n",x1,y1);
  
     printf("Enter the value for x2 and y2(x2/y2):");
  
     scanf("%d/%d", &x2, &y2);

     printf("%d/%d\n",x2,y2);
       
     x3 = (x1 * y2) + (x2 * y1);
         
     y3 = (y1 * y2);
     
     if (x3 > y3) 
     {

         div = y3;
  
     } 
     else  
    {  
              
        div = x3;
   
    }

     
    for (i = div; i > 0; i--) 
    {
          
        if (x3 % i == 0 && y3 % i == 0)  
          {

               x3 = x3 / i;
    
               y3 = y3 / i;
   
          }
      
   }
         
   printf("Sum of given two fraction is %d/%d\n", x3, y3);
   
   return 0;
   
}