#include <stdio.h>

int main() {
  int password = 10;
  int password_entered = 0;

  while(true){
    printf("Enter password: ");
    scanf("%d", &password_entered);

    if(password_entered == password){
      printf("Correct password!!");
      return 0;
    }

    printf("Wrong password! Please try again.\n");
  }
}
