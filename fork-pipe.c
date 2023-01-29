#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<errno.h>

int main(int argc, char *argv[])
{
	int arr[] = {1,2,3,4,5,6,7};
	int fd[2];
	int start,end;
	int arraySize = sizeof(arr)/sizeof(int);
	if ((pipe(fd))== -1)
	{
		return 1;
	}
	int id = fork();
	if (id == -1)
	{
		return 2;
	}
	if (id == 0)
	{
		start = 0;
		end = start + 3;

	}
	return 0;
}
