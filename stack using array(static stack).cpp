#define max 10
# include <stdio.h>
int stack[max]={0};
int tos = -1;
int peep()
{
	if(tos==-1)
	{
		printf("stack is empty:\n");
		return -1;
	}
	return stack[tos];
}
void push(int val)
{
	if (tos != max-1)
	{
		tos++;
		stack[tos]= val;
		printf("%d is inserted in stack\n", val);
		
	}
	else
	{
		printf("stack is full");
		
	}
}
int pop()
{
	int val=0;
	if(tos!=-1)
	{
		val = stack[tos];
		tos--;
	}
	else
	{
		printf("stack is empty\n");
	}
	return val;
}
void display()
{
	printf("TOS: %d\n", stack[tos]);
	for(int i = tos-1;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
int main()
{

	int ch;
	while(1)
	{
		printf("---Enter choice---\n");
		printf("1.peep\n");
		printf("2.push\n");
		printf("3.pop\n");
		printf("4.display\n");
		printf("Enter choice:");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				int p;
				p = peep();
				printf("the value at tos:%d\n", p);
				break;
			case 2:
				int val;
				printf("Enter val:");
				scanf("%d",&val);
				push(val);
				break;
			case 3:
				int remove;
				remove = pop();
				printf("the value to be removed:%d\n", remove);
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid choice:");		
		}
		
	}
	return 0;
}
