/*
Date: 26/09/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Benefits.
Last Modification: 26/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*
En una determinada empresa, sus empleados son evualuados al final de cada año.
Los puntos que pueden obtener en la evaluacion comienzan en 0.0 y pueden ir aumentando,
traduciendose en mejores beneficios. Los puntos que pueden conseguir los empleados pueden ser 
0.0, 0.4, 0.6 o mas pero no valores intermedios entre las cifras mencionadas. A continuacion
se muestra una tabla en los niveles correspondientes a cada púntuacion. La cantidad  de dinero 
conseguida en cada nivel es de $2,400 multiplicada por la puntuacion del nivel.

Nivel        Puntuacion
Inaceptable  0.0
Aceptable    0.4
Meritotrio   0.6 o mas

Escribir un programa que lea la puntuacion del usuario e indique el nivel del rendimiento,
asi como la cantidad de dinero que recibira el usuario.
*/

//------------------ MAIN FUNCTION --------------------


int main()
{
    double puntuacion;
    double dinero;
    cout << "What is your puntuation? " << endl;
    cin >> puntuacion;
    if((puntuacion==0.0)||(puntuacion==0.4)||(puntuacion>=0.6)){
        dinero = puntuacion*2400;
        if(puntuacion==0.0)
        {
            cout << "Your level of performance is unacceptable" << endl;
        
        }else if (puntuacion==0.4)
        {
            cout << "Your level of performance is acceptable" << endl;
        }else if (puntuacion>=0.6)
        {
            cout << "Your level of performance is meritorious" << endl;
        }
        cout << "The money you will get is $" << dinero << endl;
        
    }else{
        cout << "The performance you enter is invalid";
    }

    
    


    return 0;
}