#include <iostream>
#include "problemas.h"
#include <unordered_map>

using namespace std;

/*Dos números a y b (a! = b) son amigables si la suma de los divisores de a (excluyéndose
el mismo) es igual a b, y viceversa.
Ej. los divisores de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; y suman 284. Los
divisores de 284 son 1, 2, 4, 71 y 142; y suman 220. Entonces 220 y 284 son amigables.
Escribe un programa que reciba un número y halla la suma de todos los números
amigables menores al número ingresado.*/



int sumDivisors(int n) {
    int sum = 1; // Suma inicia en 1 porque 1 es divisor de todos los números
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int ejercicio17(){
    int numero;

        cout << "Ingrese un numero: ";
        cin >> numero;

        int sum = sumDivisors(numero);

        cout << "La suma de los divisores de " << numero << " es: " << sum << endl;
        int sum2= sumDivisors(sum);
        if (sum2==numero){
            cout << "Son numeros amigos " << numero << " y " << sum << endl;
        }
        else {
            cout << "No son numeros amigos " << endl;
        }
        cout << "El resultado de la suma es "<< sum2+sum << endl;
        return 0;
    }
