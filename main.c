// Drew Anderson
// the main file for the assignment.


#include <stdio.h>
#include <stdlib.h>
#include "canvasMake.h"

int main(int argc, char *argv[]){

    int height;
    int width;
    char **canvas;

    if (argc != 3){
        printf("Incorrect number of arguments.\n");
        return 1;
    }

    height = atoi (argv[1]);
    width = atoi(argv[2]);

    canvas = createCanvas(width, height);
    
    printCanvas(canvas, width, height);

    freeCanvas(canvas, width, height);

    return 0;
}