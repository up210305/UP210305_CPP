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
    cin>> flotante;
    cout<< "El dato ingresado es: "<< flotante <<endl;

    cout<< "====================="<<endl;

    printf("Usando la funcion print scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%f", &flotante);
    printf("El dato ingresado es: %f \n", flotante);

    return 0;
}