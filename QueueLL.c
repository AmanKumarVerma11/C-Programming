/* Aim : Write a program to implement queue using linked lists.

Sample Input and Output:
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 1
	Enter element : 57
	Successfully inserted.
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 1
	Enter element : 87
	Successfully inserted.
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 5
	Queue size : 2
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 3
	Elements in the queue : 57 87 
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 2
	Deleted value = 57
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 2
	Deleted value = 87
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 3
	Queue is empty.
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 5
	Queue size : 0
	1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit
	Enter your option : 6
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void enqueue(ele);
void dequeue();
void display();
void isEmpty();
void size();

int main() {
	int op, x;
	while(1) {	
		printf("1.Enqueue 2.Dequeue 3.Display 4.Is Empty 5.Size 6.Exit\n");
		printf("Enter your option : ");
		scanf("%d",&op);
		switch(op) {
			case 1: 
				printf("Enter element : ");
				scanf("%d",&x);
				enqueue(x);
				break;
			case 2: 
				dequeue();
				break;
			case 3: 
				display();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				size();
				break;
			case 6: exit(0);
		}
	}
}

struct queue {
	int data;
	struct queue *next;
};

typedef struct queue *Q;
Q front=NULL, rear=NULL;

void enqueue(int ele) {
	Q temp=NULL;
	temp=(Q)malloc(sizeof(struct queue));
	if(temp==NULL) {
		printf("Queue is overflow.\n");
	} else {
		temp->data=ele;
		temp->next=NULL;
		
		if(front==NULL) {
			front=temp;
		} else {
			rear->next=temp;
		}
		rear=temp;
		printf("Successfully inserted.\n");
	}
}

void dequeue() {
	Q temp = NULL;
	if(front==NULL) {
		printf("Queue is underflow.\n");
	} else {
		temp=front;
		if(front==rear) {
			front=rear=NULL;
		} else {
			front=front->next;
		}
		printf("Deleted value = %d\n",temp->data);
		free(temp);
	}
}

void display() {
	if(front==NULL) {
		printf("Queue is empty.\n");
	} else {
		Q temp=front;
		printf("Elements in the queue : ");
		while(temp!=NULL) {
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
} 

void isEmpty() {
	if(front==NULL) {
		printf("Queue is empty.\n");
	} else {
		printf("Queue is not empty.\n");
	}
}

void size() {
	int count=0;
	if(front==NULL) {
		printf("Queue size : 0\n");
	} else {
		Q temp=front;
		while(temp!=NULL) {
			count++;
			temp=temp->next;
		}
		printf("Queue size : %d\n",count);
	}
}
