//--------------------------------------------AUTOR: CARLOS BÁEZ RECIO--------------------------------------------
//--------------------------------------------SISTEMAS EN TIEMPO REAL---------------------------------------------
//------------------------------------------------CURSO 2018-2019-------------------------------------------------
//---------------------------------------------PRINCIPAL CALCULADORA----------------------------------------------

#include <stdio.h>
#include "Mis_Funciones.h"

int main (){

    int opcion;
    int formato=0; //Hexadecimal por defecto

    printf ("Introduce el tipo de operacion:\n"
              "1.- OR Logico\n"
              "2.- AND Logico\n"
              "3.- XOR Logico\n" 
              "4.- << (Desplazamiento a la izquierda)\n"
              "5.- >> (Desplazamiento a la derecha)\n"
              "6.- Cambio de formato (0-> binario 1->hexadecimal)\n"
              "7.- Muestra este menu otra vez\n"
              "0.- Salir\n");
              
   

    do{
        printf("Tipo>> ");
        scanf ("%d", &opcion);
        fflush(stdin);
        
        switch (opcion){
        
             case 0:
                printf ("Cerrando aplicacion...\n");
                break;

             case 1:
                 //Llamar función OR
                 
                 printf ("OR->Introduce A OR B\n");
                 if (formato==1){
                    int a, b, res;
                    F_LecturaHex(&a);
                    F_LecturaHex(&b);
                    res=F_OR_HX(&a, &b);
                    printf("%x OR %x = %x\n", a, b, res);

                 }
                 else if (formato==0){
                    char a[12];
                    char b[12];
                    char *res;

                    F_LecturaBin(a);
                    F_LecturaBin(b);
                    
                    res=F_OR_BI(a, b);
                    
                    printf("%s OR %s = %s\n", a, b, res);
                 }
                 break;

             case 2:
                 //Llamar función AND
                 printf ("AND->Introduce A AND B\n");
                 if (formato==1){
                    int a, b, res;
                    F_LecturaHex(&a);
                    F_LecturaHex(&b);
                    res=F_AND_HX(&a, &b);
                    printf("%x AND %x = %x\n", a, b, res);

                 }
                 else if (formato==0){
                    char a[12];
                    char b[12];
                    char *res;

                    F_LecturaBin(a);
                    F_LecturaBin(b);

                    res=F_AND_BI(a, b);
                    printf("%s OR %s = %s\n", a, b, res);
                 }                 

                break;

             case 3:
                //Llamar función xor;
                 if (formato==1){
                    int a, b, res;
                    F_LecturaHex(&a);
                    F_LecturaHex(&b);
                    res=F_XOR_HX(&a, &b);
                    printf("%x XOR %x = %x\n", a, b, res);

                 }
                 else if (formato==0){
                    char a[12];
                    char b[12];
                    char *res;

                    F_LecturaBin(a);
                    F_LecturaBin(b);

                    res=F_OR_BI(a, b);

                    printf("%s XOR %s = %s\n", a, b, res);
                 }

                break;

             case 4:
                 //Llamar función <<
                 if (formato==1){
                    int a, res;
                    F_LecturaHex(&a);
                    res=F_DIZ_HX(&a);
                    printf("%x << = %x\n", a, res);

                 }
                 else if (formato==0){
                    char a[12];
                    char *res;
                    F_LecturaBin(a);
                    res=F_DIZ_BI(a);
                    printf("%s << = %s\n", a, res);
                 }

                 break;

             case 5:
                 //Llamar función >>
                 if (formato==1){
                    int a, res;
                    F_LecturaHex(&a);
                    res=F_DDE_HX(&a);
                    printf("%x >> = %x\n", a, res);

                 }
                 else if (formato==0){
                    char a[12];
                    char *res;
                    F_LecturaBin(a);
                    res=F_DDE_BI(a);
                    printf("%s >> = %s\n", a, res);
                 }
                 break;

             case 6:
                 //Llamar función cambio de formato
                 F_CF(&formato);
                 break;
                 
             case 7:
                 //Muestra la ayuda
                 printf ("Operaciones:\n"
                          "1.- OR Logico\n"
                          "2.- AND Logico\n"
                          "3.- XOR Logico\n" 
                          "4.- << (Desplazamiento a la izquierda)\n"
                          "5.- >> (Desplazamiento a la derecha)\n"
                          "6.- Cambio de formato (0-> binario 1->hexadecimal)\n"
                          "7.- Muestra este menu otra vez\n"
                          "0.- Salir\n");
                 break;
    
             default:
                 printf("ERROR, introduce una operación valida\n");
                        
                 
    }

    }while(opcion!=0);

    return 0;
}