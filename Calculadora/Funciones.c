//--------------------------------------------AUTOR: CARLOS BÁEZ RECIO--------------------------------------------
//--------------------------------------------SISTEMAS EN TIEMPO REAL---------------------------------------------
//------------------------------------------------CURSO 2018-2019-------------------------------------------------
//-----------------------------------DESARROLLO DE LAS FUNCIONES DE LA CALCULADORA--------------------------------

#include <stdio.h>
#include "Mis_Funciones.h"

//--------------------------------------------------HEXADECIMAL---------------------------------------------------
//Lectura valores Hexadecimales
void F_LecturaHex (int *valor){
    printf("Valor>>");
    scanf("%x", valor);
}

//Hace la operación OR de los parametros formato Hexadecimal
int F_OR_HX(int* valor1, int* valor2){ 
    int res;
    res = *valor1 | *valor2;
    return res;
}         

//Hace la operación AND de los parametros formato Hexadecimal
int F_AND_HX(int* valor1, int* valor2){
    int res;
    res = *valor1 & *valor2;
    return res;
}
//----------------------------------------------------BINARIO------------------------------------------------------



//-----------------------------------------------------OTROS-------------------------------------------------------
//Cambia el formato (binario(0) o hexadecimal(1))
void F_CF(int* formato){
    printf("Introduce nuevo formato [0->bi, 1->hx]\n");
    printf("Valor>> ");
    scanf ("%d", formato);
    
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

