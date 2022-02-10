#include <stdio.h>
#include <stdlib.h>

/* print out first n Fibbopnacci numbers */
int main ( int argc , char *argv[] )
{
    int n = atoi(argv[1]);
    int a,b;

    a=1;
    b=1;

    while( n-- ) {
        int z = a+b;
        printf("%8i\n", a);
        a = b;
        b = z;
    }
}