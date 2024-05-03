#include "Header.h"

int main() {
    setlocale(LC_ALL, "ru");
    string fileName, word;
    cout << "Название файла: ";
    cin >> fileName;
    cout << "Искомое слово: ";
    cin >> word;

    int result = countWordInFile(fileName, word);
    if (result > 0) {
        cout << "Слово '" << word << "' найдено " << result << " раз." << endl;
    }
    else {
        cout << "Слово '" << word << "' не найдено." << endl;
    }

    return 0;
}
