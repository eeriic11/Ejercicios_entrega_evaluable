// Ejercicio 4.6: Que hace este codigo?
#include <iostream>
using namespace std;

int main() {
    /*
     * RESPUESTA TEORICA:
     * El programa utiliza bucles 'for' anidados para imprimir un patron
     * triangular alineado a la izquierda compuesto de espacios y un caracter.
     */
    for (int i{1}; i < 10; i++) {
        for (int j{1}; j < 5; j++) {
            cout << ' '; // Formato de ejemplo
        }
        cout << "\n";
    }
    return 0;
}