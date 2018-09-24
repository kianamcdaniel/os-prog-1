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
    char string[] = "hello bitches!\n"
    char readbuffer[80];
    pipe(p);
    pid = fork();
    
    if(pid < 0){                            //error
        perror("fork");
        exit(1);
    }
    else if(pid == 0){                      //child
        close(1);
        dup(p[1]);                          //redirect std output
        close(p[0]);                        //closes read-descriptor
        close(p[1]);                        //closes write-descriptor
        perror("execl() failed!");
        execl("./pre.c", "pre.c", (char *)0);
        write(p[1], string, (strlen(string)+1));
        exit(0);
    }
    else{                                   //parent
        close(0);
        dup(p[0]);                          //redirect std input
        close(p[0]);                        //closes read-descriptor
        close(p[1]);                        //closes write-descriptor
        execl("./sort.c", "sort.c", (char *)0);
        nbytes = read(p[0], readbuffer, sizeof(readbuffer));
        printf("Received string: %s", readbuffer);
    }
}
