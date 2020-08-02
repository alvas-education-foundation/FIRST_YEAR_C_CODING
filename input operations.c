#include <stdio.h>  
#define MAX 15
int main()
{  
    FILE *fptr;
    FILE *fp;
    FILE *p;
    FILE *p1;
    char buf[255];
    char c;
    int id;  
    char name[30];  
    float salary;  
    fptr = fopen("emp.txt", "w+");
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return 0;
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fptr, "\nEmployee ID = %d\n",id);
    fprintf(fptr,"\n"); 
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "\nEmployee Name  = %s\n",name);
    fprintf(fptr,"\n");
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "\nEmployee Salary = %.2f\n",salary);
    fprintf(fptr,"\n");
    fclose(fptr);  
    fp = fopen("emp.txt","r");
    while(fscanf(fp,"%s\n",buf)!=EOF)
    {
        printf("%s\t",buf);
    }
    fclose(fp);
    p=fopen("emp.txt","r");
     fgets(buf, MAX, stdin);
    printf("\n\nEMPLOYEE DETAILS ARE : %s\n",buf);
    fclose(p);
    p1=fopen("emp.txt","r");
    if (p1== NULL)
      return 0;
 
    do
    {
        
        char c = fgetc(p1);
 
    
        if (feof(p1))
            break ;
 
        printf("%c", c);
    }  while(1);
 
    fclose(p1);
    return(0);
   
   
}