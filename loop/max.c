#include <limits.h>

int max(int data[], int N)
{
    int i;
    int max=INT_MIN;
    for( i=0 ; i<N ; i++) {
         if( data[i]>max ) max = data[i];
    }
    return max;
}
