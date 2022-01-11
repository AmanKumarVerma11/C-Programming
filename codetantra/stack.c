
/* 
Aim : Write a program to implement stack using arrays.
Name : Aman Kumar Verma
Roll No. : 2000300130016
*/
#include <stdio.h>
#include <stdlib.h>
#define STACK_MAX_SIZE 10

int arr[STACK_MAX_SIZE];
int top =-1;

void push(int ele)
{
	if(top==STACK_MAX_SIZE-1)
	{
		printf("Stack is overflow.");
	}
	else {
		top=top+1;
		arr[top]=ele;
		printf("Successfully pushed.");
	}
	printf("\n");
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is underflow.");
	}
	else
	{
		printf("Popped value = %d",arr[top]);
		top = top-1;
	}
	printf("\n");
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("Elements of the stack are : ");
		for(i=top;i>=0;i--)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}
void isEmpty()
{
	if(top==-1)
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("Stack is not empty.\n");
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack is underflow.\n");
	}
	else
	{
		printf("Peek value = %d\n",arr[top]);
	}
	
}

int main() {
	int op, x;
	while(1) {	
		printf("1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit\n");
		printf("Enter your option : ");
		scanf("%d", &op);
		switch(op) {
			case 1: 
				printf("Enter element : ");
				scanf("%d", &x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3: 
				display();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				peek();
				break;
			case 6: 
				exit(0);
		}
	}
}
