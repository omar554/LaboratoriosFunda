
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


void llenarmatriz(float matriz[][5], int cantidad){
	float nota;
	for(int i = 0; i < cantidad; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<<"ingrese la nota "<<(j+1)<<" del alumno "<<(i+1)<<": ";
			cin>>nota;
			matriz[i][j]=nota;
		}
	}
}

void notafinal(float matriz[][5], int cantidad){
	float final;
	for (int i = 0; i < cantidad; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			final+=((matriz[i][j])*0.2);
		}

		cout<<"la nota final del alumno "<<(i+1)<<"es: "<<final<<endl;
		if (final>=6)
			cout<<"el estudiante aprobo "<<endl<<endl;
		else 
			cout<<"el estudiante reprobo"<<endl<<endl;
		final=0;
	}
}

int main(){
	int nestudiantes=0;
	cout<<"ingrese el numero de estudiantes: ";
	cin>>nestudiantes;
	cout<<"\n";
	float notas[nestudiantes][5];
	llenarmatriz(notas,nestudiantes);
	notafinal(notas,nestudiantes);
	return 0;
}


	
