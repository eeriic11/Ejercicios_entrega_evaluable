#include <iostream>
using namespace std;

void hanoi(int n, int origen, int destino, int temporal) {
    if (n == 1) {
        cout << origen << " -> " << destino << "\n";
    } else {
        hanoi(n - 1, origen, temporal, destino);
        cout << origen << " -> " << destino << "\n";
        hanoi(n - 1, temporal, destino, origen);
    }
}

int main() {
    hanoi(3, 1, 3, 2);
    return 0;
}