#include <iostream>
#include <conio.h>
using namespace std;


//clases
class SensorTemperatura {

private:

float temperaturaCelcius;
float temperaturaFahrenheit;

public:
//costructor vacio 
SensorTemperatura(){
temperaturaCelcius = 0.0;
temperaturaFahrenheit = 0.0;

}
//constrctor con parametros
SensorTemperatura(float _temperaturaCelcius, float _temperaturaFahrenheit){

    temperaturaCelcius = _temperaturaCelcius;
    temperaturaFahrenheit = _temperaturaFahrenheit;


}

////getters

float getTemperaturaCelcius(){

    return temperaturaCelcius;
}

float getTemperaturaFahrenheit(){

    return temperaturaFahrenheit;
}


//setters sirve para modificarlo desde el main

void setTemperaturaCelcius(float _temperaturaCelcius){
    temperaturaCelcius = _temperaturaCelcius;
}

void setTemperaturaFahrenheit(float _temperaturaFahrenheit){
    temperaturaFahrenheit = _temperaturaFahrenheit;
}

//metodo mostrar en pantalla



//metodo para convertir a fahrenheit

//Para convertir grados Celsius a Fahrenheit, 
// multiplica la temperatura en °C por 1.8 y 
// luego suma 32. La fórmula es: °F = (°C × 1.8) + 32
void convertirAFahrenheit(float temperaturaCelcius){
    float fahrenheit;
    fahrenheit = (temperaturaCelcius * 1.8) + 32;
    cout << "La temperatura en Fahrenheit es: " << fahrenheit << " F" << endl;
}


void preguntarTemperatura(){
    float temp;
        do{
          cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temp; 
     if (temp > -30 && temp < 60 ) {
            cout << "Temperatura valida." << endl;
        } else {
            cout << "Temperatura no valida. Por favor ingrese una temperatura valida" << endl;
        }
        } while (temp < -30 && temp >  60);
        
    setTemperaturaCelcius(temp);
}
};//fin de la clase 







//variables globales

//main
int main(){

SensorTemperatura sensor;
sensor.preguntarTemperatura();
sensor.convertirAFahrenheit(sensor.getTemperaturaCelcius());

    return 0;
}
//fin del main