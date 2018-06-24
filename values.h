#ifndef _VALUES_H_
#define _VALUES_H_

static char rotate_symbol[6] = {'R','L','U','D','B','F'};
char int_to_rotate_symbol(int i){
    return rotate_symbol[i];
}

static char add_symbol[3] = {'\0', '\'', '2'};
char int_to_add_symbol(int i){
    return add_symbol[i];
}
#endif
