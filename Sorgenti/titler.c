/************************************************************************************************************
 * This file is part of My_String.
 *
 * My_String is free software: you can redistribute it and/or moify
 * it under the terms of the GNU Lesser General Public License v3.0  as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * My_String is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License v3.0  for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License v3.0 
 * along with My_String. If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************************************************/
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
