#include <iostream>

using namespace std;


/*Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de
los números en cada columna, cada fila y cada diagonal principal tienen como resultado
la misma constante. Escribe un programa que permita al usuario ingresar una matriz
cuadrada, imprime la matriz y verifica si la matriz es un cuadrado mágico.*/


// Función para verificar si una matriz es un cuadrado mágico
bool esCuadradoMagico(int matriz[][10], int n) {
    int sumaBase = 0;
    for (int j = 0; j < n; j++) {
        sumaBase += matriz[0][j];// Se calcula la suma de la primera fila ya que las demás filas y columnas deben ser iguales a ese valor
    }

    // Verificar la suma de cada fila y columna
    for (int i = 0; i < n; i++) {
        int sumaFila = 0;
        int sumaColumna = 0;
        for (int j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];// Calcula la suma de la fila y la columna a medida que se hace el recorrido por la matriz
        }
        if (sumaFila != sumaBase || sumaColumna != sumaBase) { //Si alguna suma no coincide con la suma de base, la matriz no es un cuadrado mágico
            return false;
        }
    }

    // Verifica la suma de las diagonales principales
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaBase) {
        return false;
    }

    // Verifica la suma de la diagonal secundaria
    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonalSecundaria += matriz[i][n - i - 1];
    }
    if (sumaDiagonalSecundaria != sumaBase) {
        return false;
    }

    return true;
}



// Función para imprimir una matriz
void imprimirMatriz(int matriz[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}


int ejercicio12(){
    int n;
       cout << "Ingrese el tamanio de la matriz cuadrada (maximo de tamanio 10): ";
       cin >> n;

       if (n <= 0 || n > 10) {
           cout << "Tamanio de matriz no valido." << endl; //Si la matriz no es nxn significa que no es cuadrada
           return 1;
       }

       // Crear una matriz cuadrada de tamaño n x n
       int matriz[10][10]; //Prueba

       cout << "Ingrese los elementos de la matriz cuadrada:\n"; //Se ingresan los valores de la matriz
       for (int i = 0; i < n; i++) {
           for (int j = 0; j < n; j++) {
               cin >> matriz[i][j];
           }
       }

       cout << "La matriz ingresada es:\n";
       imprimirMatriz(matriz, n);  //muestra la matriz que ha sido ingresada

       // Verificar si la matriz es un cuadrado mágico
       if (esCuadradoMagico(matriz, n)) {
           cout << "La matriz ingresada es un cuadrado magico.\n";
       } else {
           cout << "La matriz ingresada no es un cuadrado magico.\n";
       }

       return 0;
   }
