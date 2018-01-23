#include "My_String.h"
#include <ctype.h>

char* nSetStr( size_t dimStr, int car )
{
    if( ( dimStr <= 0 ) || ( isprint( car ) == 0 ) )
        return NULL;

    char* tmp1 = malloc( ( dimStr + 1 ) * sizeof( char ) );
    if( tmp1 == NULL )
        return NULL;

    memset( tmp1, car, dimStr );
    tmp1[dimStr] = '\0';
    return tmp1;
}
