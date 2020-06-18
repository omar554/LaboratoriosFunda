//un dia despues
#include <iostream>
using namespace std;

bool anobi(int ano)
{
    if ((ano%400)==0)
        return true;
    else if ((ano%4)==0 && (ano%100)!=0)   
        return true;
    else 
        return false;
}

int main(){
    int dia,mes,ano;
    bool fechacorrecta= false;
    cout<<"introduzca el dia en digitos: ";
    cin>>dia;
    cout<<"introduzca el mes en digitos: ";
    cin>>mes;
    cout<<"introduzca el a\244o: ";
    cin>>ano;

    if (ano>=1)
    {

        switch (mes)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:

                if (dia>=1 && dia<=31){
                    fechacorrecta=true;
                    dia++;
                    if (dia>31){
                        dia=1; mes++;
                        if (mes>12){
                            mes=1; ano++;
                        }
                    }//hasta aqui todo bien
                }
                break;

            case 4: case 6: case 9: case 11:
                if (dia>=1 && dia<=30)
                {
                    fechacorrecta=true; dia++;
                    if (dia>31){
                        dia=1; mes++;
                    }
                }//todo bien todo correcto
                break;
            case 2:
                if ((anobi(ano))==true && dia>=1 && dia<=29)
                {
                    fechacorrecta=true; dia++;
                    if (dia>29){
                        dia=1; mes++;
                    }
                }
                else if (dia>=1 && dia<=28){
                    fechacorrecta=true;
                    dia++;
                    if (dia>28){
                        dia=1; mes++;
                    }
                }
                break;     
        }
    }
    if (fechacorrecta==true)
        cout<<"la fecha del siguiente dia es: "<<dia<<"/"<<mes<<"/"<<ano;
    else
        cout<<"error de digitacion";
    return 0;
}