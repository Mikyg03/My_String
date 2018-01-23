#include "My_String.h"
#include <ctype.h>

char* titleStr( const char* string , size_t dimStr)
{
    if( !string )
        return NULL;

    char* tmp = calloc( ( dimStr+1), sizeof( char ) );
    int j = 0, vc = 0;

    while( *( string + j )!='\0' ) {

        if( *( string + j ) == ' ' ) {
            *( tmp+j ) = ' ';
            vc = 0;
            j++;
            continue;
        }
        if( vc == 0 ) {

            if( islower( *(string+j)))
                *( tmp+j ) = (unsigned char)toupper((int)*(string+j));
            else

            *( tmp + j ) = *(string+j);
            vc = 1;
            j++;
            continue;
        } else {
            if( isupper( *(string+j) ) )
               *( tmp+j ) =(unsigned char)tolower( *(string+j) );
            else
                            *( tmp + j ) = *(string+j);
            j++;
        }
    }
    return tmp;
}
