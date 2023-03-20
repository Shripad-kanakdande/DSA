#include<stdio.h>
#define MAX 8
int top = -1;
char stack[MAX];

void push(char x)
{
	if(top == MAX-1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

char pop()
{
	char x;
	if(top == -1)
	{
		printf("Empty stack\n");
		return -1;
	}
	x = stack[top];
	top--;
	return x;
}

int main()
{
	char *s;
	printf("Enter string : ");
	gets(s);
	int i;
	while(s[i] != '\0')
	{
		push(s[i]);
		i++;
	}
	i=0;
	while(stack[i] != '\0')
	{
		printf("%c",pop());
		i++;
	}
	
	return 0;
}
