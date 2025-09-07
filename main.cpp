/*********************
* I have also edited this header with gitbash command prompt.
**********************/
#include <stdio.h>
#include "functions.h"

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
