//positivo, negativo, 0
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int num;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    if(num>0){
        cout<<"El numero que ingreso es positivo"<<endl;
    }
    else if(num<0){
        cout<<"El numero que ingreso es negativo"<<endl;
    }
    else if(num ==0){
        cout<<"El numero que ingreso es 0"<<endl;
    }
    else{
        cout<<"El valor ingresado no es valido"<<endl;
    }
    return 0;
}