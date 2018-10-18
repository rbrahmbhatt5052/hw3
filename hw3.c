#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void loop(void){
	
	char * line;
	char ** args;
	int status;     // for storing execptions 

//read the commands entered by the user 
// it will parse the commands computer can understand the commands 
// execute the commands 

	do{
	printf("%s","CS361 >");
	line = read();	

// arguments is an array of strings 	

	args = parse(line); 
	status = execute(args);

// free the memory 

	free(line);
	free(args);



	}while(status);



}



int main(int argc, char** argv){

// load the comfiguration


// run an REPL Loop: reads executes and prints the outputs

	loop();



// Perform any shutdown cleanup
	return 0;


}


