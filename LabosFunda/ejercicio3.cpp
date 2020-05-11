//ejercicio 3
//calcular formula cuadratica
#include<stdio.h>
#include<math.h>
#include<iostream>
float D_radical ;
    float ecuacion (float a, float b, float c)
    {
	D_radical=((b*b)-(4*a*c));
	if(D_radical<=0)return 0; 
	else return D_radical;
    }
 
using namespace std;
 main(){
float a=0, b=0, c=0, n1,n2,n3,solucion1,solucion2;
int rep,r=1;
cout<<" \t \t2 \n";
cout<<"Ecuacion tipo ax+bx+c=0 \n\n";
while (r==1){
cout<<"Valor de a : ";
cin>>a;
cout<<"Valor de b : ";
cin>>b;
cout<<"Valor de c : ";
cin>>c;
 if(ecuacion(a, b, c)==0)
  cout<<"La ecuacion no tiene solucion. ";
 if(ecuacion(a,b,c)!=0)
 {
	n1=(-b+sqrt(D_radical));
	n2=(-b-sqrt(D_radical));
	n3=2*a;
	solucion1=n1/n3;
	solucion2=n2/n3;
	cout<<"\nLa primera solucion es : X1=";cout<<solucion1;
	cout<<"\nLa segunda solucion es : X2=";cout<<solucion2;
		}
	cout<<"\n\nVolver a calcular otros 2 numero? si=1, no=2: ";
	switch(rep){
	    case 1: r==1;
	    break;
	    case 2: return 0;
	    break;
	    default:
		return 0;
			}
			cout<<"  \n";
		}
 
}
