#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int Validar()
{
    char str[256];
    fflush(stdin);
    fgets(str,256,stdin);
    if (isdigit(str[0]))
    {
        int i=atoi(str);
        return i;
    }
    cout<<"Ingrese digitos";
    Validar();
}

int ValidarEquipo()
{
    int e=Validar();
    if (e>0 and e<=6)
        return e;
    cout<<"Ingrese un numero entre el 1 y 6.";
    ValidarEquipo();
}

int main()
{
    int bat, vs;
    char usuario[30], oponente[30];
    cout<<"Ingrese cantidad de batallas a realizar: "<<endl;
    bat=Validar();
    cout<<"Cantidad de Pokemon por equipo: ";
    vs=ValidarEquipo();
    while ((vs<1) and (vs>6));
    cout<<"Ingrese nombre usuario: "<<endl;
    fflush(stdin);
    gets(usuario);
    cout<<"Ingrese nombre Oponente: "<<endl;
    fflush(stdin);
    gets(oponente);
    return 0;
}
