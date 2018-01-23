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
#pragma once


int _PD1;
int _PF1;
int _PE1;
int _PS1;

int _PD2;
int _PF2;
int _PE2;
int _PS2;

int _PD3;
int _PF3;
int _PE3;
int _PS3;

int _PD4;
int _PF4;
int _PE4;
int _PS4;
//////////////////////////////////// MACRO /////////////////////////////////////
#define _MYP_(x, ...) if((x)){ puts(""); printf( __VA_ARGS__ ); puts("");}

#define PRINTD1(...) _MYP_((_PD1), __VA_ARGS__) //!< Messaggi di DEBUG LIV 1
#define PRINTF1(...) _MYP_((_PF1), __VA_ARGS__) //!< Messaggi di FATALITY LIV 1
#define PRINTS1(...) _MYP_((_PE1), __VA_ARGS__) //!< Messaggi di SUCCESS LIV 1
#define PRINTE1(...) _MYP_((_PS1), __VA_ARGS__) //!< Messaggi di INSUCCESS LIV 1

#define PRINTD2(...) _MYP_((_PD2), __VA_ARGS__) //!< Messaggi di DEBUG LIV 2
#define PRINTF2(...) _MYP_((_PF2), __VA_ARGS__) //!< Messaggi di FATALITY LIV 2
#define PRINTS2(...) _MYP_((_PE2), __VA_ARGS__) //!< Messaggi di SUCCESS LIV 2
#define PRINTE2(...) _MYP_((_PS2), __VA_ARGS__) //!< Messaggi di INSUCCESS LIV 2

#define PRINTD3(...) _MYP_((_PD3), __VA_ARGS__) //!< Messaggi di DEBUG LIV 3
#define PRINTF3(...) _MYP_((_PF3), __VA_ARGS__) //!< Messaggi di FATALITY LIV 3
#define PRINTS3(...) _MYP_((_PE3), __VA_ARGS__) //!< Messaggi di SUCCESS LIV 3
#define PRINTE3(...) _MYP_((_PS3), __VA_ARGS__) //!< Messaggi di INSUCCESS LIV 3

#define PRINTD4(...) _MYP_((_PD4), __VA_ARGS__) //!< Messaggi di DEBUG LIV 4
#define PRINTF4(...) _MYP_((_PF4), __VA_ARGS__) //!< Messaggi di FATALITY LIV 4
#define PRINTS4(...) _MYP_((_PE4), __VA_ARGS__) //!< Messaggi di SUCCESS LIV 4
#define PRINTE4(...) _MYP_((_PS4), __VA_ARGS__) //!< Messaggi di INSUCCESS LIV 4

