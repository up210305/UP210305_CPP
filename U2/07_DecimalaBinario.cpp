#include <iostream>

using namespace std;

int main(){
    string resultado;
    int numero;

    cout << "Enter the number you want to convert to binary? ";
    cin >> numero;
    while (numero != 0)
    {
        if (numero%2==0)
        {
            resultado = '0' +resultado;
        }
        else
        {
            resultado = '1' +resultado;
        }
        numero/=2;
        
    }
    cout << "Your number in decimal is " <<numero;
    cout << "Your number in binary is " << resultado;
    
}