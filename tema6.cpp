#include <iostream>
#include <cmath>
using namespace std;

double Sum(int k) {
    double sum = 0.0;
    
    for (int i = 1; i <= k; i++) {
        double term = pow(-1, i+1) / i;
        sum += term;
    }
    
    return sum;
}

int main() {
    int values[] = {50, 100, 150, 200};
    int count = sizeof(values) / sizeof(values[0]);


    for (int i = 0; i < count; i++) {
        int k = values[i];
        double result = Sum(k);
        cout << "При k = " << k << ", сумма S = " << result << endl;
    }
    
    return 0;
}