/* *************************************************
*  Name: Rudy Benavides
*  Assignment: Assignment 2: Hello World
*  Purpose: Be able to use github properly and upload/download
*           data as well as create a program that tracks parameters of data files.
************************************************* */

#ifndef COMMANDLINE_FUNCTIONS_H
#define COMMANDLINE_FUNCTIONS_H
#include "functions.h"



#endif //COMMNADLINE_FUNCTIONS_H

/*****************************************************/
/* Function:   strlength                             */
/* Inputs:     const char* str (input string)        */
/* Outputs:    int (length of the string)            */
/* Purpose:    Counts the characters in a string     */
/*             until the null terminator             */
/*****************************************************/
int strlength(const char *str) {
    int length = 0;
    if (str != nullptr) {
        while (str[length] != '\0') {
            length++;
        }
    }
    return length;
}

/*****************************************************/
/* Function:   get_filename                          */
/* Inputs:     none                                  */
/* Outputs:    none                                  */
/* Purpose:    goes through the ring to find last /  */
/* or \ updating last_separator to point to the char */
/* after last separator                              */
/*****************************************************/
const char* get_filename(const char *path) {
    if (path == nullptr) return ""; // Return empty string for null input
    const char *last_separator = path;
    int i = 0;
    while (path[i] != '\0') {
        if (path[i] == '/' || path[i] == '\\') { // Check for both / and \ for portability
            last_separator = path + i + 1; // Point to character after separator
        }
        i++;
    }
    return last_separator;
}



	
