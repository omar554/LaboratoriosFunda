//Año bisiesto

#include <iostream>     
using namespace std;

bool anobi(int ano)
{
    if ((ano%400)==0)
        return true;
    else if ((ano%4)==0 && (ano%100)!=0)   
        return true;
    else 
        return false;
}

int main()
{
    int ano;        
    cout<<"ingrese el a\244o: "; 
    cin>>ano;

    if ((anobi(ano))==true) 
        cout<<"El a\244o ingresado es bisiesto"; 
    else 
        cout<<"El a\244o ingresado no es bisiesto"; 
    
    return 0;
}