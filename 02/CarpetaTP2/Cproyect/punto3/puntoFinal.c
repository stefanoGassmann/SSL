#include "puntoFinal.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int evaluarOperacion(char *cadena, char **p) {
  if (**p == '(') {
    (*p)++;
    int resultado = evaluarCadena(cadena, p);
    if (**p == ')') {
      (*p)++;
    } else {
      printf("Error: Se esperaba ')'\n");
      exit(1);
    }
    return resultado;
  } 
  else {
    int numero = 0;
    while (**p >= '0' && **p <= '9') {
      numero = numero * 10 + (**p - '0');
      (*p)++;
    }
    return numero;
  }
}

int evaluarOperador(char *cadena, char **p) {
  int resultado = evaluarOperacion(cadena, p);
  while (**p == '*' || **p == '/') {
    char operador = **p;
    (*p)++;
    int siguienteTermino = evaluarOperacion(cadena, p);
    if (operador == '*') {
      resultado *= siguienteTermino;
    } 
    else {
      if (siguienteTermino == 0) {
        printf("Error: División por cero\n");
        exit(1);
      }
      resultado /= siguienteTermino;
    }
  }
  return resultado;
}

int evaluarCadena(char *cadena, char **p) {
  int resultado = evaluarOperador(cadena, p);
  while (**p == '+' || **p == '-') {
    char operador = **p;
    (*p)++;
    int siguiente = evaluarOperador(cadena, p);
    if (operador == '+') {
      resultado += siguiente;
    } 
    else {
      resultado -= siguiente;
    }
  }
  return resultado;
}