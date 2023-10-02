#include <stdio.h>
#include "menu.h"
#include "automata/reconocerAutomata.h"
#include "automata/archivo.h"
#include "caracter/deCaracter_A_Entero.h"
#include "punto3/puntoFinal.h"



void imprimirMenu(){


    printf("Menú\nIntroduzca alguna de las siguientes opciones:\n");
    printf("\t1- Autómata\n");
    printf("\t2- De Caracteres a Entero\n");
    printf("\t3- Realizar Cálculo\n");

    char opcion = getchar();

    imprimirOpcionesMenuGeneral(opcion);

}

void mensajeBienvenida(){

    printf("    ____  _                            _     ________ \n");
    printf("   / __ )(_)__  ____ _   _____  ____  (_)___/ / ____ \\ \n");
    printf("  / __  / / _ \\/ __ \\ | / / _ \\/ __ \\/ / __  / / __ `/\n");
    printf(" / /_/ / /  __/ / / / |/ /  __/ / / / / /_/ / / /_/ / \n");
    printf("/_____/_/\\___/_/ /_/|___/\\___/_/ /_/_/\\__,_/\\ \\__,_/  \n");
    printf("                                             \\____/   \n");
}

void imprimirOpcionesMenuGeneral(char opcion){

    switch (opcion)
    {
    case '1':

        imprimirOpcionesMenuAutomatas();
        break;
    case '2':
        
        printf("Introduzca los caracteres a convertir en enteros : ");
        char* caract;
        scanf("%s", caract);

        printf("\nEl caracter en entero es %d\n", caracterEntero(caract));
        break;
    default:

        printf("Error: ha introducido un carecter no contemplado.\n");
        break;
    
    case '3':

        char cadena[200];

        printf("Ingrese una expresión aritmética: ");
    
        scanf("%s", cadena);

        char *p = cadena;
        int resultado = evaluarCadena(cadena, &p);

        printf("El resultado de la expresión es: %d\n", resultado);
        break;
    }

}

void imprimirOpcionesMenuAutomatas(){

    printf("Bienvenido a AUTOMATAS!!\n");
    printf("Desea introducir los caracteres por medio de...?\n");
    printf("1- Terminal\n");
    printf("2- Archivo\n");

    char opcion;
    scanf("%s", &opcion);

    switch (opcion){
        case '1' :

            printf("Escriba los caracteres en la siguiente linea y presione ENTER para cantinuar:");
            
            char * texto;
            scanf("%s", texto);
            reconocerAutomata(texto);
        
        break;

        case '2' :

            printf("Introduzca los caracteres en el archivo \"caracteres.txt\"\n");
            crearArchivo();
            printf("Al terminar, guarde y pulse alguna letra");
            char * t;
            scanf("%s", t);
            leerArchivo();
        break;
    
        default:

            printf("Error: ha introducido un carecter no contemplado.\n");
        break;
    }
}