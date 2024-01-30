%{
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
extern char *yytext;
extern int yyleng;
extern int yylex(void);
extern void yyerror(char*);
int variable=0;
%}
%union{
   char* cadena;
   int num;
} 
%token ASIGNACION PYCOMA SUMA RESTA PARENIZQUIERDO PARENDERECHO INICIO FIN LEER ESCRIBIR COMA
%token <cadena> ID
%token <num> CONSTANTE
%%
sentencias: sentencias sentencia 
|sentencia
;
sentencia: ID {if(yyleng>32) yyerror("Longitud mayor a la esperada");} ASIGNACION expresion PYCOMA
|INICIO {printf("TOKEN reconocido");}
|FIN {printf("TOKEN reconocido");}
|leer {printf("TOKEN reconocido");}
|escribir {printf("TOKEN reconocido");}
;
expresion: primaria 
|expresion operadorAditivo primaria 
; 
primaria: ID
|CONSTANTE {printf("valores %d %d",atoi(yytext),$1); }
|PARENIZQUIERDO expresion PARENDERECHO
;
operadorAditivo: SUMA 
| RESTA
;
leer: LEER PARENIZQUIERDO ID leer
|COMA ID leer
|finlye
;
escribir: ESCRIBIR PARENIZQUIERDO expresion escribir
|COMA expresion escribir
|finlye
;
finlye : PARENDERECHO PYCOMA
;
%%
int main() {
yyparse();
}
void yyerror (char *s){
printf ("Error : %s\n",s);
}
int yywrap()  {
  return 1;  
} 
