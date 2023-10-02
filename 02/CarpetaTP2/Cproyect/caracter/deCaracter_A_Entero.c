#include <stdio.h>
#include <math.h>
#include "deCaracter_A_Entero.h"

int cantCaracteres(char* caracteres){

    int cantCaracteres = 0;

    while (*caracteres != '\0'){
        
        caracteres++;
        cantCaracteres++;
    }

    return cantCaracteres;
}

int caracterEntero(char* caracteres){

    int numeroResultado = 0;

    for (int i = cantCaracteres(caracteres)-1; i >-1 ; i--){
        
        numeroResultado += (obtenerCaracter(*caracteres) * powAlt(10, i));
        caracteres++;
    }

    return numeroResultado;
}

int obtenerCaracter(char numero){

    switch (numero){
   
    case '0':
        return 0;
    break;
    
    case '1':
        return 1;
    break;
    case '2':
        return 2;
    break;
    case '3':
        return 3;
    break;
    case '4':
        return 4;
    break;
    case '5':
        return 5;
    break;
    case '6':
        return 6;
    break;
    case '7':
        return 7;
    break;
    case '8':
        return 8;
    break;
    case '9':
        return 9;
    break;

    }
}

int powAlt(int base, int exponente){

    int rta = 1;
    for (int i = 0; i <exponente; i++){
        
        rta *= base;
    }
    
    return rta;
}