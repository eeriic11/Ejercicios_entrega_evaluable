#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours) {
    if (hours <= 3.0) return 20.0;
    double charge = 20.0 + ceil(hours - 3.0) * 5.0;
    return (charge > 50.0) ? 50.0 : charge;
}

int main() {
    double h1 = 1.5, h2 = 4.0, h3 = 24.0;
    double c1 = calculateCharges(h1), c2 = calculateCharges(h2), c3 = calculateCharges(h3);
    double totalH = h1 + h2 + h3;
    double totalC = c1 + c2 + c3;
    
    cout << "Car\tHours\tCharge\n"
         << "1\t" << fixed << setprecision(1) << h1 << "\t" << setprecision(2) << c1 << "\n"
         << "2\t" << setprecision(1) << h2 << "\t" << setprecision(2) << c2 << "\n"
         << "3\t" << setprecision(1) << h3 << "\t" << setprecision(2) << c3 << "\n"
         << "TOTAL\t" << setprecision(1) << totalH << "\t" << setprecision(2) << totalC << "\n";
    return 0;
}