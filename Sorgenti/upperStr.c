#include"My_String.h"
#include <ctype.h>

/* funzione che rende tutti i caratteri della stringa MAIUSCOLI*/
char *upperStr( const char *string, size_t dimStr )
{
    char *tmp = calloc(dimStr+1,sizeof(char));
    for( int j = 0; *(string+j) ; j++ )/* for finchè non trova un EOF */
       *(tmp+j) = (char)toupper((unsigned) *(string+j) ); /* rende MAISCOLO il carattere*/

    return tmp;
}