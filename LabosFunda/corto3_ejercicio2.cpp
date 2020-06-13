//El número mágico

#include <iostream>
#include <stdlib.h>             //librerias
#include <time.h>

using namespace std;

int numeroaleatorio()
{
    int numeroaleatorio;
    srand(time(NULL));                      //funcion para el numero aleatorio
    numeroaleatorio= 1+rand()%(101-1);
    return numeroaleatorio;
}

int main()
{
    int numeroram = numeroaleatorio(), posiblenum;
    cout<<"Adivinar numero entre el 1 y 100"<<endl;
    cout<<"Tiene 5 intentos para adivinar el numero misterioso, si quiere terminar el juego presione ctrl + Z + Enter"<<endl;
    for (int i = 5; i >=1; i--)             //ciclo del for
    {
        cout<<"Ingrese un numero:";
        cin>>posiblenum;
        if (!cin>>posiblenum)               //si la salida es igual al numero aleatorio finalizara
        {
            cout<<"Juego finalizado"<<endl;
            cout<<"El numero aleatorio era "<<numeroram;
            break;
        }
        if (posiblenum==numeroram)          //si el numero es igual al aleatorio
        {
            cout<<"Felicidades a adivinado el numero secreto";
            break;
        }
        else if (posiblenum>numeroram && (i-1)!=0)  //si el numero es mayor al numero secreto
            cout<<"El numero ingresado es mayor al numero secreto \nLos intentos restantes son: "<<(i-1)<<endl<<endl;
        else if (posiblenum<numeroram && (i-1)!=0)  //si el numero es menor al numero secreto
            cout<<"El numero ingresado es menor al numero secreto \nLos intento restantes son: "<<(i-1)<<endl<<endl;
        else                                        //cuando te quedes sin intentos
            cout<<"Se ha quedado sin intentos, el numero aleatorio es: "<<numeroram;
    }
    return 0;
}