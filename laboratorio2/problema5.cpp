#include <iostream>
#include <string>
#include "problemas.h"

using namespace std;

/*Haz una función que reciba un número entero (int) y lo convierta a cadena de caracteres.
Usa parámetros por referencia para retornar la cadena. Escribe un programa de prueba.*/

void intToString(int number, string& result) {
    result = to_string(number); //to_string convierte el número entero en una cadena
}


int ejercicio5(){
    int numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;

    string strNumber;
    intToString(numero, strNumber);

    cout << "El numero en forma de cadena de caracteres es: " << strNumber << endl;

    return 0;
}
