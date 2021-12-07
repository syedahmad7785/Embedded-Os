#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
 int main(){

       pid_t id ;
       printf("Before Fork\n");
       id =fork();
       if (id ==0)
       {
       printf("child :- BEFORE EXECL COMMAND \n");
       execl("/bin/ls","/bin/ls",NULL);
       printf("child :- AFTER EXCEL\n");
 }
       else {
	       printf("Parent\n");

       }
        printf("Program exited \n");
 }
