#include <iostream>
#include <string>
#include "problemas.h"
#include <unordered_set>  //representa un conjunto no ordenado de elementos únicos


using namespace std;

/*Escribe un programa que reciba una cadena de caracteres y elimina los caracteres
repetidos.*/


void eliminarCaracteresRepetidos(string& cadena) {
    unordered_set<char> caracteres_vistos; //cada elemento en el conjunto aparece solo una vez
    string resultado;

    for (char c : cadena) {
        if (caracteres_vistos.find(c) == caracteres_vistos.end()) {
            caracteres_vistos.insert(c);// Si el carácter no está en el conjunto de caracteres vistos, lo agrega al resultado
            resultado += c;
        }
    }

    cadena = resultado; // Actualiza la cadena original con el resultado sin caracteres repetidos
}



int ejercicio7(){
    string cadena;
    cout << "Ingresa una cadena de caracteres: ";
    getline(cin, cadena);

    eliminarCaracteresRepetidos(cadena);

    //Si se recibe bananas debe mostrar bans.

    cout << "Sin repetidos: " << cadena << endl;

    return 0;
}
