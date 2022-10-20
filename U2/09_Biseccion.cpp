#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

float resolver(float num)
{
    return (pow(num, 2) - num - 12);
}

int imprimir()
{
    for (int i = 0; i < 161; i++)
    {
        cout << "-";
    }
    cout << "\n";
    return 0;
}

int main()
{   

    int interador = 1;
    int sol = 1;
    float margen = 0.00001;
    float a, b, c, ya, yb, yc;

    cout << "Type the value A: ";
    cin >> a;
    cout << "Type the value B: ";
    cin >> b;

    imprimir();
    cout << "| Interdor \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| \n";
    imprimir();

    do
    {
        c = (a + b) / 2;
        ya = resolver(a);
        yb = resolver(b);
        yc = resolver(c);

        cout << "| " << interador << "\t\t| " << fixed << setprecision(8) << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n";
        imprimir();

        if ((ya * yc) < 0)
        {
            b = c;
        }
        else {
            a=c;
        }
        if (a==b){
            sol = 0;
            break;
        }
        
        interador++;
    } while ( abs(yc)>= margen);

    if (sol != 0)
    {
        cout << "The root is :" << c;
        cout << "\n";
    }
    else
    {
        cout << "There is no root in that range. \n";
    }
    return 0;

    system("Color E4");

}