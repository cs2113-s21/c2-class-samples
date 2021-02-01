#include <stdio.h>
#include <string.h>
int main() {

  char str[27] = "C is my favorite language";

  str[strlen(str)] = '!';
  printf("%s and python is my second!\n",str);
}
