#include <iostream>

using namespace std;

int main()
{   
    int numero;
    int dato = 1;
    int decision=0;
    do
    {
        cout << "Ingresa un numero: ";
        cin >> numero;
        if (numero == dato)
        {
            cout << "El numero es igual a dato: ";
        }if(numero != dato){
            cout<< "El numero no es igual a dato" << endl;
            if (numero<dato)
            {
                cout << "El numero es menor a dato" << endl;
            }else if (numero>dato)
            {
                cout << "El numero es mayor a dato"<< endl;
            }else if (numero<=dato){
                cout << "El numero es menor igual a dato"<< endl;
            }else if (numero>=dato){
                cout << "El numero es mayor igual a dato"<< endl;
            }

        }

        cout << "Desea ingresar otro numero? ";
        cin >> decision;
            
    } while (decision != 0);


    return 0;
    
}