#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include <errno.h>
#include<stdlib.h>
#include<string.h>
 int main(int argc , char const *argv[])
{
 int fd1;
 int fd2;
 char  buff[10];
 fd1 =open("src.txt",O_RDWR | O_CREAT);
 fd2=open("dest.txt",O_WRONLY| O_CREAT);

 if(fd1==-1)
 {
	 perror("error\n");
	 exit(EXIT_FAILURE);
 }
 while (read(fd1,buff,10))
 {
write(fd2,buff,10);
 }
printf("%d %d",fd1,fd2);
printf("%s",buff);
 close(fd1);
 close(fd2);
 return 0;
}









