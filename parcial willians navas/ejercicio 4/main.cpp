#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void agregar();

int main (){
    agregar();

    system("pause");
    return 0;
}

void agregar() {
    ofstream archivo;

    archivo.open("C:/Users/HUAWEI/Desktop/parcial.txt",ios::app);

    if (archivo.fail()){
        cout<<"no se pudo abrir el archivo";
        exit(1);
    }

    archivo<<"0909-21-11752";

    archivo.close();