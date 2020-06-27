#include "iostream"

using namespace std;

char codificarletra(char caracter){
   switch (caracter)
   {
      case 'm': caracter='0'; break;
      case 'u': caracter='1'; break;
      case 'r': caracter='2'; break;
      case 'c': caracter='3'; break;
      case 'i': caracter='4'; break;
      case 'e': caracter='5'; break;
      case 'l': caracter='6'; break;
      case 'a': caracter='7'; break;
      case 'g': caracter='8'; break;
      case 'o': caracter='9'; break;
   }
   return caracter;
}

int main()
{
   int longitud;
   string arreglo;
   cout<<"ingrese palabra: ";
   getline(cin,arreglo);
   longitud=arreglo.length();
   for (int i = 0; i < longitud; i++)
   {
      cout<<(codificarletra(arreglo[i]));
   }
   return 0;
}