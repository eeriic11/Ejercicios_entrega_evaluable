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
            cout << "Heads\n";
            caras++;
        } else {
            cout << "Tails\n";
            cruces++;
        }
    }
    cout << "Total caras (Heads): " << caras << "\nTotal cruces (Tails): " << cruces << "\n";
    return 0;
}