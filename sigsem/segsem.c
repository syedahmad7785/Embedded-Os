#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
sem_t s1,s2;
int a ,b;
int sum=0;
void*abthread(void*arg)
{
	printf("ENTER TWO NUMBER\n");
	while(1)
	{
		sem_wait(&s1);
		scanf("%d %d",&a,&b);
		sem_post(&s2);
	}
}
void*sumthread(void*arg)
{
	while(1)
	{
		sem_wait(&s2);
		sum=a+b;
		printf("SUM :-%d\n",sum);
		sem_post(&s1);
	}
}
int  main()
{
	pthread_t abID,sumID;
	sem_init(&s1,0,1);
	sem_init(&s2,0,0);
	pthread_create(&abID,NULL,abthread,NULL);
	pthread_create(&sumID,NULL,sumthread,NULL);
	pthread_join(abID,NULL);
	pthread_join(sumID,NULL);
	sem_destroy(&s1);
	sem_destroy(&s2);
	return 0;
}

