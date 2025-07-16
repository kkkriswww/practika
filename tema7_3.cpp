#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generatePoints(float X[], float Y[], int n) {
    srand(time(0));
    for(int i = 0; i < n; i++) {
        X[i] = (rand()%200 - 100)/100.0;
        Y[i] = (rand()%200 - 100)/100.0;
    }
}

void filterRange(float arr[], int n, float A, float B, float result[], int &count) {
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < A || arr[i] > B) {
            result[count] = arr[i];
            count++;
        }
    }
}

int main() {
    const int n = 10;
    float X[n], Y[n];
    
    generatePoints(X, Y, n);
    
    cout << "Сгенерированные точки:\n";
    for(int i = 0; i < n; i++) {
        cout << "(" << X[i] << ", " << Y[i] << ")\n";
    }
    
    float A = -0.5, B = 0.5;
    float filtered[n];
    int count;
    
    filterRange(X, n, A, B, filtered, count);
    
    cout << "\nТочки X вне диапазона [" << A << ", " << B << "]:\n";
    for(int i = 0; i < count; i++) {
        cout << filtered[i] << " ";
    }
    
    return 0;
}