#include <stdio.h>

int main(){

  char s1[] = "Go Buff! Go Blue!"; // <- put the array on the stack!
  char * s2 = "For ol' GW"; // <- put the array in the data region of the program


  printf("s1: %p\n",s1);
  printf("s2: %p\n",s2);


  s1[5] = s1[6] = 't';

  printf("s1: %s\n",s1);

  //s2[6] = 'd';

  printf("s2: %s\n",s2);
}
