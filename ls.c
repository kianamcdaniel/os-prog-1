//
//  ls.c
//  
//
//  Created by Kiana McDaniel on 9/23/18.
//

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int p[2];
    int count = 0;
    pid_t pid;
    pipe(p);
    
    pid = fork();
    
    if(pid < 0){
        printf("ERROR");
        exit(1);
    }
    else if(pid == 0){
        execvp(argv[1], &argv[1]);
        perror("Error: ");
        exit(1);
    }
    else{
        wait(NULL);
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }
    
}
