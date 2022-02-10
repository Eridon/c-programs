#include <stdio.h>
#include <stdlib.h>
#include </usr/include/linux/random.h>
#include <time.h>

void usage(void){
        /* this uses ANSI escape sequences
           see https://en.wikipedia.org/wiki/ANSI_escape_code#CSI_sequences
           Note how the strings are concatenated at compile time.
        */
        printf("usage: ndn <\e[1mspec\e[0m>\n"
               "where: <\e[1mspec\e[0m> is a string \n"
                   "       of the form <\e[4mn\e[m>\e[1md\e[m<\e[4ms\e[m> \n"
                   "       \e[4mn\e[m is the number of dice\n"
                   "       \e[4ms\e[m is the size of the dice (range 1...\e[4ms\e[m) \n"
                  );
}

/* Random initialiser
   the rand() function is a pseudo-random number genrator,
   the results are always the same.
   We can seed the generator with a truly random number from time
*/


void initialise_random(void)
{
        srand(time(NULL));
}

/* single dice roll of size n */
int dice(int n)
{
        return rand()%n +1 ;
}

int main ( int argc ,  char *argv[])
{
        if( argc != 2 ) {        /* check number of arguments (program name and <spec> )*/
                usage();             /* message about usage */
                exit(EXIT_FAILURE);  /* exit back to shell  */
        }

        /* Parse parameter as <n>d<s> */
        int n, s;
        int p;
        p = sscanf(argv[1], "%dd%d", &n, &s ); /* like scanf but reads from string */
        if( p!=2 ) {                           /* if 2 values not read then something is wrong  */
                usage();                           /* message about usage */
                exit(EXIT_FAILURE);                /* exit back to shell  */
        }

        initialise_random();

        int total=0;
        while( n-- ) {
                total += dice(s);
        }
        printf("%d\n", total);
}
