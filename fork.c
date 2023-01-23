#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc , char *argv[])
{
	//int id = fork();
	
	/*
	fork();
	fork();
	fork();
	*/

	// This will printed by 2^N times ...
	//printf("hello,world! with pid =%d\n",id);
	/*
	int id = fork();
	//printf("Hello,World from process id = %d\n",id);
	if (id == 0)
	{
		printf("Hello from child process with id=%d\n",id);
	}else{
		printf("Hello from the main process with id=%d\n",id);
	}

	*/
	/*
	 fork() is used for creating a new process, which is called child process,which runs concurrently with the process that makes the fork() {parent process}

	 values returned by the fork():
	 1.Negative Value: creation of child process.
2.Zero: Returned to the newly created child process
3.Positive value: returned to the parent.the value contains process id of newly created child process.
	 */
	//printf("Hello,World!\n");
	return 0;
}
