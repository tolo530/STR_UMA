#include <stdio.h>
#include "Mis_Funciones.h"

int main (){

    int opcion;
    int valor1, valor2, res;
    int formato=1; //Hexadecimal por defecto

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

        switch (opcion){
        
             case 0:
                printf ("Cerrando aplicacion...\n");
                break;

             case 1:
                 //Llamar función OR
                 F_Lectura2(&valor1, &valor2);
                 res=F_OR(&valor1, &valor2, &formato);
                 printf("%d OR %d = %d\n", valor1, valor2, res);
                 break;

             case 2:
                 //Llamar función AND
                 F_Lectura2(&valor1, &valor2);
                 res=F_AND(&valor1, &valor2, &formato);
                 printf("%d AND %d = %d\n", valor1, valor2, res);
                break;

             case 3:
                //Llamar función xor;
                F_Lectura2(&valor1, &valor2);
                res=F_XOR(&valor1, &valor2, &formato);
                printf("%d XOR %d = %d\n", valor1, valor2, res);
                break;

             case 4:
                 //Llamar función <<
                 F_Lectura1(&valor1);
                 res=F_DIZ(&valor1, &formato);
                 printf("%d << = %d\n", valor1, res);
                 break;

             case 5:
                 //Llamar función >>
                 F_Lectura1(&valor1);
                 res=F_DDE(&valor1, &formato);
                 printf("%d >> = %d\n", valor1, res);
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