#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert(void);
void delete(void);
void display(void);
int queue[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice,n;
printf("\nEnter the size of QUEUE : ");
scanf("%d",&n);
printf("%d",n);
printf("\n\tQUEUE OPERATIONS USING ARRAY");
printf("\n\t---------------------------------");
printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
printf("\n\t---------------------------------");
do
{
printf("\nEnter your choice : ");
scanf("%d", &choice);
printf("%d",choice);
switch(choice)
{
case 1:
{
insert();
break;
}
case 2:
{
delete();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\n\t EXIT POINT ");
 break;
}
default:
{
printf("\nPlease enter a valid choice(1/2/3/4)");
}
}
}
while(choice!=4);
return 0;
}
void insert()
{
int item;
if(rear == MAX - 1)
printf("\nQueue Overflow n");
else
{
if(front== - 1)
front = 0;
printf("\nInset the element in queue : ");
scanf("%d", &item);
printf("%d",item);
rear = rear + 1;
queue[rear] = item;
}
}
void delete()
{
if(front == - 1 || front > rear)
{
printf("\nQueue Underflow \n");
return;
}
else
{
printf("\nElement deleted from queue is : %d\n", queue[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
{
printf("\nQueue is empty \n");

}
else
{
printf("\nThe elements of the Queue is : ");
for(i = front; i <= rear; i++)
printf("%d ", queue[i]);
printf("\n");
}
}