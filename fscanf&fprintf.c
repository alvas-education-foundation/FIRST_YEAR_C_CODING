#include <stdio.h>  
void main()  
{  
    FILE *fptr;
    FILE *fp;
    char buff[255];
    int id;  
    char name[30];  
    float salary;  
    fptr = fopen("emp.txt", "w+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fptr, "\nEmployee ID = %d\n",id);
    fprintf(fptr,"\n");
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "\nEmployee Name = %s\n",name);
    fprintf(fptr,"\n");
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "\nEmployee Salary = %.2f\n",salary);
    fprintf(fptr,"\n");
    fclose(fptr);  
    fp = fopen("emp.txt","r");
    while(fscanf(fp,"%s\n",buff)!=EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
    
}  