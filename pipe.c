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
    pipe(p);
    pid = fork();
    
    printf("I'm outside if's");
    
    if(pid < 0){                            //error
        printf("In error"); 
        perror("fork");
        exit(1);
    }
    else if(pid == 0){                      //child
        printf("I'm in child");
        close(1);
        dup(p[1]);                          //redirect std output
        close(p[0]);                        //closes read-descriptor
        close(p[1]);                        //closes write-descriptor
        execl("./pre", "pre.c", (char *)0);
        perror("execl() failed!");
        exit(0);
    }
    else{                                   //parent
        printf("I'm in parent");
        close(0);
        dup(p[0]);                          //redirect std input
        close(p[0]);                        //closes read-descriptor
        close(p[1]);                        //closes write-descriptor
        execl("./sort", "sort.c", (char *)0);
    }
}
