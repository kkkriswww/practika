#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    
    cout << "Таблица значений полинома Y(x) = x^10 + 2x^9 + ... + 10x + 11" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "   x   |   Y(x)" << endl;
    cout << "-------|--------" << endl;
    

    for (double x = -2.0; x <= 2.0; x += 0.2) {
        double y = 0.0;
        
        y += pow(x, 10) * 1;   // x^10
        y += pow(x, 9) * 2;     // 2x^9
        y += pow(x, 8) * 3;     // 3x^8
        y += pow(x, 7) * 4;     // 4x^7
        y += pow(x, 6) * 5;     // 5x^6
        y += pow(x, 5) * 6;     // 6x^5
        y += pow(x, 4) * 7;     // 7x^4
        y += pow(x, 3) * 8;     // 8x^3
        y += pow(x, 2) * 9;     // 9x^2
        y += x * 10;            // 10x
        y += 11;                // 11
        
        cout << setw(6) << x << " | " << setw(8) << y << endl;
    }
    
    return 0;
}