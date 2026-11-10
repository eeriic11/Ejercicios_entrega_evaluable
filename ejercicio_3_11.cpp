// Ejercicio 3.11: Que muestra en pantalla el siguiente programa?
#include <iostream>
using namespace std;

int main() {
    /* 
     * RESPUESTA TEORICA:
     * El programa muestra 10 lineas, y en cada linea imprime la cadena "++++++++"
     */
    int count{1};
    while (count <= 10) {
        cout << (count % 2 ? "++++++++" : "++++++++") << "\n";
        ++count;
    }
    return 0;
}