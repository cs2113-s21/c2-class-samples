#include <stdio.h>

void my_puts(char *str){

  while(*str){ //is str referencing null, does it point to the null character
    putchar(*str++);
  }
  putchar('\n');
}

int main(){

  char * hello = "Hello!";

  puts(hello);

  my_puts(hello);

}
