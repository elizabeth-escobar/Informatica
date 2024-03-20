#include <iostream>
#include "problemas.h"


using namespace std;


/*Elabora un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima,
luego imprime la matriz rotada 90, 180 y 270 grados.*/


const int fila = 5;
const int columna = 5;

// Función para llenar la matriz con los números del 1 al 25
void llenarMatriz(int matriz[][columna]) {
    int contador = 1;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            matriz[i][j] = contador++;
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int matriz[][columna]) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Función para rotar la matriz 90 grados en sentido antihorario
void rotarMatriz90(int matriz[][columna]) {
    int nuevaMatriz[fila][columna]; // Se crea una nueva matriz para almacenar la rotación
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) { //Se retan los elementos de la matriz original en la nueva matriz
            nuevaMatriz[j][fila - i - 1] = matriz[i][j]; //Se invierten las filas y columnas
        }
    }
    // Copiar la matriz rotada a la matriz original
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            matriz[i][j] = nuevaMatriz[i][j];
        }
    }
}

int ejercicio14(){
    int matriz[fila][columna];

        // Llenar la matriz con los números del 1 al 25
        llenarMatriz(matriz);

        // Imprimir la matriz original
        cout << "Matriz original:\n";
        imprimirMatriz(matriz);
        cout << endl;

        // Rotar la matriz 90 grados en sentido antihorario y luego imprimir
        cout << "Matriz rotada 90 grados:\n";
        rotarMatriz90(matriz);
        imprimirMatriz(matriz);
        cout << endl;

        //Rotar la matriz 180 grados
        cout << "Matriz rotada 180 grados:\n";
        rotarMatriz90(matriz);
        rotarMatriz90(matriz);
        imprimirMatriz(matriz);
        cout << endl;

        // Rotar la matriz 270 grados
        cout << "Matriz rotada 270 grados:\n";
        rotarMatriz90(matriz);
        rotarMatriz90(matriz);
        rotarMatriz90(matriz);
        imprimirMatriz(matriz);

        return 0;
 }
