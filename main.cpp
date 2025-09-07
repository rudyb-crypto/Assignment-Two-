/*********************
* I have also edited this header with gitbash command prompt.
**********************/
#include <stdio.h>
#include "functions.h"

int main(int argc, char** argv) {
    printf("The program name is '%s'\n", argv[0]);
    printf("The length of the program name is %d\n", strlength(argv[0]));
    printf("The number of command line parameters: %d\n", argc - 1);
    return 0;
}
