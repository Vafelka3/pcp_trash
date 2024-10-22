#ifndef PCP_WORD_H
#define PCP_WORD_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include <ctime>
#include <cstdlib>
using namespace std;

class Word {
private:
    vector<string> m_words;
public:
    Word(string nameFile);
    string getRandomWord();


};


#endif //PCP_WORD_H
