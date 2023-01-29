#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<time.h>

int main()
{
    int p1[2];
    if (pipe(p1) == -1 ) { return -1; }

    int pid = fork();
    
    if (pid == -1) { return 2; }
    if (pid == 0) {
        //child process;
        int x;
        if ((write(p1[0],&x,sizeof(x))) == -1)
        {
            //it will read x;
            return 3;
        }
        printf("Received %d \n",x);
        x=x*4;
        if (write(p1[0],&x,sizeof(x))== -1)
        {
            return 4;
        }
        printf("Wrote %d \n",x);  
    }else
    {
        // we're in parent process
        srand(time(NULL));
        int y = rand() % 10;
        if ((write(p1[1],&y,sizeof(y)) == -1))
        {
            return 5;
        }
        printf("wrote the %d\n",y);
        if ((read(p1[0],&y,sizeof(y)) == -1 ))
        {
            return 6;
        }
        close(p1[0]);
        close(p1[1]);
    }
    return 0;
}