#include <stdio.h>


void my_strcpy(char * dest, char * src){
  while(*dest++ = *src++);
}


void my_streq(char * s1, char * s2){
  //write this only use pointer arithmetic
  // no array indexing [] 
}

int main(){

  char s1[] = "Hello";
  char s2[6] = {0};

  my_strcpy(s2,s1); //copy s1 into s2

  printf("s1: %s\n",s1);
  printf("s2: %s\n",s2);
  
}
