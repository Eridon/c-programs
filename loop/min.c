#include <limits.h>

int min(int data[], int N)
{
    int i;
    int min=INT_MAX;
    for( i=0 ; i<N ; i++) {
         if( data[i]>min ) min = data[i];
    }
    return min;
}
