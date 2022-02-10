#include <stdio.h>

int main ( int argc, char *argv[] )
{
        int mark;
        char grade;

        scanf("%d", &mark);  /* reads from std-input */

        if( mark>=80 ) grade='A';
        else
        if( mark>=70 ) grade='B';
        else
        if( mark>=60 ) grade='C';
        else
        if( mark>=50 ) grade='D';
        else
        if( mark>=40 ) grade='E';
        else
                       grade='F';

        printf(" mark %2d%% grade %c\n", mark, grade);
}

