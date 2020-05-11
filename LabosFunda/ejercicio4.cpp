//ejercicio 4
#include <iostream>

using namespace std;

int main ()
{
	string producto;
	float cantidad, precio, total;
	cout<<"ingrese el nombre del producto: "<<endl;
	cin>> producto;
	cout<<"ingrese el precio del producto: "<<endl;
	cin >> precio;
	cout<<"ingrese la cantidad comprada: "<<endl;
	cin>> cantidad;
	total= cantidad * precio;
	cout<<"el producto comprado es "<<producto<<", su precio c/u es $"<<precio<<" la cantidad comprada es de "<<cantidad<<" el total es de "<<total;
	
}




	
