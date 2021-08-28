#include<stdio.h>
#include<conio.h>
#define MAX 5

void push();
void pop();
void display();
int stack[MAX], top=-1, item;

void push()
{
    if(top == MAX-1)
        printf("Stack is full");
    else
    {
        printf("Enter item: ");
        scanf("%d",&item);
        top++;
        stack[top] = item;
        printf("Item pushed = %d", item);
    }
}

void pop()
{
    if(top == -1)
        printf("Stack is empty");
    else
    {
        item = stack[top];
        top--;
        printf("Item popped = %d", item);
    }
}

void display()
{
    int i;
    if(top == -1)
        printf("Stack is empty");
    else
    {
        for(i=top; i>=0; i--)
            printf("\n %d", stack[i]);
    }
}  