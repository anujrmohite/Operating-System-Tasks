#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
	int id = fork();
	if (id == 0)
	{
		printf("The sleep is in process:\n");
		sleep(1);
	}
	if (id != 0)
	{
		wait(NULL);
	}
	printf("The process pid is %d, and the parent process is %d\n",getpid(),getppid());
	return 0;
}
