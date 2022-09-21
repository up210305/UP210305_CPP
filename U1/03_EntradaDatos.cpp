#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int entero;
    float flotante;
    double grande;
    char caracter;

    cout<< "Este programa muestra el ingreso de datos por el usuario. \n";
    cout<< "Ingresa un dato tipo entero: ";
    cin>> entero;
    cout<< "El dato ingresado es: "<< entero <<endl;

    cout<< "====================="<<endl;

    printf("Usando la funcion print scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);

    return 0;
}