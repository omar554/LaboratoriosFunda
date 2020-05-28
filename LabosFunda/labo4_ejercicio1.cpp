//verificar si un numero es divicible entre otro
#include <iostream>
using namespace std;
int main(){
   int num1, num2;
   cout<<"Ingrese 2 numeros"<<endl;
   cin>>num1;
   cin>>num2;
   if(num1 % num2 == 0){
      cout<<"Es divisible"<<endl;
   }
   else{
      cout<<"No es divisible"<<endl;
   }
   return 0;
}