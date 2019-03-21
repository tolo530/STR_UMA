//--------------------------------------------AUTOR: CARLOS BÁEZ RECIO--------------------------------------------
//--------------------------------------------SISTEMAS EN TIEMPO REAL---------------------------------------------
//------------------------------------------------CURSO 2018-2019-------------------------------------------------
//-----------------------------------DESARROLLO DE LAS FUNCIONES DE LA CALCULADORA--------------------------------

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "Mis_Funciones.h"

//-----------------------------------------------------------------------------------------------------------------
//--------------------------------------------------HEXADECIMAL----------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

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

//Hace la operación XOR de los parametros hx
int F_XOR_HX(int* valor1, int* valor2){
    int res;
    res = *valor1 ^ *valor2;
    return res;
}

//Desplaza a la izquerda el parámetro hx
int F_DIZ_HX(int* valor1){
    int res;
    res = *valor1<<1;
    return res;
}

//Desplaza a la derecha el parámetro hx
int F_DDE_HX(int* valor1){
    int res;
    res= *valor1>>1;
    return res;
}
//-----------------------------------------------------------------------------------------------------------------
//----------------------------------------------------BINARIO------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//Lee un valor en formato binario
void F_LecturaBin (char* valor){
    printf("Valor>>");
    scanf("%s", valor);
    fflush(stdin);

}                 

//Hace la operación OR de los parametros bi
char* F_OR_BI(char *valor1, char *valor2){
    char *res;
    res = malloc (sizeof (char) * 12);
    int aux1, aux2, aux3;
    aux1=F_BinarioADec(valor1);
    aux2=F_BinarioADec(valor2);
    aux3= aux1 | aux2;
    res=F_DecimalABin(&aux3);
    
    return res;
}


//Hace la operación AND de los parametros bi
char* F_AND_BI(char* valor1, char* valor2){
    char* res;
    res = malloc (sizeof (char) * 12);
    int aux1, aux2, aux3;
    aux1=F_BinarioADec(valor1);
    aux2=F_BinarioADec(valor2);
    aux3= aux1 & aux2;
    res=F_DecimalABin(&aux3);

    return res;
}

//Hace la operación XOR de los parametros bi
char* F_XOR_BI(char* valor1, char* valor2){
    char* res;
    res = malloc (sizeof (char) * 12);
    int aux1, aux2, aux3;
    aux1=F_BinarioADec(valor1);
    aux2=F_BinarioADec(valor2);
    aux3= aux1 ^ aux2;
    res=F_DecimalABin(&aux3);

    return res;
}

//Desplaza a la izquerda el parametro bi
char* F_DIZ_BI(char* valor1){
    char* res;
    res = malloc (sizeof (char) * 12);
    int aux1, aux2;
    aux1=F_BinarioADec(valor1);
    aux2= aux1 << 1;
    res=F_DecimalABin(&aux2);

    return res;
}

//Desplaza a la derecha el parametro bi
char* F_DDE_BI(char* valor1){
    char* res;
    res = malloc (sizeof (char) * 12);
    int aux1, aux2;
    aux1=F_BinarioADec(valor1);
    aux2= aux1 >> 1;
    res=F_DecimalABin(&aux2);

    return res;
}

//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------OTROS-------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

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

//Pasa de formato binario a formato decimal
int F_BinarioADec (char* valor){
    int res, i, tam;
    tam=strlen(valor);
    res=0;

    for (i=0; i<tam; i++){
        if (valor[i]=='1'){
            res = res + pow (2, i);
        }
    }
    
    return res;
}


//Pasa de formato decimal a formato binario
char* F_DecimalABin (int *valor){
    char* res;
    res = malloc (sizeof (char) * 12);

    int i, aux;
    aux=*valor;
    i=0;

    for (i=12; i>=0; i--){
        if (aux%2==1){
            res[i]='1';
        }
        else if (aux%2==0){
            res[i]='0';
        }
        aux=aux/2;
    }
    
    return res;
}                  


