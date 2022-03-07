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
//Create a variable: dataType anyName; | dataType anyName = 12; //Solo se declara una vez

int myInt = 24; //-> text format: %i, %d
float myFloat = 22.7; //-> text format: %f
char myChar = 'l'; // -> %c
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };
                // 0  1   2   3   4  5  6 ...n
float myFloatArray[255] = {1.33, 2.55, 666.1};                
char word[10] = {'L', 'u', 'i', 's'};
char country[10] = "Mexico"; // %s
char* aName = "Gerardo";  // %s



int main(){
    //Ejecucion/Llamado:
    printf("temperatura:\t%i, mi nombre es:\t%s\n", temp, name);
    temp = 15;
    printf("temperatura:\t%i, mi nombre es:\t%s\n", temp, name);    

    //Modified ints
    printf("hola clase, myInt = %d\n", myInt);
    myInt = 25;
    printf("hola clase, myInt = %d\n", myInt);
    int yearsOld = 24;
    printf("%f\n", myFloatArray[1]);
    printf("%c\n", myChar);
    myChar = 'i';
    printf("%c\n", myChar);
    country[0] = 'I';
    country[1]= 't';
    country[2]= 'a';
    country[3]= 'l';
    country[4]= 'y';
    aName = "Gerardo";


    return 0;
}