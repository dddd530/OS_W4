#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;
    pid = fork();
    int n = 10;
    for (int i = 0; i < 10; i++){
        if (pid > 0){
          printf("Hello from parent [%d - %d]\n", pid, i);
        }
        else{
           printf("Hello from child [%d - %d]\n", pid, i);
        }
    }
}

//we have that strings from parent processes and child processes may come in different order