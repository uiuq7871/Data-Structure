#include<stdio.h>
#include<stdlib.h>
//¤¤¸m¦¡A*(B+C/D)+E
//«á¸m¦¡ABCD/+*E+
int main()
{
	char str[] = "ABCD/+*E+";
	int LEN = (sizeof(str) / sizeof(char))-1;
	push(str,LEN);
}
int push(char str[],int LEN)
{
	char stack[9] = {0};
	int top = -1;
	int top2 = -1;
	char final[9] = {0};
	for (int i = 0; i < LEN; i++)
	{
		char c = str[i];
		if ('A' <= str[i] && str[i] <= 'Z')
			stack[++top] = c;
		else {

		}
	}
		for (int i = 0; i <= top; i++)
		{
			printf("%c", stack[i]);
		}
	}

int pop(char str[],int LEN)
{
	int stack[] = { 0 };
	int top = -1;
	if (top == -1)
	{
		printf("EMPTY");
	}
	else
		for (int i = 0; i < LEN; i++)
			stack[top--] = stack[i];
}
