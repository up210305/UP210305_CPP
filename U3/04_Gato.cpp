#include <iostream>

using namespace std;

void Tablero(int);
int TurnoJugador = 1;
char AreaJuego[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool ComprobarJugadaOcupada(int Jugada);
void ModoDeJuego(int);


int main(){
    int tablero,jugador1,jugador2,computadora,jugada;
    bool casillaocupada = true;
    Tablero(tablero);
    jugada = SeleccionarJugada();
    casillaocupada = ComprobarJugadaOcupada(jugada);
    if (casillaocupada == true)
    {
        do
        {
            cout << "Casilla invalida, elija otra\n";
            jugada = SeleccionarJugada();
        } while (casillaocupada == true);
    }
    else if (casillaocupada == false)
    {
        ReemplazarCasilla(jugada);
        system ("clear");
        Tablero(tablero);
        TurnoJugador++;
    }
    
    return 0;
}



int SeleccionarJugada(){
    int Jugada;
    do
    {
    cout << "Dame tu jugada: \n";
    cin >> Jugada;
    } while (Jugada < 0 && Jugada >= 9);
    
    return Jugada;
}



bool ComprobarJugadaOcupada(int Jugada){
int row = Jugada%3, col = Jugada-1; 
        if (AreaJuego[row][col]=='X' || AreaJuego[row][col]=='O')
        {
            return true;//Significa que la casilla esta ocupada
        }
        else
        {
            return false;
        }
        
    }

void ReemplazarCasilla(int Jugada){
    if (TurnoJugador%2==0){
    int row = Jugada%3, col = Jugada - 1;
    char AreaJuego[row][col]={'X'};
    }
    else
    {
    int row = Jugada%3, col = Jugada - 1;
    char AreaJuego[row][col]={'O'};
    }
    
}

void Tablero(int){
    int x=0, y=0;
    for (int fila = 0; fila < 5; fila++)
    {
            for (int columna = 0; columna < 9; columna++)
            {
                if (fila== 1 || fila == 3){
                    cout << "-";
                }else{
                    cout << " " << AreaJuego[x][y] << " |";
                    y++;
                }
                if (columna==2 || columna == 5)
                {
                    cout<<"|";
                }
                
            }
        cout << "\n";
        x++;
        y = 0;
    }
}