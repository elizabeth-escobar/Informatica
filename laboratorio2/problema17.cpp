#include <iostream>
#include "problemas.h"

using namespace std;

/*Dos números a y b (a! = b) son amigables si la suma de los divisores de a (excluyéndose
el mismo) es igual a b, y viceversa.
Ej. los divisores de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; y suman 284. Los
divisores de 284 son 1, 2, 4, 71 y 142; y suman 220. Entonces 220 y 284 son amigables.
Escribe un programa que reciba un número y halla la suma de todos los números
amigables menores al número ingresado.*/



int sumaDivisores(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma + num;


int ejercicio17(){

    }
