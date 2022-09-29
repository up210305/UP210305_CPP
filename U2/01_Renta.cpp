/*
Date: 22/09/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Rent discounts.
Last Modification: 26/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/* 
Los tramos impositivos para la declaracion de la renta
en un determinado pais osn los siguientes:

Renta Tipo impositivo
Menos de $10,000 5%
Entre $10,000 y $20,000 15%
Entre $20,000 y $35,000 20%
Entre $35,000 y $60,000 30%
Mas de $60,000 45%

Escribir un programa que pregunte al usuario su renta anual 
y muestre por pantalla el tipo impositivo que le corresṕonde.
*/

//----------------------FUNCTION ----------------------
void declarar(float cantidad, float porcentaje, float rentaInteres){
    
    float interes;
    
    interes = cantidad*rentaInteres;
    rentaInteres = (interes/cantidad)*100;
    cout<< "Your tax is "<< rentaInteres << "%" <<endl;
    cout << "Tax to pay " << interes;
}

//------------------ MAIN FUNCTION --------------------

int main()
{
    float renta;

    cout << "¿Cual es tu renta anual? ";
    cin >> renta;

    if (renta<10000)
    { 
        declarar(renta, 5, .05);
    }
    else if (renta>=10000 & renta <20000)
    {
        declarar(renta, 15, .15);
    }
    else if (renta>=20000 & renta <35000)
    {

        declarar(renta, 20, .20);
    }
    else if (renta>=35000 & renta <60000)
    {
        declarar(renta, 30, .30);
    }
    else if (renta>=60000)
    {
        declarar(renta, 45, .45);
    }

}