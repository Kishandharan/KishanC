#include <stdio.h>

struct StackInt_I4{
	int arr1[4];
	int L_Index;
}typedef StackInt_I4;

StackInt_I4 init(){
	StackInt_I4 stack = {{0,0,0,0}, -1};
	return stack;
}

void push(StackInt_I4 *stack,int val){
	int len = sizeof(stack->arr1)/sizeof(stack->arr1[0]);
	if(!((stack->L_Index+1) >= len)){
		stack->L_Index += 1;
		stack->arr1[stack->L_Index] = val;
	}else{
	  // Do nothing to avoid UB 
	}
}

int pop(StackInt_I4 *stack){
	if(stack->L_Index-1 >= 0){
		stack->L_Index -= 1;
		return stack->arr1[stack->L_Index+1];
	}
}

int get(StackInt_I4 *stack){
	return stack->arr1[stack->L_Index];
}


int main(){
	StackInt_I4 stack = init();

	// Pushing items into the stack, here, 10. Expecting a push to the stack
	push(&stack, 10);

	// Pushing again, here, 20. Expecting a push to the stack again
	push(&stack, 20);

	// Popping
	//pop(&stack);

	// Pushing items into the stack, here, 600. Expecting a push to the stack
	//push(&stack, 600);

	// Getting
	printf("Latest value in Stack: %d\n\n", get(&stack));

	// Listing all the items in the stack to check
	printf("Items in stack:\n");
	for(int i = 0; i<4; i+=1){
		printf("%d\n", pop(&stack));
	}
}