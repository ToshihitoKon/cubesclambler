#ifndef _VALUES_H_
#define _VALUES_H_

#define UP 0
#define DOWN 1
#define BACK 2
#define FRONT 3
#define RIGHT 4
#define LEFT 5


static char rotate_symbol[6] = {'U','D','B','F','B','L'};
char int_to_rotate_symbol(int i) {
    return rotate_symbol[i];
}

static char add_symbol[3] = {'\0', '\'', '2'};
char int_to_add_symbol(int i) {
    return add_symbol[i];
}

/* ===
0: UP,White
1: DOWN, Yellow
2: BACK, Blue
3: FRONT,Green
4: RIGHT, Red
5: LEFT,Orange
*/
static int cube_color_code[6]={47,43,44,42,41,45};//WYBGRO
void print_block_with_color(int i) {
    printf ("\x1b[%dm  \x1b[49m", cube_color_code[i]);
}

static int rotate_list[6][5][4][3] = {
    { // U
        {{FRONT,0,0},{RIGHT,0,0},{BACK ,0,0},{LEFT ,0,0}},
        {{FRONT,0,1},{RIGHT,0,1},{BACK ,0,1},{LEFT ,0,1}},
        {{FRONT,0,2},{RIGHT,0,2},{BACK ,0,2},{LEFT ,0,2}},
        {{UP   ,0,0},{UP   ,2,0},{UP   ,2,2},{UP   ,0,2}},
        {{UP   ,1,0},{UP   ,2,1},{UP   ,1,2},{UP   ,0,1}}
    },
    { // D
        {{FRONT,2,0},{LEFT ,2,0},{BACK ,2,0},{RIGHT,2,0}},
        {{FRONT,2,1},{LEFT ,2,1},{BACK ,2,1},{RIGHT,2,1}},
        {{FRONT,2,2},{LEFT ,2,2},{BACK ,2,2},{RIGHT,2,2}},
        {{DOWN ,0,0},{DOWN ,2,0},{DOWN ,2,2},{DOWN ,0,2}},
        {{DOWN ,1,0},{DOWN ,2,1},{DOWN ,1,2},{DOWN ,0,1}}
    },
    { // B
        {{FRONT,0,2},{DOWN ,0,2},{BACK ,2,0},{UP   ,0,2}},
        {{FRONT,1,2},{DOWN ,1,2},{BACK ,1,0},{UP   ,1,2}},
        {{FRONT,2,2},{DOWN ,2,2},{BACK ,0,0},{UP   ,2,2}},
        {{BACK ,0,0},{BACK ,2,0},{BACK ,2,2},{BACK ,0,2}},
        {{BACK ,1,0},{BACK ,2,1},{BACK ,1,2},{BACK ,0,1}}
    },
    { // F
        {{DOWN ,0,0},{RIGHT,2,0},{UP   ,2,2},{LEFT ,0,2}},
        {{DOWN ,0,1},{RIGHT,1,0},{UP   ,2,1},{LEFT ,1,2}},
        {{DOWN ,0,2},{RIGHT,0,0},{UP   ,2,0},{LEFT ,2,2}},
        {{FRONT,0,0},{FRONT,2,0},{FRONT,2,2},{FRONT,0,2}},
        {{FRONT,1,0},{FRONT,2,1},{FRONT,1,2},{FRONT,0,1}}
    },
    { // R
        {{FRONT,0,2},{DOWN ,0,2},{BACK ,2,0},{UP   ,0,2}},
        {{FRONT,1,2},{DOWN ,1,2},{BACK ,1,0},{UP   ,1,2}},
        {{FRONT,2,2},{DOWN ,2,2},{BACK ,0,0},{UP   ,2,2}},
        {{RIGHT,0,0},{RIGHT,2,0},{RIGHT,2,2},{RIGHT,0,2}},
        {{RIGHT,1,0},{RIGHT,2,1},{RIGHT,1,2},{RIGHT,0,1}}
    },
    { // L
        {{FRONT,0,0},{UP   ,0,0},{BACK ,2,2},{DOWN ,0,0}},
        {{FRONT,1,0},{UP   ,1,0},{BACK ,1,2},{DOWN ,1,0}},
        {{FRONT,2,0},{UP   ,2,0},{BACK ,0,2},{DOWN ,2,0}},
        {{LEFT ,0,0},{LEFT ,2,0},{LEFT ,2,2},{LEFT ,0,2}},
        {{LEFT ,1,0},{LEFT ,2,1},{LEFT ,1,2},{LEFT ,0,1}}
    }};

#endif
