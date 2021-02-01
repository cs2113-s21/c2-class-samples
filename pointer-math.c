#include <stdio.h>

int main(){

  int array[] = {0xdeadbeef, // {0xfe,0xbe,0xad,0xde} Little Endian
		 0xcafebabe,
		 0xfeedface};

  char * p = (char *) array;

  for(int i=0;i<sizeof(array); i++){
    printf("p[%d]=%02hhx\n",i,p[i]);
  }

}


// 438
// {4,3,8} <-- Big ENDIAN
// {8,3,4} <-- Little ENDIAN
