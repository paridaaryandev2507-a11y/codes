#include <stdio.h>
#include <stdlib.h>
struct node     // self referencing structure.
{
    int data ;
    struct node *next ;
};

struct node *head = NULL;

void create (int n)
{
   int i,data;
   head = NULL;
   struct node *newnode, *temp ;
   for (i=0;i<n;i++)
   {
       newnode = (struct node *)malloc(sizeof(struct node)); //common format for every node creation.
       printf("ENTER THE VALUE OF %d NODE:",i+1);
       scanf("%d",&data);
       newnode -> data = data;
       newnode -> next = NULL;
       if(head == NULL)
       {
           head = newnode;
       }
       else
       {
           temp = head;
           while(temp->next != NULL)
           {
               temp = temp -> next;
           }
           temp-> next = newnode;
       }

   }

}
void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insert_begining()
{
	
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&data);
    printf("ORIGINAL LINKED LIST: ");
	display();
    newnode -> data = data;
    newnode -> next = head;
    head = newnode;
    printf("LINKED LIST AFTER INSERTION: ");
    display();
}
void insert_end()
{
    int data;
    struct node *newNode,*temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&data);
    printf("ORIGINAL LINKED LIST: ");
	display();
    newNode -> data = data;
    newNode -> next = NULL;
    if(head == NULL)
    {
    	head = newNode;
    	
	}
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("LINKED LIST AFTER INSERTION: ");
    display();
}
void insert_pos()
{
	
	int data;
	struct node *newNode,*temp;
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&data);
	
	newNode -> data = data;
    newNode -> next = NULL;
	if(head == NULL)
	{
		printf("Create a node first");
	}
	else
	{
		int pos = 1;
		int ins;
		printf("Enter the position:");
		scanf("%d",&ins);
		printf("ORIGINAL LINKED LIST: ");
		display();
		if (ins == 1)
		{
			insert_begining();
		}
		else
		{
			temp = head;
			while(temp->next!=NULL )
			{
				if(pos == ins-1)
				{
					newNode->next = temp->next;
					temp->next = newNode;
					printf("LINKED LIST AFTER INSERTION: ");
    				display();
					return;
				}
				else 
				{
					temp = temp->next;
					pos++;

					
				}
			}
			
    		
		}
		
	}
}
void insert_aftervalue()
{
	
	int data;
	struct node *newNode,*temp;
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&data);
	
	newNode -> data = data;
    newNode -> next = NULL;
	if(head == NULL)
	{
		printf("Create a node first");
	}
	else 
	{
		int val;
		printf("Enter the value:");
		scanf("%d",&val);
		printf("ORIGINAL LINKED LIST: ");
		display();
		temp = head;
		while(temp->data!=val)
		{
			temp=temp->next;
			
		}
		newNode->next=temp->next;
		temp->next=newNode;
		printf("LINKED LIST AFTER INSERTION: ");
    	display();
	}
}
void search_element()
{
	
	struct node *newNode,*temp;
	newNode = (struct node*)malloc(sizeof(struct node));
	int element;
	printf("Enter the element:");
	scanf("%d",&element);
	printf("ORIGINAL LINKED LIST: ");
	display();
	if(head == NULL)
	{
		printf("Element %d not found\n");
	}
	else 
	{
		
		
		temp = head;
		while(temp->data!=element)
		{
			temp=temp->next;
			
		}
		printf("Element %d found in the linked list\n", element);
	
	}
}
void sum()
{
	int sum = 0;
	struct node *temp;
	temp = head;
	while(temp !=NULL)
	{
		sum+= temp->data;
		temp = temp->next;
	}
	printf("ORIGINAL LINKED LIST: ");
	display();
	printf("SUM OF ALL ELEMENTS IN THE LINKED LIST : %d\n",sum);
	
	
}
int main()
{
    //creating linked list.
    int choice , n,pos;
    while (1)
    {
        printf("----MENU----\n");
        printf("1. create\n");
        printf("2. display\n");
        printf("3. insert at begining\n");
        printf("4. insert at end\n");
        printf("5. insert at any position\n");
        printf("6. after a specific value\n");
        printf("7. search an element\n");
        printf("8. sum of list elements\n");
        printf("9. exit\n");
        printf("ENTER CHOICE: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("NUMBER OF NODES: ");
                scanf("%d",&n); 
                create (n);
                break;
            case 2:
                display();
                break;
            case 3 :
                insert_begining();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                insert_pos();
                break;
            case 6:
                insert_aftervalue();
                break;
            case 7:
            	search_element();
				break;	
            case 8:
            	sum();
				break;            	
            case 9:
                exit(0);
            default:
            printf("INVALID CHOICE:------");
        }

    }

    return 0;
}

