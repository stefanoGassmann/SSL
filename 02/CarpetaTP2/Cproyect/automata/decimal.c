#include <stdio.h>
#include "decimal.h"

int isDecimal(char* caracteres){

                        //0 (1-9) -
int TTDecimal [6][3] = {1,2,3    // 0-+
                    ,5,5,5      // 1+
                    ,2,2,5      // 2+
                    ,5,4,5      // 3
                    ,4,4,5      // 4+
                    ,5,5,5};    // 5


    int actualTabla = 0; 
    
    while (*caracteres != '\0'){
        
        if(*caracteres == '0'){

            actualTabla = TTDecimal [actualTabla][0];
        }else if((*caracteres >= '1') && (*caracteres <= '9')){
        
            actualTabla = TTDecimal [actualTabla][1];
        }else if (*caracteres == '-'){

            actualTabla = TTDecimal [actualTabla][2];
        }else{

            actualTabla = 6;
            return 0; // Flag (me ahorra tiempo :D) Condición de parada
        }  
        caracteres ++;
    }

    // Manejo los estados de aceptación
    if(actualTabla == 1 || actualTabla == 2 || actualTabla == 4){
                 
        return 1;
    }else{

        return 0;
    }
}


