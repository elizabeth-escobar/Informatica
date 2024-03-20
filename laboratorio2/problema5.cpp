#include <iostream>
#include <string>
#include "problemas.h"

using namespace std;

/*Haz una función que reciba un número entero (int) y lo convierta a cadena de caracteres.
Usa parámetros por referencia para retornar la cadena. Escribe un programa de prueba.*/

void enteroCadena(int numero, string& resultado) {
    resultado = to_string(numero); //to_string convierte el número entero en una cadena
}


int ejercicio5(){
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    string strNumero;
    enteroCadena(numero, strNumero);

    cout << "El numero en forma de cadena de caracteres es: " << strNumero << endl;

    return 0;
}
