#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int vcount=0,ccount=0,i,len;
    printf("Enter the string\n");
    scanf("%s\n",str);
    printf("%s\n",str);
    len=strlen(str);
    char *sptr=str;
    for(i=0;i<len;i++)
    {
        if(*(sptr+i)=='a'||*(sptr+i)=='e'||*(sptr+i)=='i'||*(sptr+i)=='o'||*(sptr+i)=='u'||*(sptr+i)=='A'||*(sptr+i)=='E'||*(sptr+i)=='I'||*(sptr+i)=='O'||*(sptr+i)=='U')
    {
        vcount++;
    }
    else
    {
        ccount++;
    }
}
printf("\nVowel count = %d",vcount);
printf("\nConstant count = %d",ccount);
}