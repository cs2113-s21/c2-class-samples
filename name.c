#include <stdio.h>


int main(){

  char name[1024]; //store 9 chars + 1 null

  printf("Enter your name:\n");

  scanf("%1023s",name); //scans for words!

  printf("Hello, %s\n",name);
}
