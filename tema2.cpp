#include <iostream>
using namespace std;

int main() {
    char answer;
    
    do {
        // Вводим суммы денег у каждого брата
        double brother1, brother2, brother3;
        cout << "Введите сумму денег у первого брата: ";
        cin >> brother1;
        cout << "Введите сумму денег у второго брата: ";
        cin >> brother2;
        cout << "Введите сумму денег у третьего брата: ";
        cin >> brother3;

        // Вычисляем общую сумму и среднее значение
        double total = brother1 + brother2 + brother3;
        double average = total / 3;

        // Вычисляем, сколько каждый должен получить или отдать
        double diff1 = average - brother1;
        double diff2 = average - brother2;
        double diff3 = average - brother3;

        // Выводим результаты
        cout << "\nСредняя сумма на каждого: " << average << endl;
        cout << "--------------------------------" << endl;

        // Первый брат
        if (diff1 > 0)
            cout << "Первый брат должен получить: " << diff1 << endl;
        else if (diff1 < 0)
            cout << "Первый брат должен отдать: " << -diff1 << endl;
        else
            cout << "Первый брат не участвует в обмене" << endl;

        // Второй брат
        if (diff2 > 0)
            cout << "Второй брат должен получить: " << diff2 << endl;
        else if (diff2 < 0)
            cout << "Второй брат должен отдать: " << -diff2 << endl;
        else
            cout << "Второй брат не участвует в обмене" << endl;

        // Третий брат
        if (diff3 > 0)
            cout << "Третий брат должен получить: " << diff3 << endl;
        else if (diff3 < 0)
            cout << "Третий брат должен отдать: " << -diff3 << endl;
        else
            cout << "Третий брат не участвует в обмене" << endl;

        // Предлагаем продолжить
        cout << "\nХотите сделать еще один расчет? (y/n): ";
        cin >> answer;
        cout << endl;
        
    } while (answer == 'y' || answer == 'Y');

    return 0;
}