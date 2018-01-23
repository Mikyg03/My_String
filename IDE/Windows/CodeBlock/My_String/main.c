#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "../../../../Sorgenti/My_String.h"

int main(int arcg, char* argv[] )
{
    char *d= "Allineamento";
    size_t dimStr = 444;
    unsigned char car = 'O';

        printf( "======================================================================================\n" );
    char* stringa = nSetStr( 60, '*' );
    printf( "Settare stringa di 60 caratteri tutti '*' :[%s]\n", stringa );
    printf( "======================================================================================\n" );
    printf( "Frase alignStr(Sinistra)                  :[%s]\n", alignStr( d, 60, STRL) );
    printf( "Frase alignStr(Destra)                    :[%s]\n", alignStr( d, 60, STRR) );
    printf( "Frase alignStr(Centrato)                  :[%s]\n", alignStr( d, 60, STRC) );
    printf( "======================================================================================\n" );
    printf( "Frase Originale                           :[%s]\n", d="Maschera frase" );
    printf( "Frase maskStr()                           :[%s]\n", maskStr( d, dimStr ) );
    printf( "======================================================================================\n" );
    printf( "Frase Originale       :[%s]\n", d="         Cancella          Spazi             " );
    printf( "Frase  clrLS() :[%s]\n", clrLS( d, dimStr ) );
    printf( "Frase clrFS() :[%s]\n", clrFS( d, dimStr) );
    printf( "Frase   clrMultiSpace() :[%s]\n",   clrMultiSpace( d, dimStr) );
    printf( "======================================================================================\n" );
    printf( "Frase Originale       :[%s]\n", d="Minuscole MAISCOLE" );
    printf( "Frase upperStr()      :[%s]\n", upperStr( d, dimStr) );
    printf( "Frase lowerStr()      :[%s]\n", lowerStr( d, dimStr) );
    printf( "Frase titleStr()      :[%s]\n", titleStr( d ,dimStr) );
    printf( "======================================================================================\n" );
    printf( "Frase Originale       :[%s]\n", d = "I Topi Non avevano MIPOTI " );
    printf( "Frase strrevv()       :[%s]\n",       strrevv( d ) );
        printf( " Numero di '%c' =:[%d]\n",car,       CountOcc( d,car ) );


    return 0;
}
