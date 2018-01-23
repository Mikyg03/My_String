#include "My_String.h"

char* alignStr(const char* string, size_t dimSpace, ALIGNTYPE aling )
{
//Testo i parametri d'ingresso
    if( ( string == NULL ) || ( dimSpace <= 0 ) )
        return NULL;

    size_t dimStr = strlen( string );          //>! Dimensione della stringa da allineare
    size_t spazio = 0;                         //>! Margini restanti dopo l'allineamento
    char*    tmp1 = nSetStr( dimSpace, ' ' );  //>! Ptr temporaneo per inserire la string
    char*    tmp2 = NULL;                      //>! Ptr temponareo per inserire stringa

    //Allocazione di tmp1 non riuscita
    if( tmp1 == NULL )
        return NULL;

// Determina il margine dal lato sinistro
    if( dimStr >= dimSpace ) { // La stringa è più lunga del rigo
        spazio = 0;
    } else {
        switch( aling ) {
            case STRL:// Allineata a sinistra
                spazio = 0;
                break;
            case STRR:// Allineata a destra
                spazio = ( dimSpace - dimStr );
                break;
            case STRC:// Allineata al centro
                spazio = ( ( dimSpace - dimStr ) / 2 );
                break;
            default:
                return NULL;
        }
    }

    tmp2 = ( tmp1 + ((spazio>0)?spazio:0) ) ;
    strncpy( tmp2, string, (dimStr<= dimSpace)?dimStr:dimSpace  );

    return tmp1;
}
