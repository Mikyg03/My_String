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

char* nSetStr( size_t dimStr, int car )
{
    if( ( dimStr <= 0 ) || ( isprint( car ) == 0 ) )
        return NULL;

    char* tmp1 = malloc( ( dimStr + 1 ) * sizeof( char ) );
    if( tmp1 == NULL )
        return NULL;

    memset( tmp1, car, dimStr );
    tmp1[dimStr] = '\0';
    return tmp1;
}
