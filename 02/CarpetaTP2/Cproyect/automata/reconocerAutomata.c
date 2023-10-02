#include "reconocerAutomata.h"

#include "hexa.h"
#include "decimal.h"
#include "octal.h"


#include <string.h> 
#include <stdio.h>

void reconocerAutomata(char* texto){

    const char* auxiliarTexto = texto;

    int primerCaracter = 0;
    int ultimoCaracter = 0;

    int cantidadHexa = 0;
    int cantidadOctal = 0;
    int cantidadDecimal = 0;

    int salir = 0;

    while(salir != 1){
        
       if(*texto == '\0'){
            salir = 1;
       }

        if(*texto == '$' || *texto == '\0'){

            char subcadena [ultimoCaracter-primerCaracter];
            strncpy(subcadena, (auxiliarTexto + primerCaracter), (ultimoCaracter-primerCaracter));
            subcadena [ultimoCaracter-primerCaracter] = '\0';

            primerCaracter = ultimoCaracter+1;

            if(isHexa(subcadena)){

                cantidadHexa++;
            }else if(isOctal(subcadena)){

                cantidadOctal++;
            }else if(isDecimal(subcadena)){

                cantidadDecimal++;
            }else{

                salir = 1;
                printf("ERROR: los caracteres introducidos no se han podido reconocer");
            }
        }

       texto++;
       ultimoCaracter++;
    }

    printf("Hay un total de %d Hexadecimale, %d Octales, %d Decimales\n", cantidadHexa, cantidadOctal, cantidadDecimal);
}