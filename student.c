#include <stdio.h> 
void main() 
{ 
    FILE *fptr;
    FILE *fp;
    char buff[255];
    int rollno,n=10,i;
    char name[30];
    fptr = fopen("std.txt", "w+");/*  open for writing */ 
    if (fptr == NULL) 
    { 
        printf("File does not exists \n"); 
        return; 
    } 
    for(i=0;i<n;i++)
    {
    printf("Enter the Roll No\n"); 
    scanf("%d", &rollno); 
    fprintf(fptr, "\nStudent Roll No = %d\n",rollno);
    fprintf(fptr,"\n");
    printf("Enter the name \n"); 
    scanf("%s", name); 
    fprintf(fptr, "\nStudent Name = %s\n",name);
    fprintf(fptr,"\n");
    }
    fclose(fptr); 
    fp = fopen("std.txt","r");
    while(fscanf(fp,"%s\n",buff)!=EOF)
    {
        printf("%s\t",buff);
    }
    fclose(fp);
  
}

