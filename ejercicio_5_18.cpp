#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    return invertido;
}

int main() {
    int num = 7631;
    cout << "El inverso de " << num << " es " << reverseDigits(num) << "\n";
    return 0;
}