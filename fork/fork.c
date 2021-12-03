 #include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
 
int main()
{	
 pid_t id;
 printf("BEFORE FORK\n");
 id=fork();
 printf(" AFTER FORK:%d\n",id);
 if (id==0)
 {
	 printf("CHILD : PID %d\n",getpid());
	 printf("CHILD : PPID %d\n",getppid());
 }
 else {
	 printf("PARENTS : PID %d\n",getpid());
	 printf("PARENTS : PID %d\n",getppid());
 }
 return 0;
}
