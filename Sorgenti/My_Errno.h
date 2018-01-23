/************************************************************************************************************
 * This file is part of My_String.
 *
 * My_String is free software: you can redistribute it and/or moify
 * it under the terms of the GNU Lesser General Public License v3.0 as published by
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

/**
 *  \file MYErrno.h
 *  \brief Header generale per la gestione degli errori nelle MYLibrary
 */

/********************************************** DEFENCE GUARD **********************************************/
#ifndef MYERROR_H
#define MYERROR_H
#if _MSC_VER > 1200
#pragma once
#endif

#define __MYERROR_VERSION           1.00
#define __MYERROR_MAJOR_VERSION     1
#define __MYERROR_MINOR_VERSION     00
#define __MYERROR_PATCHLEVEL        00
/***********************************************************************************************************/

#include <errno.h>

int my_errno;
#ifndef __MYERROR__
    typedef int MYRETURN;
    #define FATALITY  my_errno = -2                    /**< ERRORE GRAVE    */
    #define SUCCESS   my_errno = ((errno=0)? errno: 0) /**< NESSUN ERRORE   */
    #define INSUCCESS my_errno = ( errno   ? errno:-1) /**< ERRORI GENERICI */
#endif

#define AZZ_ERROR my_errno=errno=0 /**< Azzera le variabili per gli errori */

#ifndef LIST_MYFATALITY
#   define MYER_PTRN(x) (my_errno=(-10*(x)-1))  /**< Puntatore =NULL              */
#   define MYER_PPTN(x) (my_errno=(-10*(x)-2))  /**< Puntatore di Puntatore =NULL */
#   define MYER_STRN(x) (my_errno=(-10*(x)-3))  /**< Stringa nulla                */
#   define MYER_STRE(x) (my_errno=(-10*(x)-4))  /**< Stringa vuota                */
#   define MYER_SIZZ(x) (my_errno=(-10*(x)-5))  /**< Size Zero                    */
#   define MYER_SIZO(x) (my_errno=(-10*(x)-6))  /**< Size over                    */
#   define MYER_SIZU(x) (my_errno=(-10*(x)-7))  /**< Size Under                   */
#   define MYER_MODE(x) (my_errno=(-10*(x)-8))  /**< Mode/flag non supportato     */
#   define MYER_EGEN(x) (my_errno=(-10*(x)-9))  /**< ERRORI GENERICI              */
#endif // !LIST_MYFATALITY

#endif //MYERROR_H
