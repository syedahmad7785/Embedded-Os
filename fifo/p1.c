#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
#include<stdio.h>
#include <unistd.h>
 
int main()
{
	int fd;
	fd= open ("desdfifo",O_WRONLY);
	write(fd, "AHMAD",5);
	close(fd);
	return 0;
}

