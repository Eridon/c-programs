#include <stdlib.h>
#include <stdio.h>

int main ( int argc , char **argv )
{
    int price, duty;
    price = atoi(argv[1]);

    if(price<= 60000) duty=0;
    else
    if(price<=250000) duty=price*1/100;
    else
    if(price<=500000) duty=price*3/100;
    else
                      duty=price*5/100;

    printf("house price £%7i\n",price);
    printf("stamp duty  £%7i\n",duty);
}
