//
//  sort.c
//  
//
//  Created by Kiana McDaniel on 9/21/18.
//

#include <stdio.h>
#include <string.h>

int main(){
    char name[10][2];
    char temp[2];
    int count = 0;
    
    do {
        if(count < 10){
            scanf("%s", name[count]);
        }
        if (strcmp(name[count], "0") != 0)
            count++;
    } while (strcmp(name[count], "0") != 0);
    
    /*for(int i = 0; i < (count - 1); i++){
        printf("this is first string: %s \n", name[i]);
        for(int j = i + 1; j < count; j++){
            printf("this is 2nd string: %s \n", name[j]);
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }*/
    
    for(int i = 0; i < count; i++){
        for(int j = 0; j < 2; j++){
            printf("%c", name[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < count; i++{
        puts(name[i]);
    }
}

