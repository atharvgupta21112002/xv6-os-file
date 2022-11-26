#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(int argc,char *argv[1])
{
int ifd,ofd,pipefd[2];

printf("Process File Descriptor Table\n");
printf("......................................\n");
printf("Descriptor\tPointer\tDescription\n");
printf("......................................\n");
printf("%d\t\t %p ------>Terminal's Input Device\n",STDIN_FILENO,stdin);
printf("%d\t\t %p ------>Terminal's Output Device\n",STDOUT_FILENO,stdout);
printf("%d\t\t %p ------>Terminal's Error Device\n",STDERR_FILENO,stderr);
//create two files, one for input and the other for output
ifd=open("in.txt",O_RDONLY);
ofd=open("out.txt",O_WRONLY);
printf("%d\t\t %p ------>File in.txt\n",ifd,fdopen(ifd,"r"));
printf("%d\t\t %p ------>File out.txt\n",ofd,fdopen(ofd,"w"));
//Create a pipe
pipe(pipefd);
printf("%d\t\t %p ------>Pipe's Read End\n",pipefd[0],fdopen(pipefd[0],"r"));
printf("%d\t\t %p ------>Pipe's Write End\n",pipefd[1],fdopen(pipefd[1],"w"));
}
