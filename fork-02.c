#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
/*
 * creating 3 fork processes
 * */
int main(int argc, char *argv[])
{
	int id = fork();
	if(id !=  0)
	{
		fork();
	}
	printf("Hello,World!\n");
}

