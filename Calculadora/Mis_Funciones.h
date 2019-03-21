//--------------------------------------------AUTOR: CARLOS BÁEZ RECIO--------------------------------------------
//--------------------------------------------SISTEMAS EN TIEMPO REAL---------------------------------------------
//------------------------------------------------CURSO 2018-2019-------------------------------------------------

//HEXADECIMALES
int F_OR_HX(int* valor1, int* valor2);            //Hace la operación OR de los parametros hx
int F_AND_HX(int* valor1, int* valor2);           //Hace la operación AND de los parametros hx
int F_XOR_HX(int* valor1, int* valor2);           //Hace la operación XOR de los parametros hx
int F_DIZ_HX(int* valor1);                        //Desplaza a la izquerda el parametro hx
int F_DDE_HX(int* valor1);                        //Desplaza a la derecha el parametro hx
void F_LecturaHex (int *valor);                   //Lee un valor en formato hexadecimal

//BINARIAS
char* F_OR_BI(char* valor1, char* valor2);        //Hace la operación OR de los parametros bi
char* F_AND_BI(char* valor1, char* valor2);       //Hace la operación AND de los parametros bi
char* F_XOR_BI(char* valor1, char* valor2);       //Hace la operación XOR de los parametros bi
char* F_DIZ_BI(char* valor1);                     //Desplaza a la izquerda el parametro bi
char* F_DDE_BI(char* valor1);                     //Desplaza a la derecha el parametro bi
void F_LecturaBin (char* valor);                  //Lee un valor en formato binario

//OTRAS
void F_CF(int* formato);                          //Selecciona el tipo de formato con el que vamos a trabajar
int F_BinarioADec (char *valor);                  //Pasa de formato binario a formato decimal
char* F_DecimalABin (int *valor);                 //Pasa de formato decimal a formato binario
