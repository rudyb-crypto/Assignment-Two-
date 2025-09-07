/*********************
* I have also edited this header with gitbash command prompt.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    printf("My Command line parameters:%d\n",argc);
	
	if(argc > 1){
		printf("The length of parameter 1 is : %d\n", strlength(argv[1]));
	}

    return 0;
}
