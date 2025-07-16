#include <iostream>
using namespace std;


void checkMonotonic(int arr[], int size, int& isIncreasing, int& isDecreasing) {
    isIncreasing = 1;
    isDecreasing = 1;
    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i+1]) {
            isIncreasing = 0;
        }
        if (arr[i] < arr[i+1]) {
            isDecreasing = 0;
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    int n, m;
    
    cout << "Введите количество строк (n, не более " << MAX_SIZE << "): ";
    cin >> n;
    cout << "Введите количество столбцов (m, не более " << MAX_SIZE << "): ";
    cin >> m;
    
    if (n <= 0 || m <= 0 || n > MAX_SIZE || m > MAX_SIZE) {
        cout << "Некорректный размер матрицы!";
        return 1;
    }
    
    int matrix[MAX_SIZE][MAX_SIZE];
    
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Строка " << i+1 << ": ";
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nРезультаты проверки:" << endl;
    for (int i = 0; i < n; i++) {
        int isInc, isDec;
        checkMonotonic(matrix[i], m, isInc, isDec);
        
        cout << "Строка " << i+1 << ": ";
        if (isInc && isDec) {
            cout << "Все элементы равны";
        }
        else if (isInc) {
            cout << "Возрастающая последовательность";
        }
        else if (isDec) {
            cout << "Убывающая последовательность";
        }
        else {
            cout << "Не монотонная";
        }
        cout << endl;
    }
    
    return 0;
}