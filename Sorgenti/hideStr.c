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