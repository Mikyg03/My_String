#include "My_String.h"
char* clrMultiSpace( const char *string, size_t dimStr )
{
    if( ( string == NULL ) || ( *string == '\0' ) )
        return NULL;
    size_t dims = strlen( string );

    if( (dimStr <= 0) )
        return NULL;

    char* tmp = calloc( ( dims + 1 ), sizeof( char ) );

    int j = 0;
    int i = 0;
    for( ; *( string + i ) != '\0'; j++, i++ ) {
        *( tmp + j ) = *(  string + i );

        if( *( string + i ) == ' ' )
            while( *(  string + i + 1 ) == ' ' )
                i++;
    }
    *( tmp + j ) = '\0';
    return tmp;
}
