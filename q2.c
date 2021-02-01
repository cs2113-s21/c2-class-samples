#include <stdio.h>
#include <string.h>
int main() {

  char str1[10] = "10 9 8 7 6 5 4 3 2 1";
  char str2[] = "10 9 8 7 6 5 4 3 2 1";
         
  if(strcmp(str1,str2) == 0 ){ //tests if they are the same string
      printf("Same\n");    
  }else{
      printf("Different\n");
  }
}
