#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )
{
    int n = atoi(argv[1]);
    int a;

    if(n<1||n>10) exit(EXIT_FAILURE);

    for(a=1 ; a<=10 ; ++a) printf("%2i x %2i = %3i\n",  a, n, a*n);
}
