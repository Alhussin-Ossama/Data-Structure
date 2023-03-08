#include <stdio.h>
#include<stdlib.h>
#include"stack.h"

void display(StackEntry e)
{
	printf("e is :%d\n", e);
}
int main()
{
	int n = 5;
	StackEntry e;
	Stack s;
	InitStack(&s);
	if (!StackFull(&s))
	{
		Push(10, &s);
		Push(20, &s);
		Push(30, &s);
		Push(40, &s);
		Push(50, &s);
	}
	int x = StackSize(&s);
	TraverseStack(&s, &display);
}