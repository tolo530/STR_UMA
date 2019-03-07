#include <stdio.h>

int F_OR(int* valor1, int* valor2);         //Hace la operación OR de los parametros
int F_AND(int* valor1, int* valor2);        //Hace la operación AND de los parametros
int F_XOR(int* valor1, int* valor2);        //Hace la operación XOR de los parametros
int F_DIZ(int* valor1);                     //Desplaza a la izquerda el parametro
int F_DDE(int* valor1);                     //Desplaza a la derecha el parametro
int F_CF(int* valor1);                      //Cambia un valor a otro formato (binario o hexadecimal)
void F_Lectura1 (int *valor1);              //Lee un valor
void F_Lectura2 (int *valor1, int *valor2); //Lee dos valores


int main (){

    int opcion;
    int valor1, valor2, res;

    printf ("Introduce el tipo de operacion:\n"
              "1.- OR Logico\n"
              "2.- AND Logico\n"
              "3.- XOR Logico\n" 
              "4.- << (Desplazamiento a la izquierda)\n"
              "5.- >> (Desplazamiento a la derecha)\n"
              "6.- Cambio de formato (0-> binario 1->hexadecimal)\n"
              "0.- Salir\n"
              "Tipo>> ");
    
    
   

    do{

        scanf ("%d", &opcion);

        switch (opcion){
        
             case 0:
                printf ("Cerrando aplicacion...\n");
                break;

             case 1:
                 //Llamar función OR
                 F_Lectura2(&valor1, &valor2);
                 res=F_OR(&valor1, &valor2);
                 printf("%d OR %d = %d\n", valor1, valor2, res);
                 break;

             case 2:
                 //Llamar función AND
                 F_Lectura2(&valor1, &valor2);
                 res=F_AND(&valor1, &valor2);
                 printf("%d AND %d = %d\n", valor1, valor2, res);
                break;

             case 3:
                //Llamar función xor;
                F_Lectura2(&valor1, &valor2);
                res=F_XOR(&valor1, &valor2);
                printf("%d XOR %d = %d\n", valor1, valor2, res);
                break;

             case 4:
                 //Llamar función <<
                 F_Lectura1(&valor1);
                 res=F_DIZ(&valor1);
                 printf("%d << = %d\n", valor1, res);
                 break;

             case 5:
                 //Llamar función >>
                 F_Lectura1(&valor1);
                 res=F_DDE(&valor1);
                 printf("%d >> = %d\n", valor1, res);
                 break;

             case 6:
                 //Llamar función cambio de formato
    
             default:
                 printf("ERROR, introduce una operación valida\n"
                        "Tipo>> ");
                 
    }

    }while(opcion!=0);

    return 0;
}