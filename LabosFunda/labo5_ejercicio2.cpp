//hora un segundo despues
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int segundodespues (){
    int horas;
    int minutos;
    int segundos;
    char caracter;

     segundos = segundos + 1;
    if (segundos >= 60 ){
        segundos = 0;
        minutos = minutos + 1;
    if (minutos >= 60 ){
        minutos = 0;
        horas = horas + 1;
    }else
    {
        cout<<"error hora incorrecta"<<endl;
    }
        return 0;
    }
}
int main()
{
    int horas;
    int minutos;
    int segundos;
    char caracter;

    cout<<"introduzca horas: "<<endl;
    cin>> horas, caracter;
    cout<<" introduzca minutos: "<<endl;
    cin>> minutos, caracter;
    cout<<"introduzca segundos: "<<endl;
    cin>> segundos;
    
    segundos = segundos +1;
    if (segundos >= 60 ){
        segundos = 0;
        minutos = minutos +1;
    if (minutos >= 60){
        minutos = 0;
        horas = horas + 1;
    }else
    {
        cout<<"error: hora incorrecta "<<endl;
    }
    
    }
    cout<<"un segndo despues la hora es: "<< horas << ":" << minutos << ":" << segundos << endl;
}