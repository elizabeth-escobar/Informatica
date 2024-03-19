#include <iostream>
#include <string>
#include "problemas.h"


using namespace std;


/*Escribe un programa que reciba una cadena de caracteres y separe los números del resto
de caracteres, generando una cadena que no tiene números y otra con los números que
había en la cadena original.*/



void separarNumerosDeCaracteres(const string& cadena, string& caracteres, string& numeros) {
    caracteres = "";
    numeros = "";

    for (char c : cadena) {
        if (isdigit(c)) {
            // Si el carácter es un dígito, lo agrega a la cadena de números
            numeros += c;
        } else {
            // Si el carácter no es un dígito, lo agrega a la cadena de caracteres
            caracteres += c;
        }
    }
}

int ejercicio8(){
    string cadena;
       cout << "Ingresa una cadena de caracteres: ";
       getline(cin, cadena);

       string caracteres, numeros;
       separarNumerosDeCaracteres(cadena, caracteres, numeros);

       cout << "Texto: " << caracteres << endl;
       cout << "Numero: " << numeros << endl;

       return 0;
 }
