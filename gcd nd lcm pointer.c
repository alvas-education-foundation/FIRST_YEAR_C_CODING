#include<stdio.h>

int main()

{
   
   int a,b,gcd,lcm,rem,num,deno,*a1,*b1;

   printf("Enter two numbers\n");
 
   scanf("%d\n%d",&a,&b);
 
   printf("%d\n%d\n",a,b);
   a1=&a;
   b1=&b;

   if(*a1>*b1)
 
  {
    num=*a1;

       deno=*b1;
   
  }
   
  else
 
  {
     num=*b1;
     
        deno=*a1;
 
  }
 
    rem=num%deno;
 
    while(rem!=0)
 
   {
   
       num=deno;
   
       deno=rem;
 
       rem=num%deno;
 
   }
   
    gcd=deno;
   
    lcm=(*a1 * *b1)/gcd;
   
    printf("GCD of %d and %d = %d\n",*a1,*b1,gcd);

    printf("LCM of %d and %d = %d\n",*a1,*b1,lcm);

}


