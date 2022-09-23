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
#include <iostream>

using namespace std;

void declarar(float cantidad, float porcentaje, float rentaInteres){
    
    float interes;
    
    interes = cantidad*rentaInteres;
    rentaInteres = (porcentaje/cantidad)*100;
    cout<< "Tu impuesto es de "<< rentaInteres << "%" <<endl;
    cout << "Impuesto a pagar: " << interes;
}

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