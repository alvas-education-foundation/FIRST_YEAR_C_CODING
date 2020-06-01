#include <stdio.h>

int main()
{
	int num,tnum,count;

	printf("Enter a number: ");
	scanf("%d",&num);

	count=0;
	tnum=num;

	while(tnum>0){
		count++;
		tnum/=10;
	}

	printf("Total numbers of digits are: %d in number: %d.",count,num);
	
	return 0;
}