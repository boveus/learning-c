#include <stdio.h>
/* Include is for importing contents of a file into another file
 similar to ruby's 'require', the .h extension is for 'header' files */

    /* A C function needs two parameters at least.  The first parameter
    is an integer that indicates the number of arguments the function takes
    and the second one is an array of arguments */
    int main(int argc, char *argv[])
    // This is the beginning of a block
    {
        // This declares a variable, note the ;
        int distance = 100;

        printf("You are %d miles away.\n", distance);
       // This returns the exit value of the function
       return 0;
   }
