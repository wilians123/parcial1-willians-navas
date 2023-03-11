#include <iostream>

//PROGRAMA QUE MUESTRA EL DIA DE LA SEMANA SELECCIONADO UTILIZANDO LA ESTRUCTURA DE CONTROL SWITCH

using namespace std;


int main (){

    int  opcion;

    cout<<"1) Lunes"<<endl;
    cout<<"2) Martes"<<endl;
    cout<<"3) Miercoles"<<endl;
    cout<<"4) Jueves"<<endl;
    cout<<"5) Viernes"<<endl;
    cout<<"6) Sabado"<<endl;
    cout<<"7) Domingo"<<endl;

    cout<<endl<<"Escriba el numero del dia que desea ver:";
    cin>>opcion;

    switch (opcion){
        case 1: cout<<"Lunes es un dia laboral"<<endl;

            break;
        case 2: cout<<"Martes es un dia laboral"<<endl;
            break;
        case 3: cout<<"Miercoles es un dia laboral"<<endl;
            break;
        case 4: cout<<"Jueves es un dia laboral"<<endl;
            break;
        case 5: cout<<"Viernes es un dia laboral"<<endl;
            break;
        case 6: cout<<"Sabado no es un dia laboral"<<endl;
            break;
        case 7: cout<<"Domingo no es un dia laboral"<<endl;
            break;
        default:
            break;
    }

    system("pause");
    return 0;
}