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

int sumarNumerosNCifras(int n, const string& cadena) {
    int suma = 0;
    int cantidad_numeros = ceil(static_cast<double>(cadena.size()) / n);

    string numero;

    for (int i = 0; i < cantidad_numeros; ++i) {
        for (int j = 0; j < n; ++j) {
            if (static_cast<int>(i * n + j) < static_cast<int>(cadena.size())) { //convierte i * n + j y cadena.size() a int antes de realizar la comparación,para eliminar diferencia de signos
            } else {
                numero += '0'; // Agregar ceros a la izquierda si es necesario
            }
        }
        suma += stoi(numero);
        numero = ""; // Reiniciamos el número para formar el siguiente
    }

    return suma;
}

int ejercicio9(){
    int n;
        string cadena;

        cout << "Ingrese el valor de n: ";
        cin >> n;

        cin.ignore(); // Limpiamos el buffer del teclado antes de leer la cadena
        cout << "Ingrese una cadena de caracteres numericos: ";
        getline(cin, cadena);

        int resultado = sumarNumerosNCifras(n, cadena);

        cout << "La suma de los numeros de " << n << " cifras en la cadena es: " << resultado << endl;

        return 0;

 }

