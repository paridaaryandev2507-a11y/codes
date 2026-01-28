#define MAX 10
#include <stdio.h>
int q[MAX],front=-1,rear=-1;
void insert()
{
	if(rear==MAX-1)
	{
		printf("QUEUE IS FULL\n");
		return;
	}
	int val,n;
	printf("ENTER n\n");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
	
		rear++;
		printf("ENTER VALUE TO BE INSERTED:\n");
		scanf("%d",&val);
		q[rear]=val;
		if(front==-1)
		{
			front++;
		}
	}
}
void delete_q()
{
	if(front== -1|| front>rear)
	{
		printf("QUEUE IS EMPTY\n");
	}
	else
	{
		printf("%d DELETED\n",q[front]);
		front++;
	}
}
void display()
{
	if(front>rear||front==-1)
	{
		printf("QUEUE IS EMPTY\n");
		return;
	}
	printf("front-> \t");
	for(int i=front;i<=rear;i++)
	{
		printf("%d\t",q[i]);
	}
	printf("->rear\n");
}
int main()
{	
	int ch;
	while(1)
	{
		printf("---Enter choice---\n");
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("Enter choice:");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				int val;
				insert();
				break;
			case 2:
				delete_q();
				break;
			case 3:
				display();
				break;
			
			default:
				printf("Invalid choice:");		
		}
		
	}
	return 0;
}
