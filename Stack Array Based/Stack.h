#include "EDITING.h"
#define StackEntry int
#define MAX_STACK 100

typedef struct
{
	int top;
	StackEntry entry[MAX_STACK];
}Stack;

void InitStack(Stack*);					//initialize stack & top=0
int StackFull(Stack*);					//check if stack is full or not
int StackEmpty(Stack*);					//check if stack if empty or not
void Push(StackEntry, Stack*);			//add elements for stack
void Pop(StackEntry*, Stack*);			//take last elements from stack
void StackTop(StackEntry*, Stack*);	//return value of elements
int StackSize(Stack*);					//return size of stack
void ClearStack(Stack*);				//destroys elements and initalizing stack by default
void TraverseStack(Stack*, void(*pf)(StackEntry));