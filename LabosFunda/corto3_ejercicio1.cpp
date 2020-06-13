//Calculo de salarios

#include <iostream>     //libreria

using namespace std;

float salariostotal(float horastrabajadas, float extras)
{
    horastrabajadas*=1.75;
    extras*=2.50;                                   //funcion para calcular el salariototal
    return horastrabajadas+extras;
}
float salariosreal(float total)
{
    double isss= 0.04, afp=0.0625, renta=0.1;
    isss*=total;
    afp*=total;
    if (total>500)
    {                                               //funcion para calcular los descuentos que se aplicaran al 
        renta*=total;                               //salariototal para poder llegar al salarioreal
        total-=renta;
    }
    total-=afp;
    total-=isss;
    return total;
}
main()
{
    float horat, horaex, salariototal, salarioreal; //variables
    int opcion;

    while (opcion!=2)
    {
        cout<<"1. ingrese empleado.  \n2. terminar";
        cout<<"\ningrese una opcion 1-2:";              //para que seleccione una opcion
        cin>>opcion;

        switch (opcion)
        {
            case 1:
            cout<<"ingrese las horas trabajadas: ";     //para ingresar las horas trabajadas
            cin>>horat;
            cout<<"ingrese las horas extras: ";         //para ingresar las horas extra           
            cin>>horaex;
            salariototal=salariostotal(horat,horaex);
            salarioreal=salariosreal(salariototal);
            cout<<"el salario total del empleado es: $"<<salariototal<<endl;        //muestra de los resultados
            cout<<"el salario real del empleado es: $"<<salarioreal<<endl;
            break;

        default:
            break;
        }
    }
    return 0;
}