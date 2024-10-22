#include <iostream>
#include <array>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("test.txt");

    if (!inputFile.is_open()){
        cout<<"Neco chybi s souborem!!!"<<endl;
        return 1;
    }

    string word;
    while (!inputFile.eof()) {
        inputFile >> word;  //считывает символы до первого пробела
        cout<<"Tvoje slovo: "<< word<<endl;
    }

    while (!inputFile.eof()) {
        getline(inputFile,word);  //считывает 1 строку
        cout<<"Tvoje veta: "<< word<<endl;
    }

    inputFile.close();

}
