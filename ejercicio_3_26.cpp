#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, d4;
    cout << "Introduce 4 digitos a cifrar: ";
    cin >> num;
    
    d1 = (num / 1000 + 7) % 10;
    d2 = ((num / 100) % 10 + 7) % 10;
    d3 = ((num / 10) % 10 + 7) % 10;
    d4 = (num % 10 + 7) % 10;
    
    cout << "Cifrado: " << d3 << d4 << d1 << d2 << "\n";
    return 0;
}