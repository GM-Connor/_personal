#include <stdio.h>
#include <stdlib.h>
#define FALSE		0
#define TRUE		1
#define STACKSIZE	3
typedef unsigned char Boolean;

char *progname;		/* calling program name */
static int id;		/* keeps track of uniqiue ids for stacks */

typedef struct {			/* stack table: */
	int stack[STACKSIZE];	/* actual stack */
	int length;				/* stack length */
	int id;					/* stack id */
	int *top;				/* pointer to top of stack */
} Stack;

Stack *newStack();
Boolean stackPush(Stack *stack, int x);
int stackPop(Stack *stack);
void stackPrint(Stack *stack);


int main(int argc, char *argv[]) {
	progname = argv[0];

	Stack *deck = newStack();

	stackPush(deck, 7);
	stackPush(deck, 8);
	stackPush(deck, 52);
	stackPush(deck, 99);
	stackPrint(deck);
	stackPop(deck);
	stackPrint(deck);

	return 0;
}

/* newStack: creates new stack and returns pointer */
Stack *newStack() {
	Stack *pp = (Stack *)malloc(sizeof(Stack));
		pp->length = 0;
		pp->id = ++id;
		pp->top = pp->stack;
	return pp;
}

/* stackPush: pushes value to stack if stack isn't full */
Boolean stackPush(Stack *sp, int x) {
	if (x >= 0) {							/* if non-nagative */
		if (sp->length < STACKSIZE) {			/* if stack isn't full */
			sp->stack[sp->length] = x;				/* add x to top of stack */
			sp->top = sp->stack + sp->length++;		/* point top to top of stack */
			return TRUE;
		}
		else
			fprintf(stderr, "%s: Stack overflow (%d)\n", progname, sp->id);
	}
	else
		fprintf(stderr, "%s: Cannot add negative int to stack (%d)\n", progname, sp->id);
	return FALSE;
}

/* stackPop: removes entry from top of stack and returns its value */
int stackPop(Stack *sp) {
	if (sp->length > 0) {				/* if stack isn't empty */
		sp->top--;							/* point top to one below */
		return sp->stack[--sp->length];		/* return prev top value */
	}
	fprintf(stderr, "%s: Stack underflow (%d)\n", progname, sp->id);
	return -1;
}

/* stackPrint: prints stack entries from top of stack to bottom */
void stackPrint(Stack *sp) {
	int i;							/* index */

	printf("Stack %d\n", sp->id);	/* print header */
	if (sp->length)
		for (i = sp->length; i > 0; --i)
			printf("%d: %d\n", i, sp->stack[i-1]);
	else
		printf("EMPTY\n");
}