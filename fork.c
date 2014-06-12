#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int i=0;
int main(){
  if(fork()||fork())
    fork();
  if(fork()||fork())
    fork();
  printf("hello\n");
}
