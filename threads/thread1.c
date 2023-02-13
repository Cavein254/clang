#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


void *customThreadFunction(){

	for(int i = 0; i<=150; i++){
		printf("%d I am a custom thread created by the user",i);
		printf("\n");
		sleep(1);
	}
	return NULL;
}

int main () {
	pthread_t thread;

	int status;
	status = pthread_create(&thread, NULL, customThreadFunction,NULL);

	if(!status){
		printf("Custom thread created successfully. \n ");
	}
	else{
		printf("Unable to create custom thread successfully");
		return 0;
	}
	for(int i = 0; i <=15;i++){
		printf("I am the process created by the default compiler \n");
		sleep(1);
	}
	return 0;
}

