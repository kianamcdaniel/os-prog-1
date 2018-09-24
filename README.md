# os-prog-1

hello!

please follow the steps below to run my program & check it's functionality! 

1) ssh into zeus.cs.txstate.edu 
2) cd into the directory that my program's .c files are saved
3) enter the command: gcc -std=c99 pre.c -o pre 
    - this compiles pre.c
4) enter the command: gcc -std=c99 sort.c -o sort
    - this compiles sort.c
5) enter the command: gcc pipe.c -o pipe
    - this compiles pipe.c 
6) enter the command: ./pipe
    - this will run pipe.c
7) enter the input in the following format: 
    
    TX 189
    
    - where 'TX' is the states abbreviation and '189' is the states population in million. 
    - to enter another input simply press 'return' key and enter the information
    - once you are done entering the information press '0'
    - Input looks something like this: 
        - TX 189
        - FL 20
        - GA 1
        - AL 100
        - 0

8) once '0' is pressed, a list of states whose population is greater than 10 million will appear. The states will be sorted in alphabetical order. 
    
