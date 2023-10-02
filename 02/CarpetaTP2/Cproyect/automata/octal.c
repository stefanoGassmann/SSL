#include <stdio.h>
#include "octal.h"


int isOctal(char* caracteres){

                    //0 (1-7) 
    int TTOctal [5][2] = {1,4      // 0-
                    ,2,3      // 1
                    ,4,4      // 2+
                    ,3,3      // 3+
                    ,4,4};    // 4

    int actualTabla = 0; 
    
    while (*caracteres != '\0'){
        
        if(*caracteres == '0'){

            actualTabla = TTOctal [actualTabla][0];
        }else if( (*caracteres >= '1') && (*caracteres <= '7')){
        
            actualTabla = TTOctal [actualTabla][1];
        }else{

            actualTabla = 4;
            return 0; // Flag (me ahorra tiempo :D) Condición de parada
        }  
        caracteres ++;
    }

    // Manejo los estados de aceptación
    if(actualTabla == 2 || actualTabla == 3){
        return 1;
    }else{
        return 0;
    }
}


