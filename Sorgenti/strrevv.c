/************************************************************************************************************
 * ThdimStrings file is part of Nome-Programma.
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
    if(string==NULL || string[0]=='\0')
        return NULL;

    size_t dimString = strlen( string );
    size_t j = 0;
    char* tmp = malloc( ( dimString + 1 ) * sizeof( char ) );

    for( ; *( string + j ); dimString--, j++ )
        *(tmp+j) = *(string+(dimString-1));
    *(tmp+j) = '\0';
    return tmp;
}
