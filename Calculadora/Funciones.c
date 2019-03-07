//--------------------------------------------AUTOR: CARLOS BÁEZ RECIO--------------------------------------------
//--------------------------------------------SISTEMAS EN TIEMPO REAL---------------------------------------------
//------------------------------------------------CURSO 2018-2019-------------------------------------------------

//DESARROLLO DE LAS FUNCIONES DE LA CALCULADORA
#include <stdio.h>
#include "Mis_Funciones.h"

//Hace la operación OR de los parametros
int F_OR(int* valor1, int* valor2, int* formato){ 
    int res;
    
    res = valor1 | valor2;

    return res;
}         

//Hace la operación AND de los parametros
int F_AND(int* valor1, int* valor2, int* formato){
    int res;
    
    res = valor1 & valor2;

    return res;
}

//Hace la operación XOR de los parametros        
int F_XOR(int* valor1, int* valor2, int* formato){
    int res;
    
    res = valor1 ^ valor2;

    return res;
} 

//Desplaza a la izquerda el parametro
int F_DIZ(int* valor1, int* formato){

    return 0;
}                  

//Desplaza a la derecha el parametro
int F_DDE(int* valor1, int* formato){

    return 0;
}   

//Cambia el formato (binario(0) o hexadecimal(1))
void F_CF(int* formato){
    printf("Introduce nuevo formato [0->bi, 1->hx]\n");
    F_Lectura1(formato);
    
    if ((*formato!=0)&&(*formato!=1)){
        printf("ERROR: No se reconoce el formato [%d]\n", *formato);
        F_CF(formato);
    }
    else{
        if (*formato==0){
            printf("Formato [%d] binario\n", *formato);
        }
        else{
            printf("Formato [%d] hexadecimal\n", *formato);
        }
    }
} 

//Lee un valor                     
void F_Lectura1 (int *valor1){
    printf("Valor>> ");
    scanf ("%d", valor1);
}   

//Lee dos valores
void F_Lectura2 (int *valor1, int *valor2){
    printf("Valor1>> ");
    scanf ("%d", valor1);

    printf("Valor2>> ");
    scanf ("%d", valor2);
} 