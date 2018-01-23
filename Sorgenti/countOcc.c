#include "My_String.h"

int CountOcc(const char* string , int caracter )
{
    int count = 0;

    if( string == NULL )
        return -1;

    for( size_t j = 0; string[j]; j++ ) {
        if(string[j] ==(unsigned char)caracter ) {
            count++;
        }
    }
    return count;
}
