//ejercicio 2
//calcular area y perimetro de un circulo
#include<iostream>
#include<cmath>

using namespace std;

main()
{
 
 float radio,pi=3.14,perimetro,area;
    cout<<"radio del circulo: ";cin>>radio;
    area = pow(radio,2)*pi;
    perimetro = 2*pi*radio;
    cout<<"el area del circulo es: "<<area<<endl;
    cout<<"el perimetro del circulo es: "<<perimetro<<endl;
    return 0;

}

