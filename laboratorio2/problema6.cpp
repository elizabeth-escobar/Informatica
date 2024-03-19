#include <iostream>
#include <string>
#include "problemas.h"

using namespace std;


/*Escribe un programa que reciba una cadena de caracteres y cambie las letras minúsculas
por mayúsculas, los demás caracteres no deben ser alterados.*/

void cambiarAMayuscula(string& cadena) {
    for (char& c : cadena) {
        if (c >= 'a' && c <= 'z') {
            c = toupper(c); //convierte a mayúscula si es letra minúscula
        }
    }
}




int ejercicio6(){
    string cadena;
        cout << "Ingresa una cadena de caracteres: ";
        getline(cin, cadena);

        cambiarAMayuscula(cadena);

        cout << "La cadena con letras mayusculas te queda: " << cadena << endl;

        return 0;
}
