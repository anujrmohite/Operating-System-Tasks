#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
/*
int fd[2];
fd[0] -- read 
fd[1] -- write 
*/

/* To communicate between processes
 * by using pipe we can communicate between files;;
 *
 * fd == file descriptors are key to access for a file
 * whether we want to read or write data to;;
 * that array is going to save all the files it opened by fd
 *
 * pipe is a in memory file 
 * we can read and write in it...
 * 
 * */
int main(int argc , char *argv[])
{
	int fd[2];
	if(pipe(fd)== -1)
	{
		printf("An err occured while opening pipe\n");
		return 1;
	} 
	int id = fork();
	if (id == 0)
	{
		close(fd[0]);
		int x;
		printf("Input a Number:\n");
		scanf("%d",&x);
		if((write(fd[1],&x,sizeof(int)))== -1)
		{
			printf("error occured while writing to the call");
			return 2;
		}
		close(fd[1]);
	}else
	{
		close(fd[1]);
		int y;
		if((read(fd[0],&y,sizeof(int)))==-1)
		{
			printf("no value to read!\n");
			return 3;
		}
		y = y*3;
		close(fd[0]);
		printf("got from child proces %d\n",y);
	}
	return 0;

}
