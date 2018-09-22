//
//  pipe.c
//  
//
//  Created by Kiana McDaniel on 9/22/18.
//

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    int p[2];
    pid_t pid;
    
    if(pipe(p) == -1){
        perror("pipe call");
        exit(1);
    }
    
    switch(pid = fork()){
        case -1:
            perror("fork call");
            exit(2);
        case 0:
            close(1);
            dup(p[1]);
            close(p[0]);
            close(p[1]);
            execl("./pre.c", "pre.c", (char *)0);
            perror("execl() failed!");
            return(EXIT_FAILURE);
        default:
            close(0);
            dup(p[0]);
            close(p[0]);
            close(p[1]);
            execl("./sort.c", "sort.c", (char *)0);
            return(EXIT_FAILURE);
    }
    
}
