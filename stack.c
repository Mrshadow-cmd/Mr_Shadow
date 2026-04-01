#include <stdio.h>
#include <conio.h>
#define maxsize 5
int top = -1;
int stack[maxsize];
void main()
{
    int a,b,i;
    /*printf("Wish to see:\n1.Yes\n2.No\n::");
    scanf("%d", &a);*/

    do
    {
        printf("Enter your choice:\n1. Inseret \n2. Delete \n3. Display\n4.Exit:\n");
            scanf("%d", &a);
        switch (a)
        {
        case 1:
            if (top == maxsize - 1)
            {
                printf("Stack is overFLowing ");
            }
            else
            {
                printf("Eneter Element:\n");
                scanf("%d", &b);
                top = top + 1;
                stack[top] = b;
            }
            break;

        case 2:
            if (top == -1)
            {
                printf("Stack is underflowing");
            }
            else
            {
                b = stack[top];
                top = top - 1;
                printf("Element Droped");
            }

            break;
        case 3:
            if (top == -1)
            {
                printf("\nStack is Empty");
            }
            else
            {
                for (i = top; i >= 0; i--)
                {
                    printf("%d\n", stack[i]);
                }
            }
            break;
        } 
    } while(a != 4);
}