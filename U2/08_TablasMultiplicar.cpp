#include <iostream>

using namespace std;

int main(){

    int numero;
    int tabla;

    cout<<"What number do you want your table?"<<endl;
    cin>>tabla;

    cout<<"Until what number do you want your table?"<<endl;
    cin>>numero;
    cout<<"\n";
    for (int i = 0; i <= numero; i++)
    {
        
        cout<<"|";
        for (int j = 0; j <= 38; j++)
        {
            cout<<"-";
            

        }
        cout<<"|\t";

        cout<<"\n";

        cout<<"|\t"<<i<<"    X    "<<tabla<<"    =    "<<tabla*i<<"    \t|"<<endl;

        
    }
    
}