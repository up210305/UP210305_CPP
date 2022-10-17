#include <iostream>
#include <cmath>

using namespace std;

float resolverEcuacion(float valor){
    return pow(valor, 3) + 4 * (pow(valor, 2)) - 10;
}

int main(){
    float a=8;

    float ya=resolverEcuacion(7);
    cout<<ya<<endl;

    return 0;
}