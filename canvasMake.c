// Drew Anderson
// contains the functions to create and print the assignment

#include <stdio.h>
#include <stdlib.h>
#include "canvasMake.h"

static char validCharacters[] = "!@#$&*_-+=|/~`'.,<>;:?";


// returns a random character from the list.
//characters - list of characters to choose from.
//size - number of characters contained in the list.
static char pickChar(char characters[], int size){
    int index = rand() % size;
    return characters[index];
}

// returns a random character or returns a space.
// chance - chance of returning a random character
static char genRandomChar(double chance, char characters[], int size){
    double randomNumber = (double)rand() / RAND_MAX;
    if (randomNumber < chance){
        return pickChar(characters, size);
    }
return ' ';
}

//create the canvas itself
// returns the canvas
//width - width of the canvas
//height - height of the canvas
char **createCanvas(int width, int height){
    char **canvas = malloc(height * sizeof(char));

    for (int i = 0; i < height; i++){
        canvas[i] = malloc(width * sizeof(char));
    }

    for (int i = 0; i < height; i++){
        for (int w = 0; w < width; w++){
            canvas[i][w] = genRandomChar(80.20, validCharacters, 8);
        }
    }

    return canvas;
}

// prints the canvas to the screen
//canvas - memory address where the canvas is stored.
// returns nothing
void printCanvas(char **canvas, int width, int height){
    for (int i = 0; i < height; i++){
        for (int w = 0; w < width; i++){
            printf("%d\n", canvas[i][w]);
        }
    }
}

// frees the entire canvas
// returns nothing
void freeCanvas(char **canvas, int width, int height){
    for (int i = 0; i < height; i++){
        free(canvas[i]);
    }

    free(canvas);
}
