#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main(){
char c;
char o;
pid_t pid;
pid=fork();
	if(pid==0){

		printf("Please enter a char\n");
		scanf("%c",&c);
		o=c;

	}else{
	//	while(1){

			printf("The value of o variable is:%c\n",c);
			sleep(3);
	//	}





	}
	}

