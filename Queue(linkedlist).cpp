#include <stdio.h>
#include <stdlib.h>
struct node     
{
    int data ;
    struct node *next ;
};

struct node *start = NULL, *front=NULL, *rear=NULL;

void insert_q()
{
	struct node *newnode =(struct node*)malloc(sizeof(struct node));
	int val;
	printf("Enter the value to insert: ");
	scanf("%d",&val);
	newnode -> data=val;
	newnode-> next =NULL;
	 if (front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void display_q()
{
	struct node *temp;
    temp = front;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void delete_q()
{
    struct Node *temp;

    if (front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    
	
    
}
int main(){
	while(1){
		printf("\n===========MENU===========\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit"); 
		printf("Enter choice: ");
		int ch;
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert_q();
				break;
			case 2:
				delete_q();
				break;
			case 3:
				display_q();
				break;
			case 4:
				printf("Program Terminated");
				exit(0);
			default:
				printf("Invalid Choice");
				break;
		}
	}
}
