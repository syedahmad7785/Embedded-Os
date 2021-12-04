#include <unistd.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
  
 int main()
{
	unsigned char buff[16];
	pid_t id;
	int fd[2];
	pipe(fd);
	id =fork();
	if (id == 0)
	{
		printf("child:GOING TO READ\n");
		read(fd[0],buff,16);
		printf("READING DONE : %s \n",buff);


	}
	else 
	{
		printf("PARENT : GOING TO WRITE\n ");
		write (fd[1],"DESD",5);
		printf("WRITING DONE\n");
}

return 0;
}
