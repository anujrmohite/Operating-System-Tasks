#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
/*
 * it basically stores the values associated with the address variable to the wait() fucntio call in the compiler stage
 * */
int main(int argc, char *argv[])
{
    int id = fork();
    int n;
    if (id == 0)
    {
        n = 1;
    }else{
        n = 6;
    }

    if (id != 0)
    {
        wait(2);
    }
    int i;    
    for (i=n;i<n+5; i++)
    {
        printf("%d ",i);
        fflush(stdout);
    }
    printf("\n"); 
    return 0;
}
