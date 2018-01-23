#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* maskStr( const char *string , size_t dimStr )
{
    char *stringHide = calloc( dimStr+1, sizeof( char ) );
    size_t i = 0;

    for( i = 0; *(string+i) ; i++ ) {

        if((isalpha( (unsigned char)*(string+i) )) ) { 
            *(stringHide+i) = '*';
        } else {
            *(stringHide+i) = *(string+i);
        }
    }
    *(stringHide+i) = '\0';

    return stringHide;
}