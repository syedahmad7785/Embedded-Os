#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
#include<stdio.h>
#include <unistd.h>

int main()
{
        int fd;
	char buff[16];
        fd= open ("desdfifo",O_RDONLY);
        read(fd, buff,16);
	printf("READ-DATA= %s",buff);
        close(fd);
        return 0;
}


