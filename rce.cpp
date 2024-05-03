#include "Header.h"
int countWordInFile(const string& fileName, const string& word) {
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "Ошибка файла." << endl;
        return 0;
    }
    

    if (file.peek() == ifstream::traits_type::eof()) {
        cout << "Ошибка файла" << endl;
    }
     

    string line;
    int count = 0;
    while (getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != string::npos) {
            count++;
            pos += word.length();
        }
    }

    file.close();
    return count;
}
