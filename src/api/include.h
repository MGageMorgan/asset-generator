/* The Christoffen Corporation Logo Generator
 * (c) M. Gage Morgan et. al. on 6/8/2016 
 *
 * Version 2.0.1
 *
 * This is the main header file. All the functions in the
 * other C files use this file to figure out where they
 * are referencing to when a function from another file is 
 * used.
 */

#ifndef INCLUDE_H_INCLUDED
#define INCLUDE_H_INCLUDED
#include <cairo.h>

/*
 * If I find this in another file somewhere, I'll come back 
 * I'll come back here and document it.
 */
char args[50];

/*
 * Declares the colored_triangle() 
 * function used in options.c
 */
void colored_triangle(int img_width, int img_height, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, char img_name[50]);

/*
 * Declares the outlined_triangle() 
 * function used in options.c
 */
void outlined_triangle(int img_width, int img_height, double scaleX1, double scaleY1, double lineX1, double lineY1, double lineX2, double lineY2, double lineX3, double lineY3, double finishX1, double finishY1, char img_name[50]);

/*
 * Declares the join_triangles() 
 * function used in options.c
 */
int join_triangles(char tri_one[50], char tri_two[50], char tri_three[50], char tri_four[50], char tri_five[50], char tri_six[50], char tri_seven[50], char img_name[50]); 

/*
 * The following are definitions 
 * for functions used for the first 
 * time in options.c
 */
void outlined_nologo();

void outlined_all();

void colored_nologo();

void colored_all();

void frankenlogos();

void all_imgs();

#endif
