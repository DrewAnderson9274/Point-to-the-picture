// Drew Anderson
// this file contains the prototype functions for createCanvas, printCanvas, and freeCanvas

#ifndef canvasMake_h
#define canvasMake_h

char **createCanvas(int width, int height);

void printCanvas(char **canvas, int width, int height);

void freeCanvas(char **canvas, int width, int height);

#endif