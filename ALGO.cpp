#include <iostream>
#include "funcion.h"

using namespace std;

//variables globales
int count = 10, opcion;


int main() {
    
cout << "==============BIENVENIDO================" << endl;


    do{
        system("color 0a");
        system("cls");
        menu();
        casos();
    
    } while (opcion != 11);



    
    return 0;
} 