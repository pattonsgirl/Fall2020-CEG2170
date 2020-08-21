/*****
 * How to use a header file (header.h)
 * For each file you want to use the header, type #include "header_file_name.h" 
 *  at the top, where the preprocessor directives go.
 * In this example, header.h inculdes a prototype function.  The actual function is in
 *  more-code.c  What I did wrong initially was have the wrong function name in more-code.c
 *  more-code.c had a function name of print_int, while my header and main in code.c used print_num
 * With that fixed, I also need to COMPILE any additional code I have.  In this case, I now have
 *  code.c and more-code.c  The command to compile both is:
 *  gcc -Wall -o program.exe more-code.c code.c 
 *  The order I compile the code files in does not matter.
 * My header file does not have compiled code, just definitions my code uses, therefore it is not
 *  listed as a file that needs compiled.
*****/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_NAME 20
//prototype functions from file_function.c
void print_num(int);

typedef struct {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_t;
//to initialize the type when creating a new variable:
//  planet_t new_planet

/*
struct planet_t {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_new, planet_old;
*/
//pre-initialize of variables that are of type planet_t
//  planet_new and planet_old can now be used in any function including main

typedef struct{
    double diameter;
    planet_t planets [9];
    char name[MAX_NAME];
} solar_sys_t;
