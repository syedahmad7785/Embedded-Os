#include<stdio.h>
#include <pthread.h>
 
void  *greet_thread(void *arg)
{
        printf("%s THREAD \n",arg);
}

int main()
{
	pthread_t hello_ID ,Bye_ID;
	printf("BEFORE THREAD\n");
	pthread_create(&hello_ID,NULL,greet_thread,"HELLO");
	pthread_create(&Bye_ID,NULL,greet_thread,"BYE");
	pthread_join(hello_ID,NULL);
	pthread_join(Bye_ID,NULL);
	printf("AFTER THREAD\n");
	return 0;
	
}
