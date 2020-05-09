//ejercicio 1
//promedio de 3 numeros
#include <iostream>
using namespace std;

int main()

{
    
    int N1, N2, N3, P;
   
    cout << "PRIMER NUMERO" << endl;
    cin >> N1;
    cout << "\n" << endl;
    cout << "SEGUNDO NUMERO" << endl;
    cin >> N2;
    cout << "\n" << endl;
    cout << "TERCER NUMERO" << endl;
    cin >> N3;
    P = (N1 + N2 + N3) / 3;
    cout << "EL PROMEDIO OBTENIDO ES:" << P << endl;
    
	return 0;
    
}
