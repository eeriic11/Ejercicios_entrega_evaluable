// Ejercicio 3.12: Que muestra en pantalla el siguiente programa?
#include <iostream>
using namespace std;

int main() {
    /*
     * RESPUESTA TEORICA:
     * El programa imprime 10 filas de 10 caracteres cada una.
     * Las filas impares (1, 3, 5...) imprimen '<' y las filas pares (2, 4, 6...) imprimen '>'.
     */
    int row{10};
    while (row >= 1) {
        int column{1};
        while (column <= 10) {
            cout << (row % 2 == 1 ? "<" : ">");
            ++column;
        }
        --row;
        cout << "\n";
    }
    return 0;
}