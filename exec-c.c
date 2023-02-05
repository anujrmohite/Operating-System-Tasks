#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<time.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
    execlp("ping","ping","-c",3,"google.com",NULL);
    printf("Success!");
    printf("the operation is done...>");
    return 0;
}
