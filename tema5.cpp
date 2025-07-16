#include <iostream>
using namespace std;

int main() {
    double gift = 1.0;
    double total = 0.0;
    
    cout << "Накопления племянника к 18-летию:" << endl;
    cout << "--------------------------------" << endl;
    cout << "Возраст | Подарок в этом году | Общая сумма" << endl;
    cout << "--------|---------------------|------------" << endl;
    
    for (int age = 1; age <= 18; age++) {
        total += gift;
        cout << age << " лет  | " << gift << " долл.         | " << total << " долл." << endl;
        gift *= 2;
    }
    
    cout << "--------------------------------" << endl;
    cout << "К 18-летию племянник накопит: " << total << " долл." << endl;
    
    return 0;
}