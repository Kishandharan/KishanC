#include <stdio.h>

int main(){
	int arr1[4] = {0,0,0,0};
	int L_Index = -1;
	int item_to_push;
	int len = sizeof(arr1)/sizeof(arr1[0]);

	// Pushing items into the stack, here, 10. Expecting a push to the stack
	item_to_push = 10;
	if(!((L_Index+1) >= len)){
		L_Index = L_Index + 1;
		arr1[L_Index] = item_to_push;
	}else{
		printf("Out of memory");
	}

	// Pushing again, here, 20. Expecting a push to the stack again
	item_to_push = 20;
	if(!((L_Index+1) >= len)){
		L_Index = L_Index + 1;
		arr1[L_Index] = item_to_push;
	}else{
		printf("Out of memory");
	}

	// Popping
	if(!(L_Index-1 < 0)){
		L_Index = L_Index - 1;
	}

	// Pushing items into the stack, here, 600. Expecting a push to the stack
	item_to_push = 600;
	if(!((L_Index+1) >= len)){
		L_Index = L_Index + 1;
		arr1[L_Index] = item_to_push;
	}else{
		printf("Out of memory");
	}

	// Getting
	printf("Latest value in Stack: %d\n\n", arr1[L_Index]);

	// Listing all the items in the stack to check
	printf("Items in stack:\n");
	for(int i = 0; i<len; i+=1){
		printf("%d\n", arr1[i]);
	}
	printf("\nL_Index: %d", L_Index);
}