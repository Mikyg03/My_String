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

/**
 *  \file MyString.h
 *  \brief Header per la gestione della libreria MYString
 */

/////////////////////////////////////////////// DEFENCE GUARD ///////////////////////////////////////////////
#ifndef MYSTRING_H
#define MYSTRING_H
#if _MSC_VER > 1200
#pragma once
#endif

#define __MYSTRING_VERSION       1.03
#define __MYSTRING_MAJOR_VERSION 1
#define __MYSTRING_MINOR_VERSION 03
#define __MYSTRING_PATCHLEVEL    03
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


#if defined(_MSC_VER)|| defined(_clang_)
#pragma warning(disable:4996)
#endif // defined

#include <stdlib.h>
#include <string.h>

//#include "My_Header.h"
#include "My_Errno.h"

/**
 *  \enum 	ALIGNTYPE
 *  \brief 	Enumerazione per facilitare l'inserimento del tipo di Allinemaento.
 */
typedef enum {
    STRL = 0, ///< Allineamento a  Sinistra.
    STRR = 1, ///< Allineamento a  Destra.
    STRC = 2  ///< Allineamento al Centro.
}ALIGNTYPE;

////////////////////////////////// PROTOTIPI ///////////////////////////////////

/**
 * \fn      char* nSetStr(size_t  dimStr, int car)
 * \brief   Alloca uno spazio in memoria per una stringa di dimStr car elementi.
 *
 * \details     Alloca lo spazio di memoria per una stringa di dimStr caratteri
 *              e li setta tutti al carattere car. Al chiamante spetta il compito
 *              di deallocare la stringa quando non è più necessaria.
 *
 * \param[in]   dimStr      Dimensione della stringa da allocare.
 * \param[in]   car         Caratteri da stringa.
 * \return                  Puntatore alla stringa allocata.
 * \retval      NULL        Errori
 */
char*  nSetStr(size_t dimStr, int car );

/**
 * \fn      char* alignStr(const char* string, size_t dimSpace, ALIGNTYPE aling )
 * \brief   Crea una stringa allineata in un determinato spazio.
 *
 *        	Dato lo spazio per contenere la stringa, ne crea una copia con l'annineamento desiderato.
 *          La copia ha una dimensione pari allo spazio utile per tutta la stringa.
 *          L'allineamento viene deciso tramite gli enum: \b \a ALIGNTYPE.
 *        	Il chiamante deve deallocarne la memoria.
 *
 * \param[in]   string      Stringa da allineare.
 * \param[in]   dimSpace    Dimensione dello spazio in cui allineare la stringa.
 * \param[in]   aling       Tipo di allineamento.
 *
 * \return                  Puntatore alla stringa allineata.
 * \retval      NULL        Errori
 */
char* alignStr( const char* string, size_t dimSpace, ALIGNTYPE align );

/**
 * \fn      char* maskStr( const char* string, size_t dimStr )
 * \brief   Crea una stringa mascherata con '*' da una stringa data.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia con
 *          delle '*' al posto di ogni carattere alfabetico (non sostituisce gli altri tipi di caratteri).
 *        	Il chiamante deve deallocarne la memoria.
 *
 * \param[in]   string      Stringa da mascherare.
 * \param[in]   dimStr      Dimensione della stringa da mascherare.
 *
 * \return                  Puntatore alla stringa mascherata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)=strlen(finale)
 */
char* maskStr( const char* string, size_t dimStr );

/**
 * \fn      char* clrLS( const char* string, size_t dimStr )
 * \brief   Effettua una copia della stringa, tralasciando gli spazi iniziali.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia senza
 *          gli eventuali spazi iniziali.
 *        	Il chiamante deve deallocarne la memoria.
 *
 * \param[in]   string      Stringa copiare senza gli spazi iniziali.
 * \param[in]   dimStr    Dimensione iniziale della stringa copiare.
 *
 * \return                  Puntatore alla stringa mascherata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)>=strlen(finale)
 */
char* clrLS( const char* string, size_t dimStr );

/**
 * \fn      char* clrFS( const char* string, size_t dimStr )
 * \brief   Effettua una copia della stringa, tralasciando gli spazi finali.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia senza
 *          gli eventuali spazi finali.
 *        	Il chiamante deve deallocarne la memoria.
 *
 * \param[in]   string      Stringa copiare senza gli spazi finali.
 * \param[in]   dimStr      Dimensione iniziale della stringa copiare.
 *
 * \return                  Puntatore alla stringa mascherata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)>=strlen(finale)
 */
char* clrFS( const char* string, size_t dimStr );

/**
 * \fn      char* clrMultiSpace(const char* string, size_t dimStr)
 * \brief   Effettua una copia della stringa, eliminado gli spazi multipli.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia senza
 *          gli eventuali spazi finalispazi multipli.
 *        	Il chiamante deve deallocarne la memoria.
 *
 * \param[in]   string      Stringa copiare senza gli spazi multipli.
 * \param[in]   dimStr      Dimensione iniziale della stringa da copiare.
 *
 * \return                  Puntatore alla stringa copiata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)>=strlen(finale)
 */
char* clrMultiSpace( const char* string, size_t dimStr );

/**
 * \fn      char*  upperStr( const char* string, size_t dimStr )
 * \brief   Effettua una copia della stringa, portando tutte le lettere in MAIUSCOLO.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia senza
 *          con tutte le lettere tutte le lettere in MAIUSCOLO.
 *        	Il chiamante deve deallocare la memoria utilizzata dalla stringa creata.
 *
 * \param[in]   string      Stringa copiare senza gli spazi multipli.
 * \param[in]   dimStr      Dimensione iniziale della stringa da rendere MAIUSCOLA.
 *
 * \return                  Puntatore alla stringa creata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)=strlen(finale)
 */
char*  upperStr( const char* string, size_t dimStr );

/**
 * \fn      char*  lowerStr( const char* string, size_t dimStr )
 * \brief   Effettua una copia della stringa, portando tutte le lettere in minuscolo.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia
 *          con tutte le lettere in minuscolo.
 *        	Il chiamante deve deallocare la memoria utilizzata dalla stringa creata.
 *
 * \param[in]   string      Stringa da rendere tutta con caratteri minuscoli.
 * \param[in]   dimStr      Dimensione iniziale della stringa.
 *
 * \return                  Puntatore alla stringa creata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)=strlen(finale)
 */
char*  lowerStr( const char* string, size_t dimStr );

/**
 * \fn      char*  titleStr( const char* string, size_t dimStr )
 * \brief   Effettua una copia della stringa, formattandola come Titolo.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia formattata
 *          come TITOLO, vale a dire con le iniziali di ogni pariola in MAIUSCOLO ed il resto della parola
 *          in minusciolo.
 *        	Il chiamante deve deallocare la memoria utilizzata dalla stringa creata.
 *
 * \param[in]   string      Stringa da formattare come Titolo.
 * \param[in]   dimStr      Dimensione iniziale della stringa.
 *
 * \return                  Puntatore alla stringa creata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)=strlen(finale)
 */
char*  titleStr( const char* string, size_t dimStr );

/**
 * \fn      char* strrevv( const char* string )
 * \brief   Effettua una copia della stringa, invertendone i caratteri.
 *
 *        	Data una stringa, la funzione alloca lo spazio in memoria per crearne una copia
 *          con tutti i caratteri invertiti. Non effettua nessul cambiamento sul MAIUSCOLO/minuscolo.
 *        	Il chiamante deve deallocare la memoria utilizzata dalla stringa creata.
 *
 * \param[in]   string      Stringa da invertire.
 *
 * \return                  Puntatore alla stringa creata.
 * \retval      NULL        Errori
 *
 * \todo Inserire strlen(iniziale)=strlen(finale)
 */
char* strrevv( const char* string );

/**
 * \fn      int CountOcc( const char* string, int caracter )
 * \brief   Conta le occorenze di un carattere in una Stringa.
 *
 *        	Data una stringa, la funzione cont quante occorenze di caracter sono contenute in essa.
 *          Fa distinzione tra minuscolo e MAIUSCOLO.
 *
 * \param[in]   string      Stringa.
 * \param[in]   caracter    Carattere da cercare.
 *
 * \return                  Numero di occorenze di caracter nella stringa.
 * \retval      >0          Numero di occorenze.
 * \retval      -1          Errori nel calcolo.
 *
 * \todo occorenze<=strlen(stringa)
 * \bug
 */
int CountOcc( const char* string, int caracter );

#endif // !MYSTRING_H
