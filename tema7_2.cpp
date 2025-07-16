#include <iostream>
#include <cmath>
using namespace std;

bool isInCircle(float x, float y, float R) {
    return sqrt(x*x + y*y) <= R;
}

void removeOutside(float X[], float Y[], int &n, float R) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(isInCircle(X[i], Y[i], R)) {
            X[j] = X[i];
            Y[j] = Y[i];
            j++;
        }
    }
    n = j;
}

int main() {
    const int n = 5;
    float X[n] = {0.5, 1.0, -0.3, 0.9, 0.1};
    float Y[n] = {0.5, 0.2, 0.7, -0.8, -0.9};
    float R = 1.0;
    int current_n = n;
    
    removeOutside(X, Y, current_n, R);
    
    cout << "Точки внутри круга:\n";
    for(int i = 0; i < current_n; i++) {
        cout << "(" << X[i] << ", " << Y[i] << ")\n";
    }
    
    return 0;
}