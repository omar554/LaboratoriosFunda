
#include <iostream>

using namespace std;

float estatura[25];
void promedioaltura(float arreglo[],float*total)
{
	int i=0;
	
	for(i = 0; i< 25; i++){
		*total +=arreglo[i];
	}
		*total= *total/25;
}
float estarurasab(float arreglo[],int *sobre,int *abajo,float prom){
	for(int i=0;i<25;i++){
		if(arreglo[i]>prom)
			*sobre+=1;
		else
			*abajo+=1;
	}
	return 0;
}

int main()
{
	float promedio;
	float Estatura;
	int arribamedia=0;
	int abajomedia=0;
	
	cout<<"ingrese las 25 alturas: "<<endl;
	
	for(int i=0; i<25;i++){
		cout<<"ingrese la estatura del alumno "<<(i+1)<<" en cm:";
		cin>>Estatura;
		estatura[i]=Estatura;
	}
	promedioaltura(estatura,&promedio);
	cout<<"el promedio de las estaturas de los alumnos es : "<<promedio<<endl;

	estarurasab(estatura,&arribamedia,&abajomedia,promedio);
	cout<<"hay "<<arribamedia<<" estatura arriba de la media "<<endl;
	cout<<"hay "<<abajomedia<<" estatura abajo de la media"<<endl;

	return 0;
}
