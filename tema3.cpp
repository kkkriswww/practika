#include <iostream>
using namespace std;

int main() {
    char repeat;
    
    do {
        int N;
        cout << "Введите число N: ";
        cin >> N;
        
        cout << "Числа Фибоначчи, не превышающие " << N << ":" << endl;
        
        if (N >= 1) {
            cout << "1 ";
        }
        if (N >= 1) {
            cout << "1 ";
        }
        
        int prev1 = 1, prev2 = 1, current;
        
        while (true) {
            current = prev1 + prev2;
            if (current > N) {
                break;
            }
            cout << current << " ";
            
            prev2 = prev1;
            prev1 = current;
        }
        
        cout << endl;
        cout << "Хотите выполнить еще один расчет? (y/n): ";
        cin >> repeat;
        
    } while (repeat == 'y' || repeat == 'Y');
    
    return 0;
}