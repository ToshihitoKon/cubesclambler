#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <time.h>

#include "values.h"

bool int_in_array(int*, int, int);

int main(int argc, char** argv)
{
    int scramble_length = 25;
    if(argc != 1) scramble_length = atoi(argv[1]);
    int history[2]={INT_MAX,INT_MAX};
    int rotate_symbol_id;
    int add_symbol_id;
    srand((unsigned)time(NULL));
    
    for(int i=0;i<scramble_length;i++){
        do {
            rotate_symbol_id = rand()%6;
        } while (int_in_array(history, 2, rotate_symbol_id));
        printf("%c", int_to_rotate_symbol(rotate_symbol_id));
        history[i%2] = rotate_symbol_id;
        
        add_symbol_id = rand()%3; 
        printf("%c ", int_to_add_symbol(add_symbol_id));
    }
    
    return 0;
}

bool int_in_array(int* array, int length, int value)
{
    for(int i=0; i<length; i++)
        if(array[i] == value) return true;
    return false;
}
