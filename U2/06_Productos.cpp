/*
Date: 05/10/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Products.
Last Modification: 05/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*

Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad.

*/

//------------------ MAIN FUNCTION --------------------

int main(){

    int producto=1;
    float precio;
    float total = 0;
    do
    {
        
        cout << "Enter the amount of products: ";
        cin >> producto;
        
        if (producto!=0 & producto>0)
        {
            cout << "Enter the price of the product: ";
            cin >> precio;

            total += producto*precio;
        }
        
        

    } while (producto > 0 & precio>=0);
    cout << "Total account is: " << total << "\n";
    
    

}