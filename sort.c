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
    
    while(fgets(name[count], sizeof(name[count]), stdin)
          && (strcmp(name[count], "0") !=0 ) && count < 10){
        count++;
    }
    
    for(int i = 0; i < count; i++){
        printf("%s", name[i]);
    }
    
    for(int i = 0; i < (count - 1); ++i){
        for(int j = i + 1; j < count; ++j){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    
    for(int i = 0; i < count; i++){
        printf("%s", name[i]);
        printf("\n");
    }
    
    /*for(int i = 0; i < count; i++){
        puts(name[i]);
    }*/
}

