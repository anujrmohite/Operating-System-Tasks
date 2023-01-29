#include<stdio.h>
#include<unistd.h>
int main(){
while(1)
{
	if(fork()){
		fork();
	}
}
printf("hii\n");
return 0;
}
/*
   fork()
    /	 \
   c1	   p
  /  \    / \
     2  p
           / \
          c3  p   
	  */   
