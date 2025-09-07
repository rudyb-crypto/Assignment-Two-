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

int strlength(const char *str){
	if (str == nullptr) return 0;
	int length = 0;
	while (str[length] != '\0'){
		length++;
	}
	return length;
}

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



	
