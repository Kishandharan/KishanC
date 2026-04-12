#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc > 2) {
      printf("%d", atoi(argv[1])+atoi(argv[2]));
    } else {
        printf("No arguments provided.\n");
    }
    return 0;
}
