#include <iostream>
#include <string>
#include "problemas.h"
#include <cmath>


using namespace std;

/*Escribe un programa que reciba un número n y lea una cadena de caracteres numéricos,
el programa debe separar la cadena de caracteres en números de n cifras, sumarlos e
imprimir el resultado. En caso de no poderse dividir exactamente en números de n cifras
se colocan ceros a la izquierda del primer número.*/

//Si n=3 y se lee el arreglo 87512395 la suma sería 087+512+395=994.

// Función para sumar los números de n cifras en la cadena
int sumarNumerosNCifras(int n, const string& cadena) {
    int suma = 0;
    string numero;

    // Calculamos cuántos dígitos necesitamos agregar al primer número
    int ceros_necesarios = (n - cadena.size() % n) % n; // Se calculan los dígitos necesarios para agregar al primer número

    for (int i = 0; i < ceros_necesarios; ++i) { //Se agregan los ceros al inicio del número
        numero += '0';
    }

    for (char c : cadena) { //Se itera sobre la cadena para ir formando los numeros de n cifras
        numero += c;
        if (numero.size() == static_cast<std::string::size_type>(n)) {
            suma += stoi(numero); // Se van sumando los números ya formados en n cifras
            numero = ""; // Reiniciamos el número para formar el siguiente
        }
    }

    return suma;
}


int ejercicio9(){
    int n;
       string cadena;

       cout << "Ingrese el valor de n: ";
       cin >> n;

       cout << "Ingrese una cadena de caracteres numericos: ";
       cin >> cadena;

       int resultado = sumarNumerosNCifras(n, cadena);

       cout << "Original: " << cadena << ". Suma: " << resultado << "." << endl;

       return 0;
   }
