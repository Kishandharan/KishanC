#include <stdio.h>

int* danglingPointer(){
	int i = 10;
	return &i;
}

int main() {
	int* ptr1 = danglingPointer();
	printf("Before dereference\n");
    printf("%d\n", *ptr1);
    printf("After dereference\n");
	return 0;
}