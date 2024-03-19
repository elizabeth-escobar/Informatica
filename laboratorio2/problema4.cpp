#include <iostream>
#include "problemas.h"

#include <string>

using namespace std;

/*Haz una función que reciba una cadena de caracteres numéricos, la convierta a un
número entero y retorne dicho número. Escribe un programa de prueba.*/


int cadenaNumero(const string& str) {
    int result = 0;
    for (char c : str) {
        if (isdigit(c)) { // Verifica si el carácter es un dígito
                result = result * 10 + (c - '0'); // Convierte el carácter a un dígito numérico y lo agrega al resultado
      } else {
                return 0;
            }
        }
        return result;
    }

int ejercicio4(){
     string input;
     cout << "Ingresa una cadena de caracteres numericos: ";
     getline(cin, input);
        // Llama a la función stringToInt para convertir la cadena en un entero
        int number = cadenaNumero(input);

        cout << "El numero entero es: " << number << endl;

        return 0;
 }
