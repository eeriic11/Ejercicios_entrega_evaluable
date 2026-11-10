// Ejercicio 5.6: Numeros aleatorios
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    /*
     * RESPUESTA TEORICA (Instrucciones para generar los rangos):
     * a) 1 <= n <= 2       ->  n = 1 + rand() % 2;
     * b) 1 <= n <= 100     ->  n = 1 + rand() % 100;
     * c) 0 <= n <= 9       ->  n = rand() % 10;
     * d) 1000 <= n <= 1112 ->  n = 1000 + rand() % 113;
     * e) -1 <= n <= 1      ->  n = -1 + rand() % 3;
     * f) -3 <= n <= 11     ->  n = -3 + rand() % 15;
     */
    
    srand(static_cast<unsigned int>(time(0)));
    int n;
    
    cout << "Ejemplos generados con las instrucciones de la respuesta:\n";
    
    n = 1 + rand() % 2;
    cout << "a) Rango [1, 2]: " << n << "\n";
    
    n = 1 + rand() % 100;
    cout << "b) Rango [1, 100]: " << n << "\n";
    
    n = rand() % 10;
    cout << "c) Rango [0, 9]: " << n << "\n";
    
    n = 1000 + rand() % 113;
    cout << "d) Rango [1000, 1112]: " << n << "\n";
    
    n = -1 + rand() % 3;
    cout << "e) Rango [-1, 1]: " << n << "\n";
    
    n = -3 + rand() % 15;
    cout << "f) Rango [-3, 11]: " << n << "\n";
    
    return 0;
}