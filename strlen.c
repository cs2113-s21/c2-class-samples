#include <stdio.h>


int mystrlen(char * str){
  int c=0;
  for(int i=0; str[i] ; i++, c++);  
  return c;
  
}

int main(){

  char hello[] = "Hello";
  char world[] = "World";
  char cs2113[] = "CS2113-s20";


  printf("strlen(hello)=%d\n",mystrlen(hello));
  printf("strlen(world)=%d\n",mystrlen(world));
  printf("strlen(cs2113)=%d\n",mystrlen(cs2113));
    
}
