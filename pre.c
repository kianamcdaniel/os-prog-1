//
//  pre.c
//
//
//  Created by Kiana McDaniel on 9/21/18.
//

#include <stdio.h>
#include <string.h>

struct state
{
	char name[2];
	int population; 
};

int main()
{
    struct state arr_states[10];
    int count = 0;
    	
    while(scanf("%s", arr_states[count].name)
          && (arr_states[count].name != eof) && count < 10){
        scanf("%d", &arr_states[count].population);
        count++;
    }
    	
    for(int i = 0; i < count; i++){
        if (arr_states[i].population > 10){
            printf("%s \n", arr_states[i].name);
        }
    }
    printf("^D");
}
