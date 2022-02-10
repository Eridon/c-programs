#include <stdio.h>
#include <stdlib.h>

int dice(void)
{
    return random()%6 +1 ; /* random%6 is 0...5 */
}

int main ( int argc , char *argv[] )
{
    int total=0;
    int n;

    for(n=1 ; n<=10 ; n++) {
        int d = dice();
        total += d;
        printf(" %d", d);
    }
    printf(" : %d\n", total);
}
