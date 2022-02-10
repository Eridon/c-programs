#include <stdio.h>
#include <math.h>

int main ( int argc, char *argv[] )
{
    double d;
    for( d=0.1 ; d<2 ; d+=.25 ) {
        double c = M_PI * d;
        double a = M_PI/4 * d * d;
        printf("%.2f\t%.3f\t%.6f\n", d, c, a);
    }
}