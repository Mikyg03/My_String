#include "My_String.h"

char* clrFS( const char* string, size_t dimStr )
{
    if( ( string == NULL ) || ( *string == '\0' ) )
        return NULL;
size_t dims = strlen( string );

    if( dimStr <= 0  )
        return "\0";

    char *tmp = calloc( dimStr + 1, sizeof( char ) );
    if( tmp != NULL ) {
        strncpy( tmp, string, dims + 1 );

        while( *tmp == ' ' )
            ++tmp;
    }
    return tmp;
}
char* clrLS( const char* string, size_t dimStr )
{
    if( ( string == NULL ) || ( *string == '\0' ) )
        return NULL;
    size_t dims = strlen( string );

    if( dimStr <= 0 )
        return "\0";

    char *tmp = calloc( dims + 1, sizeof( char ) );
    if( tmp != NULL ) {
        strncpy( tmp, string, dims + 1 );

        while( *( tmp + (dims - 1) ) == ' ' )
            --dims;

        *(tmp+dims) = '\0';
    }
    return tmp;
}
char* clrFSpace( const char* string, size_t dimStr )
{
    if( ( string == NULL ) || ( *string == '\0' ) )
        return NULL;
    size_t dims = strlen( string );

    if( dimStr <= 0 )
        return "\0";

    char *tmp = calloc( dims + 1, sizeof( char ) );
    if( tmp != NULL ) {
        strncpy( tmp, string, dimStr + 1 );

        while( *tmp == ' ' )
            ++tmp;
    }
    return tmp;
}
