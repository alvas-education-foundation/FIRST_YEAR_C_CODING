#include <stdio.h> 
#include <string.h>
 int main() 
 { 	
     char Str1[100], Str2[100];
      	int i; 	
      	char *s1=Str1;
      	char *s2=Str2;
      printf("\n Please Enter the First String : "); 
      	gets(s1);
      puts(s1);
      	printf("\n Please Enter the Second String : "); 
      	gets(s2); 	
      puts(s2);
      	for(i = 0; *(s1+i) == *(s2+i) && *(s1+i)== '\0'; i++); 	
      	if(*(s1+i) < *(s2+i))
       	{ 		
       printf("\n str1 is Less than str2"); 
       	} 	
       else if(*(s1+i)> *(s2+i)) 
       	{ 	
       	printf("\n str2 is Less than str1"); 
       	} 
       	else 
       	{ 
       		printf("\n str1 is Equal to str2");
        } 	
    	return 0;
 }