#include <stdio.h>
#include <windows.h> //Tuve que usar esta libreria con CodeBlocks
 
int op=0, gana=0, emp=1, pla1=0, pla2=0, pjug=1, repe1;
char n2[2];
char n[9];          ///     TABLERO
                    /// ================
                    /// |n[0]|n[1]|n[2]|
                    /// ================
                    /// |n[3]|n[4]|n[5]|
                    /// ================
                    /// |n[6]|n[7]|n[8]|
                    /// ================
 
void tablero()
{
    gotoxy(25,1); printf(" ***EL GATO***");
    gotoxy(15,2); printf("UTILIZA EL TELCADO NUMERICO PARA JUGAR");
    gotoxy(15,5); printf("===== \n");
    gotoxy(15,6); printf("%c|%c|%c \n",n[6], n[7], n[8]);
    gotoxy(15,7); printf("===== \n");
    gotoxy(15,8); printf("%c|%c|%c \n",n[3], n[4], n[5]);
    gotoxy(15,9); printf("===== \n");
    gotoxy(15,10); printf("%c|%c|%c \n",n[0], n[1], n[2]);
    gotoxy(15,11); printf("===== \n");
    gotoxy(30,5); printf("        GANADAS  ");
    gotoxy(30,6); printf("Jugador 1    Jugador 2");
    gotoxy(30,7); printf("   %d            %d ", pla1, pla2);
}
 
void valores()
{
    gana=0; emp=0; pjug=1;
    int i, j;
    for (i=0; i<=9; i++)
        n[i]=' ';
}
 
void casillas()
{
    char oc;
    if (pjug == 1)
        oc='X';
    else
        oc='O';
    switch (op) {
        case 1 : if (n[0] != ' ') { repe1=1; break; } else {n[0]=oc; emp++; break;}
        case 2 : if (n[1] != ' ') { repe1=1; break; } else {n[1]=oc; emp++; break;}
        case 3 : if (n[2] != ' ') { repe1=1; break; } else {n[2]=oc; emp++; break;}
        case 4 : if (n[3] != ' ') { repe1=1; break; } else {n[3]=oc; emp++; break;}
        case 5 : if (n[4] != ' ') { repe1=1; break; } else {n[4]=oc; emp++; break;}
        case 6 : if (n[5] != ' ') { repe1=1; break; } else {n[5]=oc; emp++; break;}
        case 7 : if (n[6] != ' ') { repe1=1; break; } else {n[6]=oc; emp++; break;}
        case 8 : if (n[7] != ' ') { repe1=1; break; } else {n[7]=oc; emp++; break;}
        case 9 : if (n[8] != ' ') { repe1=1; break; } else {n[8]=oc; emp++; break;} }
}
 
void ganador()
{
    n2[0]='X'; n2[1]='O';
    int i;
    if (emp <= 9) {
        for (i=0; i<2; i++) {
        if (n[0]==n2[i] && n[3]==n2[i] && n[6]==n2[i])
            gana=i+1;
        if (n[1]==n2[i] && n[4]==n2[i] && n[7]==n2[i])
            gana=i+1;
        if (n[2]==n2[i] && n[5]==n2[i] && n[8]==n2[i])
            gana=i+1;
        if (n[6]==n2[i] && n[7]==n2[i] && n[8]==n2[i])
            gana=i+1;
        if (n[3]==n2[i] && n[4]==n2[i] && n[5]==n2[i])
            gana=i+1;
        if (n[0]==n2[i] && n[1]==n2[i] && n[2]==n2[i])
            gana=i+1;
        if (n[6]==n2[i] && n[4]==n2[i] && n[2]==n2[i])
            gana=i+1;
        if (n[0]==n2[i] && n[4]==n2[i] && n[8]==n2[i])
            gana=i+1; }
    }
    else
        gana=3;
}
 
void jug1()
{
    gotoxy(1,14); printf("Jugador 1 - Introduce el numero: ");
    scanf("%d", &op);
    while (op>9 || op<1) {
        gotoxy(1,14); printf("Opcion NO VALIDA, introduce una correcta: ");
        scanf("%d", &op); }
    casillas();
    if (repe1 == 1) {
        gotoxy(1,13);
        printf("Casilla ya elegida! ");
        repe1=0;
        jug1();}
    clrscr();
    ganador();
    pjug=2;
}
 
void jug2()
{
    gotoxy(1,14); printf("Jugador 2 - Introduce el numero: ");
    scanf("%d", &op);
    while (op>9 || op<1) {
        gotoxy(1,14); printf("Opcion NO VALIDA, introduce una correcta: ");
        scanf("%d", &op); }
    casillas();
    if (repe1 == 1) {
        gotoxy(1,13);
        printf("Casilla ya elegida! ");
        repe1=0;
        jug1();}
    clrscr();
    ganador();
    pjug=1;
}
 
int main()
{
    char cp;
    do {
    clrscr();
    valores();
    while (gana == 0)
    {
        tablero();
        switch(pjug)
        {
            case 1 : jug1(); break;
            case 2 : jug2(); break;
        }
    }
    switch(gana) {
        case 1 : pla1++; gotoxy(1,13); printf("Gana el jugador 1."); break;
        case 2 : pla2++; gotoxy(1,13); printf("Gana el jugador 2."); break;
        case 3 : gotoxy(1,13); printf("Es un empate."); break; }
    tablero();
    gotoxy(1, 15); printf("Deseas otro juego (S/N): ");
    scanf(" %c", &cp);
    } while (cp == 'S');
    return 0;
}
 