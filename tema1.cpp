#include <iostream>
using namespace std;

int main() {
    double systemBlock, monitor, keyboard, mouse;
    cout << "Введите стоимость системного блока: ";
    cin >> systemBlock;
    cout << "Введите стоимость монитора: ";
    cin >> monitor;
    cout << "Введите стоимость клавиатуры: ";
    cin >> keyboard;
    cout << "Введите стоимость мыши: ";
    cin >> mouse;

    int N;
    cout << "Введите количество компьютеров (N): ";
    cin >> N;

    double totalCost = (systemBlock + monitor + keyboard + mouse) * N;

    cout << "Общая стоимость " << N << " компьютеров: " << totalCost << " руб." << endl;

    return 0;
}