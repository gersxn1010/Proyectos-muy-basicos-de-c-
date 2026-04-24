#include <iostream>
#include <conio.h>   
using namespace std;

//variables globales
int num1, num2, resultado, opcion;
 
//declarar funciones
void sumar();
void menu();
void restar();
void multiplicar();

//funcion principal
int main() {
    do {
        menu();
        switch (opcion) {
            case 1:
                system("cls");
                sumar();
                getch();
                break;
            case 2:
                system("cls");
                restar();
                getch();
                break;
            case 3:
                system("cls");
                multiplicar();
                getch();
                break;
            case 0:
                system("cls");
                cout << "Gracias por usar la calculadora, hasta luego!" << endl;
                getch();
                break;
            default:
            system("cls");
            cout << "Opcion no valida, por favor intente de nuevo" << endl;
            cout << "Presione cualquier tecla para continuar..." << endl;
            getch();
            break;
        }

    } while (opcion != 0);
    
    
    
    return 0;
}//fin del main

//funcion para sumar dos numeros
void sumar(){
    system("cls");
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    int resultado = num1 + num2; 
    cout << "El resultado de la suma es: " << resultado << endl;

}
//funcion para restar
void restar(){
    system("cls");
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    int resultado = num1 - num2; 
    cout << "El resultado de la resta es: " << resultado << endl;

}
//funcion para multiplicar
void multiplicar(){
    system("cls");
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    int resultado = num1 * num2; 
    cout << "El resultado de la multiplicacion es: " << resultado << endl;

}
//funcion para mostrar el menu
void menu(){
    system("cls");
    cout << "Bienvenido a la calculadora" << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "0. Salir" << endl; 
    cout << "Ingrese su opcion: ";
    cin >> opcion;
}