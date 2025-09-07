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
/* Inputs:     const char* path (file path)          */
/* Outputs:    const char* (pointer to file name)    */
/* Purpose:    Returns a pointer to the file name    */
/*             after the last / or \ separator       */
/*****************************************************/
const char* get_filename(const char *path) {
    const char *result = "";
    if (path != nullptr) {
        result = path;
        int i = 0;
        while (path[i] != '\0') {
            if (path[i] == '/' || path[i] == '\\') {
                result = path + i + 1;
            }
            i++;
        }
    }
    return result;
}



	
