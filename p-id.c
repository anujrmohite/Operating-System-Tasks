#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
	int id = fork();
    int id2 = fork();
	return 0;
}