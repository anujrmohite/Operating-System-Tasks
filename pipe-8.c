#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat/h>
#include<errno.h>

// pipe can only happen with pipe with same hierarchy

int main(int argc,char *argv[])
{
	if(mkfifo("myfifo1",0777)== -1)
	{
		if(errno != EEXIST)
		{
			printf("could not create fifo file");
			return 1;
		}
	}
	printf("Opening...\n");
	int fd = open("myfifio1",O_WRONLY);
	printf("Opened.\n");
	int x = 97;
	write(fd,&x,sizeof(x)) == -1


	return 0;

}
