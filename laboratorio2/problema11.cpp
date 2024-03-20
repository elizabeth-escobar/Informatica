#include <iostream>
#include "problemas.h"
#include <iomanip> //manipular la forma en que se muestran los datos, como establecer el ancho del campo de salida, el número de decimales mostrados

/*Escribe un programa que permita manejar las reservas de asientos en una sala de cine,
estos están organizados en 15 filas con 20 (asientos) cada una. El programa debe mostrar
una representación de la sala, que indique qué asientos están disponibles y cuales se
encuentran reservados. Además, debe permitir realizar reservas o cancelaciones al
ingresar la fila (letras A-O) y el número del asiento (números 1-20).*/

using namespace std;



class SalaCine {
private:
    bool asientos[15][20]; // 15 filas con 20 acientos

public:
    // Constructor
    SalaCine() {
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 20; ++j) {
                asientos[i][j] = true; // Inicializar todos los asientos como disponibles (true)
            }
        }
    }

    // representación de la sala
    void mostrarSala() {
        char fila = 'A';
        cout << "  ";
        for (int i = 1; i <= 20; ++i) {
            cout << setw(3) << i;
        }
        cout << endl;
        for (int i = 0; i < 15; ++i) {
            cout << fila++ << " ";
            for (int j = 0; j < 20; ++j) {
                if (asientos[i][j]) { //setw(int n): Se utiliza para establecer el ancho del campo de salida en n caracteres
                    cout << setw(3) << "O"; //permite que los valores asignados salgan alineados para la matriz
                } else {
                    cout << setw(3) << "X";
                }
            }
            cout << endl;
        }
    }

    // Método para reservar un asiento
    void reservarAsiento(char fila, int numAsiento) {
        int filaIndex = fila - 'A';
        if (filaIndex < 0 || filaIndex >= 15 || numAsiento < 1 || numAsiento > 20) {
            cout << "Fila o numero de asiento invalido." << endl;
            return;
        }

        if (asientos[filaIndex][numAsiento - 1]) {
            asientos[filaIndex][numAsiento - 1] = false;
            cout << "Asiento reservado con exito." << endl;
        } else {
            cout << "El asiento ya esta ocupado." << endl;
        }
    }

    // Método para cancelar una reserva
    void cancelarReserva(char fila, int numAsiento) {
        int filaIndex = fila - 'A';
        if (filaIndex < 0 || filaIndex >= 15 || numAsiento < 1 || numAsiento > 20) {
            cout << "Fila o numero de asiento invalido." << endl;
            return;
        }

        if (!asientos[filaIndex][numAsiento - 1]) {
            asientos[filaIndex][numAsiento - 1] = true;
            cout << "Reserva cancelada con exito." << endl;
        } else {
            cout << "El asiento no estaba reservado." << endl;
        }
    }
};

int ejercicio11() {
    SalaCine sala;

    char opcion;
    do {
        cout << "\n********MENU********\n";
        cout << "1. Mostrar sala\n";
        cout << "2. Reservar asiento\n";
        cout << "3. Cancelar reserva\n";
        cout << "4. Salir\n";
        cout << "\n*********************\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case '1':
                sala.mostrarSala();
                break;
            case '2':
                char fila;
                int numAsiento;
                cout << "Ingrese la fila (letras A-O): ";
                cin >> fila;
                cout << "Ingrese el número de asiento (numeros 1-20): ";
                cin >> numAsiento;
                sala.reservarAsiento(fila, numAsiento);
                break;
            case '3':
                cout << "Ingrese la fila (letras A-O): ";
                cin >> fila;
                cout << "Ingrese el número de asiento (numeros 1-20): ";
                cin >> numAsiento;
                sala.cancelarReserva(fila, numAsiento);
                break;
            case '4':
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción invalida. Por favor, seleccione nuevamente.\n";
        }
    } while (opcion != '4');

    return 0;
}
