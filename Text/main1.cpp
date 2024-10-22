#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main() {
    vector<string> words;
    fstream inputFile("test.txt");

    if(!inputFile.is_open()){
        cerr<<"Neco chybi se suborem";
        return 1;
    }

    string word;
    while (!inputFile.eof()){
        inputFile>>word;
        words.push_back(word);
    }

    inputFile.close();

//узнаем каждую отдельную букву у каждого слова
    for (int i = 0; i < words.size(); ++i) {
        cout<<"Slovo: "<<words.at(i)<<endl;
        for (int j = 0; j < words.at(i).size(); ++j) {
            cout<<"Pismeno: "<<words.at(i)[j]<<endl;
        }
    }

}