#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getFirstWord(const string& str) {
    size_t space_pos = str.find(' ');
    if (space_pos == string::npos) {
        return str;
    }
    return str.substr(0, space_pos);
}

void replaceWordsInText(const string& oldWord, const string& newWord) {
    ifstream inFile("F1.txt");
    ofstream outFile("F2.txt");
    string line;

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Ошибка открытия файлов!" << endl;
        return;
    }

    while (getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(oldWord, pos)) != string::npos) {
            line.replace(pos, oldWord.length(), newWord);
            pos += newWord.length();
        }
        outFile << line << endl;
    }

    inFile.close();
    outFile.close();
}

int main() {
    string testStr = "Привет мир! Это тест";
    cout << "Первое слово: " << getFirstWord(testStr) << endl;

    replaceWordsInText("старое", "новое");
    cout << "Замена слов выполнена. Результат в F2.txt" << endl;

    return 0;
}