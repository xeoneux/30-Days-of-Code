#include <stdio.h>
#include <conio.h>
int ch, n, x, top = -1, i, stack[100];
void push();
void pop();
void display();

int main()
{
	printf("enter number:\n");
	scanf("%d", &n);
	do
	{
		printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
		case 3:
			display();
			break;
		case 4:
			printf("bye:\n");
			break;
		default:
			printf("wrong choise:\n");
		}
	} while (ch != 4);
	return 0;
}

void push()
{
	if (top == n - 1)
	{
		printf("full:\n");
	}
	else
	{
		printf("enter elements:\n");
		scanf("%d", &x);
		top++;
		stack[top] = x;
	}
}

void pop()
{
	if (top == -1)
	{
		top--;
		x = stack[top];
	}
	else
	{
		printf("empty:\n");
	}
}

void display()
{
	if (top > 0)
	{
		for (i = 0; i < top; i++)
		{
			printf("%d", stack[i]);
		}
	}
}
