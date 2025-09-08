/* *************************************************
*  Name: Rudy Benavides
*  Assignment: Assignment 2: Hello World
*  Purpose: Be able to use github properly and upload/download
*           data as well as create a program that tracks parameters of data files.
************************************************* */
#include <stdio.h>
#include "functions.h"


/*****************************************************/
/* Function:   main                                  */
/* Inputs:     int argc (argument count),            */
/*             char** argv (argument vector)         */
/* Outputs:    int (exit status)                     */
/* Purpose:    Displays the program name, its length,*/
/*             number of command-line parameters,    */
/*             and lengths of each parameter         */
/*****************************************************/

int main(int argc, char** argv) {
    printf("The program name is '%s'\n", get_filename(argv[0]));
    printf("The length of the program name is %d\n", strlength(get_filename(argv[0])));
    printf("The number of command line parameters: %d\n", argc - 1);
    
    int i = 1;
    while (i < argc) {
        printf("\tThe length of parameter %d is : %d\n", i, strlength(argv[i]));
        i++;
    }
    
    return 0;
}
