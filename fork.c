#include <stdio.h>
#include <unistd.h>
int main()
{
pid_t pid;
pid=fork();
if(pid<0)
{
printf("\nError in creating the child process");
return -1;
}
if(pid==0)
{
sleep(20);
printf("\nI am a child");
printf("\nMy PID is %d",getpid());
printf("\nMy parent id is %d",getppid());
}
else
{
sleep(60);
printf("\nI am parent");
printf("\nMy PID is %d",getpid());
}
return 0;
}

