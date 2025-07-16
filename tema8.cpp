#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num_pretenders, num_questions;
    
    cout << "Введите количество претендентов: ";
    cin >> num_pretenders;
    cout << "Введите количество вопросов: ";
    cin >> num_questions;

    vector<vector<int>> scores(num_pretenders, vector<int>(num_questions));
    vector<int> total_scores(num_pretenders, 0);

    for (int i = 0; i < num_pretenders; ++i) {
        cout << "\nПретендент " << i + 1 << ":\n";
        for (int j = 0; j < num_questions; ++j) {
            while (true) {
                cout << "Вопрос " << j + 1 << " (введите 2, 6 или 8): ";
                cin >> scores[i][j];
                
                if (scores[i][j] == 2 || scores[i][j] == 6 || scores[i][j] == 8) {
                    total_scores[i] += scores[i][j];
                    break;
                } else {
                    cout << "Ошибка! Допустимые значения: 2, 6 или 8. Попробуйте еще раз.\n";
                }
            }
        }
    }

    int winner = 0;
    int max_score = total_scores[0];
    for (int i = 1; i < num_pretenders; ++i) {
        if (total_scores[i] > max_score) {
            max_score = total_scores[i];
            winner = i;
        }
    }

    cout << "\nИтоговые баллы:\n";
    for (int i = 0; i < num_pretenders; ++i) {
        cout << "Претендент " << i + 1 << ": " << total_scores[i] << " баллов\n";
    }
    cout << "\nПобедитель: Претендент " << winner + 1 
         << " с результатом " << max_score << " баллов!\n";

    return 0;
}