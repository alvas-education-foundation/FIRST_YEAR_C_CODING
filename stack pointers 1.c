#include <stdio.h>
  #include <stdlib.h>
  int top = -1, size;
  void push(int *stack, int data);
  void pop(int *stack);
 void display(int *stack);

  
  void push(int *stack, int data) {
        if (top >= size - 1) {
                printf("\nStack Overflow\n");
                return;
        }
        
        {
        top++;
        stack[top] = data;
        printf("\nPushed %d into the stack \n", stack[top]);
        return;
        }
  }

    void pop(int *stack) {
        if (top <= -1) {
                printf("\nStack Underflow\n");
                return;
        }
        else
        {
        printf("\nPopped %d from the stack\n", stack[top]);
        stack[top] = 0;
        top--;
        return;
        }
  }

 
  void display(int *stack) {
        int i;
        if (top == -1) 
    
             {
                    printf("\nStack Underflow\n");
                return;
                }
            
    
                else
                {
                    printf("\nStack contains :\n");
        for (i = top; i >= 0; i--) 
        {
                printf("%d\n", stack[i]);
        }
        return;
                }
  }

  int main() {
        int *stack, ch, data;

        
        printf("\nEnter the size of the stack :");
        scanf("%d", &size);
        printf("%d",size);

        
        stack = (int *)malloc(sizeof(int) * size);
          printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    printf("\n\t---------------------------------");
       do{
        
                
                printf("\nEnter your choice:");
                scanf("%d", &ch);
                printf("%d",ch);

                switch (ch) {
                        case 1:
                                
                                printf("\nEnter your i/p to push:");
                                scanf("%d", &data);
                                printf("%d",data);
                                push(stack, data);
                                break;
                        case 2:
                                
                                pop(stack);
                                break;
                        case 3:
                                
                                display(stack);
                                break;

                        case 4: printf("\n\n\t    EXIT POINT ");
                                exit(0);
                        default:
                                 printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
                                break;
                }
        }while(ch!=4);

        return 0;
  }