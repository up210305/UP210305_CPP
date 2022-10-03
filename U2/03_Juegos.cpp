/*
Date: 28/09/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Games.
Last Modification: 28/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*

Escribir un programa para una empresa que tiene salas de juegos para todas las edades yquiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El
programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5ysi es mayor de 18 años, $10.
p210582
*/

//------------------ MAIN FUNCTION --------------------

int main(){
    int edad;

    cout << "How old are you? " << endl;
    cin >> edad;

    if (edad<4)
    {
        cout << "You can enter for free" << endl;
    }
    else if (edad>=4 && edad<=18)
    {
        cout << "You can enter for $5 bucks" << endl;
    }
    else if (edad>18)
    {
        cout << "You can enter for $10 bucks" << endl;
    }
    
    
    
}
