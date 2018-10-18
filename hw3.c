#include <stdio.h>
#include <string.h>

int main(){

  //create some space for our strings
  char line[500];
  char argsarray[20][100];

  //print prompt
  printf("CS361 >");
  //read line from terminal
  fgets(line, 500, stdin);

  //break the string up into words
  char *word = strtok(line, " ");
  int i = 0;
  while (word) {
	  
	if(strcmp(line, "exit\n") == 0){
		break;
	
	}

    //get next word
    word = strtok(NULL, " ");
    i = i + 1;
  }

 
}
