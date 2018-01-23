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
