#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1,*f2;
    char c1[50],c2[50],p;
    printf("Enter filename to open for reading : \n");
    scanf("%s",c1);
    f1=fopen("std.txt","r");
    if(f1==NULL)
    {
        printf("%s file doesnot exists \n",f1);
        exit(0);
    }
    printf("\nEnter filename to append the content : \n");
    scanf("%s",f2);
    f2=fopen("ep.txt","a");
    if(f2==NULL)
    {
        printf("%s file does not exist \n",f2);
        exit(0);
    }
    p=fgetc(f1);
    while(p != EOF)
    {
        fputc(p,f2);
        p=fgetc(f1);
        
    }
    printf("\nContent is Appended\n");
    fclose(f1);
    fclose(f2);
    return 0;
}