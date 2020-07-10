#include <iostream>

using namespace std;


const int longCad = 20;
struct costoPorArticulo{
char nombreArticul[longCad + 1];       //estructura 
int cantidad;
float precio;
float costoPorArticulo;
};

void leernombre(costoPorArticulo articulo[],int cantidad)
{
    cout<<"ingrese los datos de los articulos"<<endl;
    for (int i=0 ; i<cantidad; i++)
    {
    	cin.ignore(100, '\n');                                      //funcion para leer el nombre  la cantidad y el precio unitario 
        cout<<"ingrese nombre del articulo"<<endl;                  //de cada artículo e incorporarlos al arreglo.
        cin.getline(articulo[i].nombreArticul, 21 , '\n' );
        cout<<"ingrese cantidad de articulo "<<endl;
        cin>> articulo[i].cantidad;
        cout<<"ingrese el presio unitario"<<endl;
        cin>> articulo[i].precio;
    }
}

void costoporarticulo(costoPorArticulo articulo[],int cantidad)
{
	for (int i=0; i<cantidad; i++)                                              //funcion que calcula el costo por articulo
		articulo[i].costoPorArticulo=articulo[i].precio*articulo[i].cantidad;
}

void mostrardatos(costoPorArticulo articulo[],int cantidad)
{
	for (int i=0; i<cantidad; i++)                                              //funcion que despliega el contenido del arreglo 
	{
		cout<<"nombre del articulo: "<<articulo[i].nombreArticul<<endl;
		cout<<"cantidad de articulos: "<<articulo[i].cantidad<<endl;
		cout<<"precio unitario del articulo: "<<articulo[i].precio<<endl;
		cout<<"precio total: "<<articulo[i].costoPorArticulo<<endl;
		
	}
}

float costototalcompra(costoPorArticulo articulo[],int cantidad)
{
	float total;
	for (int i=0; i<cantidad; i++)                                      //funcion que calcula el costo total de la compra
	{
		total= articulo[i].costoPorArticulo + total;
	}
	return total;
}

int main()
{
    int cantidadarticulos, total;
    
    cout<<"cantidad de articulos"<<endl;
    cin>> cantidadarticulos;
   

    costoPorArticulo articulosguardados[cantidadarticulos];    //arreglo de estructuras
    leernombre(articulosguardados, cantidadarticulos);
    costoporarticulo(articulosguardados, cantidadarticulos);
    mostrardatos(articulosguardados, cantidadarticulos);
    cout<<"PRECIO TOTAL DE LA COMPRA ES DE: "<<costototalcompra(articulosguardados, cantidadarticulos);
    
    return 0;
}
