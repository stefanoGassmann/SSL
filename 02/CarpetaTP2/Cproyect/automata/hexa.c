#include <stdio.h>
#include "hexa.h"

int isHexa(char* caracteres){

                        //0 (1-F) x
const int TTHexa [6][3] = {1,5,5      // 0-
                    ,5,5,2      // 1
                    ,3,4,5      // 2
                    ,5,5,5      // 3+
                    ,4,4,5      // 4+
                    ,5,5,5};    // 5


    int actualTabla = 0; 
    
    while (*caracteres != '\0'){
        

        if(*caracteres == '0'){

            actualTabla = TTHexa [actualTabla][0];
        }else if( (*caracteres >= '1' && *caracteres <= '9') || (*caracteres >= 'A' && *caracteres <= 'F')){
        
            actualTabla = TTHexa [actualTabla][1];
        }else if (*caracteres == 'x'){

            actualTabla = TTHexa [actualTabla][2];
        }else{

            actualTabla = 5;
            return 0; // Flag (me ahorra tiempo :D) Condición de parada
        }  
        caracteres ++;
    }

    // Manejo los estados de aceptación
    if(actualTabla == 3 || actualTabla == 4){
        return 1;
    }else{
        return 0;
    }
}


