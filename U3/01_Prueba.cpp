/*
Date: 
Author: 
Email: UP210305@alumnos.upa.edu.mx
Description: 
Last Modification: 
*/

#include <iostream>

using namespace std;

int main(){

    int conjunto[5][5];

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<"Valor: ";
            cin>>conjunto[row][col];
        }
        
    }

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<"\033[1;33m"<<conjunto[row][col]<<"  ";
        }
        cout<<endl;
    }
    return 0;

}