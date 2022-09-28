/*
Date: 28/09/2022 
Author: Alan
Email: UP210305@alumnos.upa.edu.mx
Description: Pizza.
Last Modification: 28/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*
La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación. 
 Ingredientes vegetarianos: Pimiento y tofu. 
 Ingredientes no vegetarianos: Peperoni, Jamón y Salmón. 
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y enfunción de su respuesta 
le muestre un menú con los ingredientes disponibles para que elija. Solo se puede eligir un ingrediente además de la mozzarella 
y el tomate que están en todas lapizzas. Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.

*/

//------------------ MAIN FUNCTION --------------------

int main(){

    int pizza;
    int opcion;

    cout << "Menu" << endl;
    cout << "1. Vegetarian Pizza" << endl;
    cout << "2. Classic Pizza" << endl; 
    cout << "What pizza do you want?" << endl;
    cin >>pizza;

    if (pizza==1)
    {
        cout << "Ingredients";
        cout << "1. Pepper" << endl;
        cout << "2. Tofu" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter the ingredient do you want" << endl;
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "Your pizza is vegetarian with tofu and tomatoe sauce";
            break;
            case 2:
                cout << "Your pizza is vegetarian with tofu and tomatoe sauce";
            break;
            case 3:
                system("PAUSE");
            break;
            default:
                cout << "Your ingredients is invalid";
            break;
        }
        
    }
    else if (pizza==2)
    {
        cout << "Ingredients";
        cout << "1. Peperoni" << endl;
        cout << "2. Jam" << endl;
        cout << "3. Salmon" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter the ingredient do you want"<< endl;
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "Your pizza is classic with peperoni, mozzarella and tomatoe sauce";
            break;
            case 2:
                cout << "Your pizza is classic with jam, mozzarella and tomatoe sauce";
            break;
            case 3:
                cout << "Your pizza is classic with salmon, mozzarella and tomatoe sauce";
            break;
            case 4:
                system("PAUSE");
            break;

            default:
                cout << "Your ingredients is invalid";
            break;
        }
    }


}