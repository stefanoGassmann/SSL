#include <stdio.h>
#include <stdlib.h>
#include "archivo.h"
#include "reconocerAutomata.h"

void crearArchivo(){
	FILE *file;
	file = fopen ("caraxteres.txt", "w+" );        
	fclose (file);
}

void leerArchivo(){

    FILE *file;
	file = fopen ("caraxteres.txt", "r+" );

    //Leo la cantidad de caracteres que tiene el archivo
    //Nota : con archivos Demasiado grandes esta solución no funcionaría
    // Pd: La pereza me gana :D

    int cantidadCaracteresArchivo = 0;

    while(fgetc(file)!= EOF){
        
        cantidadCaracteresArchivo++;
    }

    char caracteres [cantidadCaracteresArchivo];

    fseek(file, 0, SEEK_SET);

    for (int i = 0; i < cantidadCaracteresArchivo; i++){
        
        caracteres[i] = fgetc(file);
    }
    caracteres[cantidadCaracteresArchivo] = '\0';
    
    reconocerAutomata(caracteres);   
    

	fclose (file);
}