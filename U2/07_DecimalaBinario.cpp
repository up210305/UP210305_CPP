/*
Date: 07/10/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Binary.
Last Modification: 10/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*

Realice un programa que realice la conversión de binario a decimal, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un
conjunto de caracteres.

*/

//------------------ MAIN FUNCTION --------------------


int main(){
    string resultado;
    int numero;

    cout << "Enter the number you want to convert to binary? ";
    cin >> numero;
    while (numero != 0)
    {
        resultado = (numero%2==0)? "0" + resultado: "1" + resultado;
        numero/=2;
        
    }
    cout << "Your number in binary is " << resultado;
    
}