// Drew Anderson
// this file contains the prototype functions for createCanvas, printCanvas, and freeCanvas

#ifndef canvasMake.h
#define canvasMake.h

char **createCanvas(int width, int height);

void printCanvas(char **canvas, int width, int height);

void freeCanvas(char **canvas, int width, int height);

#endif