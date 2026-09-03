#include <stdio.h>

// This is a, very unsafe, but working fixed-size-entry non-generic int type stack.
// There are a lot of unsafe stuff here, but if we use it properly, it works well.

struct Stack{
	int mem[100000];
	int stack_index;
} typedef Stack;

Stack initStack(){
	Stack stack;
	for(int i = 0; i<100000; i++){
		stack.mem[i] = 0;
	}
	stack.stack_index = -1;
	return stack;
}

void push(Stack* stack, int item){
	stack->stack_index++;
	stack->mem[stack->stack_index] = item;
}

int pop(Stack* stack){
	int popval = stack->mem[stack->stack_index];
	stack->stack_index--;
	return popval;
}

int main(){
	Stack stack1 = initStack();

	push(&stack1, 10);
	push(&stack1, 20);

	int val1 = pop(&stack1); 
	int val2 = pop(&stack1);

	printf("%d\n", val1);
	printf("%d\n", val2);

	return 0;
}