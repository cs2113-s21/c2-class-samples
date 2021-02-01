#include <stdio.h>

#include <string.h>

#define MAXLEN 1024


int streq(char * s1, char * s2){

  //iterate and compare until we reach null termination of s1
  int i;
  for(i=0; s1[i] && s2[i] ; i++){
    if(s1[i] != s2[i])
      return 0;
  }
  
  return s1[i] == s2[i];

  //returns 1 if eq, and 0 if not
}


int main(){

  char password[MAXLEN];

  char hippo[] = "hippo";
  
  printf("Enter the password:\n");
  scanf("%s",password);

  //Are the char's of password the same as hippo?
  
  //  if(streq(hippo,password)){
  if(strcmp(hippo,password) == 0){
    printf("You're in like Flynn!\n");
  }else{
    printf("No way, Jose!\n");
  }
    

}
