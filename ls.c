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

struct command{
    char *name;
    int argc;
    char *argv[];
};

int main (int argc, char *argv[]){
    struct command *command;
    int p[2];
    int flag = 1;
    pid_t pid;
    
    if(pipe(p) == -1){
        perror("pipe call");
        exit(1);
    }
    
    pid = fork();
    
    printf("Enter the command 'ls -t -l': ");
    scanf("%s %s %s", command->name, command->argv[1], command->argv[2]);
    printf("%s %s %s", command->name, command->argv[1], command->argv[2]);
}
