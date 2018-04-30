#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>
int main (int argc,char* argv[])
{  printf("gu id: %ld \n",syscall(SYS_gettid));
   printf("Thread id: %ld \n",syscall(SYS_gettid));
   printf("pp id: %ld \n",syscall(SYS_gettid));
   printf("pg id: %ld \n",syscall(SYS_gettid));
        return 0;
        }