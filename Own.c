#include<stdio.h>
#include<stdlib.h>
struct vehicle
{
    char name[20];
    char address[20];
    char telephoneno[20];
    char vehicleno[20];
    char licenseno[20];
};
void main()
{
    FILE *fp;
    struct vehicle s[20];
    int i;
    fp=fopen("D:\\Own.txt","w");
    if(fp==NULL)
    {
        printf("\nFile cannot be created or opened");
        exit(1);
    }
    else
    {
        printf("\nFile is created");
    }
    for(i=0;i<10;i++)
    {
        printf("\nThe %d vehicle owner",i+1);
        printf("\nVehicle owner name : ");
        scanf("%s",s[i].name);
        printf("\nAddress : ");
        scanf("%s",s[i].address);
        printf("\nTelephone number : ");
        scanf("%s",s[i].telephoneno);
        printf("\nVehicle number : ");
        scanf("%s",s[i].vehicleno);
        printf("\nLicense number : ");
        scanf("%s",s[i].licenseno);
    }
    printf("\nNow writing data to file... ");
    for(i=0;i<10;i++)
    {
    fprintf(fp,"Vehicle owner name= %s\nAddress= %s\nTelephone number= %s\nVehicle number= %s\nLicense number= %s\n",s[i].name,s[i].address,s[i].telephoneno,s[i].vehicleno,s[i].licenseno);
    }
    printf("\nCompleted");
    fclose(fp);
    char c;
    fp=fopen("D:\\Own.txt","r");
    if(fp==NULL)
    {
        printf("\nCannot open file.");
        exit(0);
    }
    printf("\n The content of file is:\n");
    while((c=fgetc(fp))!=EOF)
        putchar(c);
    fclose(fp);
}
