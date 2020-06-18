//mcd
#include <iostream>

using namespace std;

int mcd(int num1,int num2)
{
    int resultado=1;
    for(int i=1;i<=num1;i++)
    {
        if ((num1%i==0)&&(num2%i==0))
        {
            resultado=i;
        }
    }
        return resultado;
}
int main()
{
    int x,y;
    cout<<"Ingrese el primer numero:\n";
    cin>> x;
    cout<<"Ingrese el segundo numero:\n";
    cin>> y;
    int resultado=mcd(x,y);
    cout<<"El maximo comun divisor de "<<x<<" y "<<y<<" es "<<resultado<<endl;
    return 0;
}