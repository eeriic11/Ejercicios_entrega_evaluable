#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int caras = 0, cruces = 0;
    
    for (int i = 0; i < 100; i++) {
        if (flip() == 1) {
            cout << "Cara\n";
            caras++;
        } else {
            cout << "Cruz\n";
            cruces++;
        }
    }
    cout << "Total caras: " << caras << "\nTotal cruces: " << cruces << "\n";
    return 0;
}
