#include <iostream>
#include "problemas.h"
#include <unordered_map>


using namespace std;

/*Escribe un programa que permita convertir un número en el sistema romano al sistema
arábigo usado actualmente.*/

int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int prevValue = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        int currValue = romanValues[s[i]];
        if (currValue < prevValue) {
            total -= currValue;
        } else {
            total += currValue;
        }
        prevValue = currValue;
    }

    return total;
}

int ejercicio10(){
    string romanNumeral;
        cout << "Ingresa el numero: ";
        cin >> romanNumeral;

        int arabicNumeral = romanToInt(romanNumeral);
        cout << "Corresponde a: " << arabicNumeral << endl;

        return 0;
    }
