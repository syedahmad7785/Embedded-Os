#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include <errno.h>
#include<stdlib.h>
 int main(int argc , char const *argv[])
{
 int fd;
 fd =open("desd.txt",O_WRONLY | O_CREAT);
 if(fd==-1)
 {
	 perror("error\n");
	 exit(EXIT_FAILURE);
 }
 write(fd,"DESD",5);
 close(fd);
 return 0;
}

