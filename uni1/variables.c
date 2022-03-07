#include <stdio.h> //its just comment.

//DataType: 
// interos (int) , decimales (float) , caracters (char), strings (char*)
// DataType varName; DataType varName = anyValue;
// Definicion, declaracion, ejecucion/Llamado...

//Declarar y definiendo un valor inicial;
// Cada tipo de variable, tiene un tipo de formato de texto.
int temp = 35; // %i, %d
float pi = 3.1416; // %f
char initial =  'L'; // %c
char* name = "Luis Gerardo";  // %s
// otros formatos de texto//
// \n: Salto de linea

//arrays: es la manera de crear listas de componentes
int numbers[6] = { 78, 25, 1 , 5 , 6};
char lastname[10] = {'C', 'a', 'm', 'a', 'r', 'a'}; //>> "Camara"



int main(){
    //Ejecucion/Llamado:
    printf("temperatura:\t%i, mi nombre es:\t%s\n", temp, name);
    temp = 15;
    printf("temperatura:\t%i, mi nombre es:\t%s\n", temp, name);    
    return 0;
}