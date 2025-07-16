#include <iostream>
#include <cmath>
using namespace std;

bool inCircle(float x, float y, float R) {
    return sqrt(x*x + y*y) <= R;
}

#include <iostream>
#include <cmath>
using namespace std;

bool isInCircle(float x, float y, float R) {
    return sqrt(x*x + y*y) <= R;
}

int main() {
    const int n = 5;
    float X[n] = {0.5, 1.0, -0.3, 0.9, 0.1};
    float Y[n] = {0.5, 0.2, 0.7, -0.8, -0.9};
    float R = 1.0;
    
    cout << "№\tX\tY\tВ круге?\n";
    cout << "-----------------------------\n";
    for(int i = 0; i < n; i++) {
        cout << i+1 << "\t" << X[i] << "\t" << Y[i] << "\t";
        if(isInCircle(X[i], Y[i], R)) 
            cout << "Да\n";
        else 
            cout << "Нет\n";
    }
    
    return 0;
}