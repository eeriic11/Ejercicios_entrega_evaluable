// Ejercicio 5.1: Evaluacion de expresiones
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*
     * RESPUESTA TEORICA (Valores de x despues de cada instruccion):
     * a) x = fabs(7.5);   -> x = 7.5
     * b) x = floor(7.5);  -> x = 7.0
     * c) x = fabs(0.0);   -> x = 0.0
     * d) x = ceil(0.0);   -> x = 0.0
     * e) x = fabs(-6.4);  -> x = 6.4
     * f) x = ceil(-6.4);  -> x = -6.0
     * g) x = ceil(-fabs(-8 + floor(-5.5))); -> x = -14.0
     */
    
    cout << "Respuestas evaluadas en codigo:\n";
    cout << "a) " << fabs(7.5) << "\n";
    cout << "b) " << floor(7.5) << "\n";
    cout << "c) " << fabs(0.0) << "\n";
    cout << "d) " << ceil(0.0) << "\n";
    cout << "e) " << fabs(-6.4) << "\n";
    cout << "f) " << ceil(-6.4) << "\n";
    cout << "g) " << ceil(-fabs(-8 + floor(-5.5))) << "\n";
    
    return 0;
}