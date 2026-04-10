#include <stdio.h>

int main() {
    char buff[100];  
    int n = 99;
  
    printf("Enter a string: ");
  
    fgets(buff, n, stdin);
    printf("You entered: %s", buff);
    return 0;
}
