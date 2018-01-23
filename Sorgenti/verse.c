/************************************************************************************************************
 * This file is part of Nome-Programma.
 *
 * Nome-Programma is free software: you can redistribute it and/or moify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Nome-Programma is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Nome-Programma. If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************************************************/
#include "My_String.h"

char* strrevv( const char *string )
{
    size_t i = strlen( string );
    size_t j = 0;
    char* tmp = malloc( ( i + 1 ) * sizeof( char ) );

    for( ; *( string + j ); i--, j++ )
        *(tmp+j) = *(string+(i-1));
    *(tmp+j) = '\0';
    return tmp;
}
