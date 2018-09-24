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
    
    //printf("\nEnter a state and it's populations (in millions) as shown below\n\n");
    //printf("TX 666   where 'TX' is the state's abbreviation and '666' is in millions\n\n");
    //printf("To enter another state, simply press the 'enter' button.\nWhen you are done entering the list of states, press 0\n\n");
	
    while(scanf("%s", arr_states[count].name)
          && (strcmp(arr_states[count].name, "0") != 0) && count < 10){
        scanf("%d", &arr_states[count].population);
        count++;
    }
    
    //printf("%d", count);
    //printf("\n\nHere are the states whose population are greater than 10 million:\n\n");
	
    for(int i = 0; i < count; i++)
	{
        if (arr_states[i].population > 10){
            printf("%s \n", arr_states[i].name);
        }
	}
}
