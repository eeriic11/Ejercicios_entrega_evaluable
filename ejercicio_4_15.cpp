#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0;
    int divisor = 1;
    int signo = 1;
    
    cout << "term\tpi\n";
    for (int i = 1; i <= 200000; i++) {
        pi += signo * (4.0 / divisor);
        divisor += 2;
        signo *= -1;
        if (i <= 5 || i == 200000) {
            cout << i << "\t" << fixed << setprecision(8) << pi << "\n";
        }
    }
    return 0;
}