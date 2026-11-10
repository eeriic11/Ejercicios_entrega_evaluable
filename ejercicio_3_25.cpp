#include <iostream>
using namespace std;

int main() {
    int n, temp;
    long long factorial = 1;
    cout << "Introduce n para n!: ";
    cin >> n;
    temp = n;
    while (temp > 1) {
        factorial *= temp;
        temp--;
    }
    cout << n << "! = " << factorial << "\n";

    int terminos;
    double e = 1.0;
    cout << "Terminos para e: ";
    cin >> terminos;
    int i = 1;
    long long fact = 1;
    while (i < terminos) {
        fact *= i;
        e += 1.0 / fact;
        i++;
    }
    cout << "e = " << e << "\n";

    int x;
    double ex = 1.0;
    double numerador = 1.0;
    cout << "Introduce x para e^x: ";
    cin >> x;
    cout << "Terminos para e^x: ";
    cin >> terminos;
    i = 1;
    fact = 1;
    while (i < terminos) {
        fact *= i;
        numerador *= x;
        ex += numerador / fact;
        i++;
    }
    cout << "e^" << x << " = " << ex << "\n";
    return 0;
}