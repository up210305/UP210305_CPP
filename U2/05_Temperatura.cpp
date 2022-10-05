/*
Date: 05/10/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Temperature.
Last Modification: 05/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*
Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta.

*/

//------------------ MAIN FUNCTION --------------------

int main(){
    float temperatura;
    int contador = 1;
    float tempeAcum = 0;
    int temperatura_min = 9999, temperatura_max = -9999;

    do
    {
        cout << "give me the temperature" << endl;
        cin >> temperatura;
        tempeAcum +=temperatura;

        contador ++;
        if (temperatura <= temperatura_min)
        {
            temperatura_min=temperatura;
        }
        if (temperatura >= temperatura_max)
        {
            temperatura_max=temperatura;
        }
    } while (contador <=6);
    
    cout << "the average of temperature today is : " << tempeAcum/6 <<endl;
    cout << "The least temperature is " << temperatura_min<< endl;
    cout << "The maximun temperature is " << temperatura_max << endl;


    return 0;
}