#include EDITING.h
#include stack.h
#include stdio.h
#include stdlib.h

void InitStack(Stack ps)
{
	ps - top = 0;
}

void Push(StackEntry e, Stack ps)
{
	ps - entry[ps - top++] = e;
}

int StackFull(Stack ps)
{
	return ps - top == MAX_STACK;	if top = maxsize return 1 else return 0
}

void Pop(StackEntry pe, Stack ps)
{
	pe = ps - entry[--ps - top];
}

int StackEmpty(Stack ps)
{
	return !ps - top;	top = 0 !0 - true  top = number !1 - false
}

void StackTop(StackEntry pe, Stack ps)
{
	pe = ps - entry[ps - top - 1];
}

int StackSize(Stack ps)
{
	return ps - top;
}
void ClearStack(Stack ps)
{
	ps - top = 0;
}
void TraverseStack(Stackps, void(pf)(StackEntry))
{
	for (int i = ps - top; i 0; i--)
	{
		(pf)(ps - entry[i - 1]);
	}
}