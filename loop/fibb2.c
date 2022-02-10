#include <stdio.h>
#include <stdlib.h>

/* print out fibbonacci numbers less than n*/
int main(int argc, char *argv[] )
{
    int mx = atoi(argv[1]);
    int a, b;
    a = b = 1;

    while (a < 100) {
        int n = a + b;
        printf(" %d", a);
        a = b;
        b = n;
    }
    printf("\n");
}
