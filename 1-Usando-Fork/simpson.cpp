#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[]){
	write(1,"Hola soy Abe\n",13);
	pid_t pid = fork();
	if(pid==0){
		write(1,"Hola soy Homero\n",16);
		pid= fork();
		if(pid==0){
			write(1,"Hola soy Bart\n",14);
			return 0;
		}
		pid= fork();
		if(pid==0){
			write(1,"Hola soy Lisa\n",14);
			return 0;
		}
		pid= fork();
		if(pid==0){
			write(1,"Hola soy Maggie\n",16);
			return 0;
		}
	}
	return 0 ;
}
