/* 
Write a program to implement stack using linked lists.

Sample Input and Output:
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 1
	Enter element : 33
	Successfully pushed.
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 1
	Enter element : 22
	Successfully pushed.
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 1
	Enter element : 55
	Successfully pushed.
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 1
	Enter element : 66
	Successfully pushed.
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 3
	Elements of the stack are : 66 55 22 33 
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 2
	Popped value = 66
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 2
	Popped value = 55
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 3
	Elements of the stack are : 22 33 
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 5
	Peek value = 22
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 4
	Stack is not empty.
	1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit
	Enter your option : 6
*/

#include <stdio.h>
#include <stdlib.h>

struct stack {
	int data;
	struct stack *next;
};

typedef struct stack *stk;
stk top = NULL;

stk push(int x) {
	stk temp;
	temp = (struct stack *)malloc(sizeof(struct stack));
	if(temp==NULL) {
		printf("Stack is overflow.\n");
	} else {
		temp -> data = x;
		temp -> next = top;
		top = temp;
		printf("Successfully pushed.\n");
	}
}

stk pop() {
	stk temp;
	if(top==NULL) {
		printf("Stack is underflow.\n");
	} else {
		temp=top;
		top = top->next;
		printf("Popped value = %d\n",temp->data);
		free(temp);
	}
}

void display() {
	stk temp = top;
	if(top==NULL) {
		printf("Stack is empty.\n");
	} else {
		printf("Elements of the stack are : ");
		while(temp != NULL) {
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

void isEmpty() {
	if(top==NULL) {
		printf("Stack is empty.\n");
	} else {
		printf("Stack is not empty.\n");
	}
	
}

void peek() {
	stk temp;
	if(top==NULL) {
		printf("Stack is underflow.\n");
	} else {
		temp = top;
		printf("Peek value = %d\n",temp->data);
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
