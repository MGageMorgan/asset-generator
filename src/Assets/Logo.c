/* The Christoffen Corporation Logo Generator
 * (c) M. Gage Morgan et. al. on 6/8/2016 
 *
 * Version 2.0.1
 *
 * The options seen in the CLI are found here.
 * The role each individual function plays will be 
 * described below. The numbers that make up the logo
 * for the most part are described in this file.
 */
#include <cairo.h>
#include "../API/include.h"

/*
 * The all_imgs() function will make the logo
 * generator output everything except the 
 * Frankenlogo output. The reason this exists does
 * not show in the CLI help output. The ELF created
 * by GCC can be double-clicked in a GUI and the 
 * output will instantly show. After installation,
 * you can also run "logo-generator" and it will call
 * this function as well.
 */
void all_imgs() {
	outlined_triangle(421, 410, 10, 10, 2.3, 28.1, 14.3, 3.0, 19.8, 17.6, 2.3, 28.1, "assets/logo/all/triangle1-outline.png");
	outlined_triangle(421, 410, 10, 10, 10.0, 11.8, 27.5, 4.4, 37.7, 10.2, 10.0, 11.8, "assets/logo/all/triangle2-outline.png");
	outlined_triangle(421, 410, 10, 10, 30.5, 2.6, 36.3, 19.0, 25.0, 12.6, 30.5, 2.6, "assets/logo/all/triangle3-outline.png");
	outlined_triangle(421, 410, 10, 10, 29.0, 14.7, 37.6, 13.0, 30.4, 22.2, 29.0, 14.7, "assets/logo/all/triangle4-outline.png");
	outlined_triangle(421, 410, 10, 10, 7.0, 18.4, 24.4, 31.4, 14.8, 37.5, 7.0, 18.4, "assets/logo/all/triangle5-outline.png");
	outlined_triangle(421, 410, 10, 10, 12.8, 33.0, 19.5, 26.0, 33.3, 35.6, 12.8, 33.0, "assets/logo/all/triangle6-outline.png");
	outlined_triangle(421, 410, 10, 10, 25.2, 32.6, 30.4, 27.0, 31.1, 38.0, 25.2, 32.6, "assets/logo/all/triangle7-outline.png");
	join_triangles("assets/logo/all/triangle1-outline.png", "assets/logo/all/triangle2-outline.png", "assets/logo/all/triangle3-outline.png", "assets/logo/all/triangle4-outline.png", "assets/logo/all/triangle5-outline.png", "assets/logo/all/triangle6-outline.png", "assets/logo/all/triangle7-outline.png", "assets/logo/all/crstfn-outline.png");

	colored_triangle(421, 410, 0, 0.79, 0.83, 0.8, 143, 30, 198, 176, 23, 281, "assets/logo/all/triangle1-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 275, 44, 377, 102, 100, 118, "assets/logo/all/triangle2-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 363, 190, 250, 126, 305, 26, "assets/logo/all/triangle3-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 376, 130, 304, 222, 290, 147, "assets/logo/all/triangle4-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 244, 314, 148, 375, 70, 184, "assets/logo/all/triangle5-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 195, 260, 333, 356, 128, 330, "assets/logo/all/triangle6-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 304, 270, 311, 380, 252, 326, "assets/logo/all/triangle7-color.png");
	join_triangles("assets/logo/all/triangle1-color.png", "assets/logo/all/triangle2-color.png", "assets/logo/all/triangle3-color.png", "assets/logo/all/triangle4-color.png", "assets/logo/all/triangle5-color.png", "assets/logo/all/triangle6-color.png", "assets/logo/all/triangle7-color.png", "assets/logo/all/crstfn-color.png");
}

/*
 * This function is called when you run the command
 * "logo-generator -O" in the CLI. The output is just 
 * the seven individual triangles without the logo.
 */
void outlined_nologo() {
	outlined_triangle(421, 410, 10, 10, 2.3, 28.1, 14.3, 3.0, 19.8, 17.6, 2.3, 28.1, "assets/logo/outlined-no-logo/triangle1-outline.png");
	outlined_triangle(421, 410, 10, 10, 10.0, 11.8, 27.5, 4.4, 37.7, 10.2, 10.0, 11.8, "assets/logo/outlined-no-logo/triangle2-outline.png");
	outlined_triangle(421, 410, 10, 10, 30.5, 2.6, 36.3, 19.0, 25.0, 12.6, 30.5, 2.6, "assets/logo/outlined-no-logo/triangle3-outline.png");
	outlined_triangle(421, 410, 10, 10, 29.0, 14.7, 37.6, 13.0, 30.4, 22.2, 29.0, 14.7, "assets/logo/outlined-no-logo/triangle4-outline.png");
	outlined_triangle(421, 410, 10, 10, 7.0, 18.4, 24.4, 31.4, 14.8, 37.5, 7.0, 18.4, "assets/logo/outlined-no-logo/triangle5-outline.png");
	outlined_triangle(421, 410, 10, 10, 12.8, 33.0, 19.5, 26.0, 33.3, 35.6, 12.8, 33.0, "assets/logo/outlined-no-logo/triangle6-outline.png");
	outlined_triangle(421, 410, 10, 10, 25.2, 32.6, 30.4, 27.0, 31.1, 38.0, 25.2, 32.6, "assets/logo/outlined-no-logo/triangle7-outline.png");
}

/*
 * The same as above WITH the actual logo
 */
void outlined_all() {
	outlined_triangle(421, 410, 10, 10, 2.3, 28.1, 14.3, 3.0, 19.8, 17.6, 2.3, 28.1, "assets/logo/outlined-all/triangle1-outline.png");
	outlined_triangle(421, 410, 10, 10, 10.0, 11.8, 27.5, 4.4, 37.7, 10.2, 10.0, 11.8, "assets/logo/outlined-all/triangle2-outline.png");
	outlined_triangle(421, 410, 10, 10, 30.5, 2.6, 36.3, 19.0, 25.0, 12.6, 30.5, 2.6, "assets/logo/outlined-all/triangle3-outline.png");
	outlined_triangle(421, 410, 10, 10, 29.0, 14.7, 37.6, 13.0, 30.4, 22.2, 29.0, 14.7, "assets/logo/outlined-all/triangle4-outline.png");
	outlined_triangle(421, 410, 10, 10, 7.0, 18.4, 24.4, 31.4, 14.8, 37.5, 7.0, 18.4, "assets/logo/outlined-all/triangle5-outline.png");
	outlined_triangle(421, 410, 10, 10, 12.8, 33.0, 19.5, 26.0, 33.3, 35.6, 12.8, 33.0, "assets/logo/outlined-all/triangle6-outline.png");
	outlined_triangle(421, 410, 10, 10, 25.2, 32.6, 30.4, 27.0, 31.1, 38.0, 25.2, 32.6, "assets/logo/outlined-all/triangle7-outline.png");
	join_triangles("assets/logo/outlined-all/triangle1-outline.png", "assets/logo/outlined-all/triangle2-outline.png", "assets/logo/outlined-all/triangle3-outline.png", "assets/logo/outlined-all/triangle4-outline.png", "assets/logo/outlined-all/triangle5-outline.png", "assets/logo/outlined-all/triangle6-outline.png", "assets/logo/outlined-all/triangle7-outline.png", "assets/logo/outlined-all/crstfn-outline.png");
}

/*
 * The same as outlined_nologo(), but with 
 * a bit more color.
 */
void colored_nologo() {
	colored_triangle(421, 410, 0, 0.79, 0.83, 0.8, 143, 30, 198, 176, 23, 281, "assets/logo/colored-no-logo/triangle1-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 275, 44, 377, 102, 100, 118, "assets/logo/colored-no-logo/triangle2-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 363, 190, 250, 126, 305, 26, "assets/logo/colored-no-logo/triangle3-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 376, 130, 304, 222, 290, 147, "assets/logo/colored-no-logo/triangle4-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 244, 314, 148, 375, 70, 184, "assets/logo/colored-no-logo/triangle5-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 195, 260, 333, 356, 128, 330, "assets/logo/colored-no-logo/triangle6-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 304, 270, 311, 380, 252, 326, "assets/logo/colored-no-logo/triangle7-color.png");
}

/*
 * The same as outlined_all(), just with 
 * more color.
 */
void colored_all() {
	colored_triangle(421, 410, 0, 0.79, 0.83, 0.8, 143, 30, 198, 176, 23, 281, "assets/logo/all-colors/triangle1-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 275, 44, 377, 102, 100, 118, "assets/logo/all-colors/triangle2-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 363, 190, 250, 126, 305, 26, "assets/logo/all-colors/triangle3-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 376, 130, 304, 222, 290, 147, "assets/logo/all-colors/triangle4-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 244, 314, 148, 375, 70, 184, "assets/logo/all-colors/triangle5-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 195, 260, 333, 356, 128, 330, "assets/logo/all-colors/triangle6-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 304, 270, 311, 380, 252, 326, "assets/logo/all-colors/triangle7-color.png");
	join_triangles("assets/logo/all-colors/triangle1-color.png", "assets/logo/all-colors/triangle2-color.png", "assets/logo/all-colors/triangle3-color.png", "assets/logo/all-colors/triangle4-color.png", "assets/logo/all-colors/triangle5-color.png", "assets/logo/all-colors/triangle6-color.png", "assets/logo/all-colors/triangle7-color.png", "assets/logo/all-colors/crstfn-color.png");
}

/*
 * Generates two hybrids representing use of the 
 * "join_triangles()" function. See README.md for
 * more information about why this even exists 
 * in the first place.
 */
void frankenlogos() {
	outlined_triangle(421, 410, 10, 10, 2.3, 28.1, 14.3, 3.0, 19.8, 17.6, 2.3, 28.1, "assets/logo/frankenlogos/triangle1-outline.png");
	outlined_triangle(421, 410, 10, 10, 10.0, 11.8, 27.5, 4.4, 37.7, 10.2, 10.0, 11.8, "assets/logo/frankenlogos/triangle2-outline.png");
	outlined_triangle(421, 410, 10, 10, 30.5, 2.6, 36.3, 19.0, 25.0, 12.6, 30.5, 2.6, "assets/logo/frankenlogos/triangle3-outline.png");
	outlined_triangle(421, 410, 10, 10, 29.0, 14.7, 37.6, 13.0, 30.4, 22.2, 29.0, 14.7, "assets/logo/frankenlogos/triangle4-outline.png");
	outlined_triangle(421, 410, 10, 10, 7.0, 18.4, 24.4, 31.4, 14.8, 37.5, 7.0, 18.4, "assets/logo/frankenlogos/triangle5-outline.png");
	outlined_triangle(421, 410, 10, 10, 12.8, 33.0, 19.5, 26.0, 33.3, 35.6, 12.8, 33.0, "assets/logo/frankenlogos/triangle6-outline.png");
	outlined_triangle(421, 410, 10, 10, 25.2, 32.6, 30.4, 27.0, 31.1, 38.0, 25.2, 32.6, "assets/logo/frankenlogos/triangle7-outline.png");

	colored_triangle(421, 410, 0, 0.79, 0.83, 0.8, 143, 30, 198, 176, 23, 281, "assets/logo/frankenlogos/triangle1-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 275, 44, 377, 102, 100, 118, "assets/logo/frankenlogos/triangle2-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 363, 190, 250, 126, 305, 26, "assets/logo/frankenlogos/triangle3-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 376, 130, 304, 222, 290, 147, "assets/logo/frankenlogos/triangle4-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 244, 314, 148, 375, 70, 184, "assets/logo/frankenlogos/triangle5-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 195, 260, 333, 356, 128, 330, "assets/logo/frankenlogos/triangle6-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 304, 270, 311, 380, 252, 326, "assets/logo/frankenlogos/triangle7-color.png");

	join_triangles("assets/logo/frankenlogos/triangle1-color.png", "assets/logo/frankenlogos/triangle2-outline.png", "assets/logo/frankenlogos/triangle3-color.png", "assets/logo/frankenlogos/triangle4-outline.png", "assets/logo/frankenlogos/triangle5-color.png", "assets/logo/frankenlogos/triangle6-outline.png", "assets/logo/frankenlogos/triangle7-color.png", "assets/logo/frankenlogos/crstfn-hybrid1.png");
	join_triangles("assets/logo/frankenlogos/triangle1-outline.png", "assets/logo/frankenlogos/triangle2-color.png", "assets/logo/frankenlogos/triangle3-outline.png", "assets/logo/frankenlogos/triangle4-color.png", "assets/logo/frankenlogos/triangle5-outline.png", "assets/logo/frankenlogos/triangle6-color.png", "assets/logo/frankenlogos/triangle7-outline.png", "assets/logo/frankenlogos/crstfn-hybrid2.png");
}





























