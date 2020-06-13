//Año bisiesto

#include <iostream>     //libreria
using namespace std;

bool anobi(int ano)
{
    if ((ano%400)==0)
        return true;
    else if ((ano%4)==0 && (ano%100)!=0)    //funcion para ver determinar si un año es bisiesto o no
        return true;
    else 
        return false;
}

int main()
{
    int ano;        //variable
    cout<<"ingrese el a\244o: "; //para ingresar el año desado
    cin>>ano;

    if ((anobi(ano))==true) 
        cout<<"El a\244o ingresado es bisiesto"; //para cuando un año es bisiesto
    else 
        cout<<"El a\244o ingresado no es bisiesto"; //para cuando un año no es bisiesto
    
    return 0;
}