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