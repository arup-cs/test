#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<pthread.h>
char u;
int main(){
	pthread_t tid;
	char a='x',f;
	void *t(){
		printf("This is thread function and letter ,%c\n",u);
		sleep(5);

	}
	
	printf("enter a char\n");
	scanf("%c",&u);
	pthread_create(&tid,NULL,t,NULL);
	printf("This is after function\n");
	pthread_join(tid, NULL);

	return 0;




}
