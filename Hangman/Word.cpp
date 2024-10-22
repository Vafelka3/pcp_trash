//
// Created by Nikita on 23.10.2024.
//

#include "Word.h"

Word::Word(std::string nameFile) {
    string word;
    fstream inputFile (nameFile);
    if (!inputFile.is_open()){
        cerr<<"Problemy se souborem"<<endl;
    }
    while (!inputFile.eof()){
        inputFile >> word;
        m_words.push_back(word);
    }
    inputFile.close();
}

string Word::getRandomWord() {
    // Инициализируем генератор случайных чисел, выбираем случайное слово из нашего вектора
    srand(time(0));
    int randomIndex = rand() % m_words.size();
    return m_words.at(randomIndex);
}
