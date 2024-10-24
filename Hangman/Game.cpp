#include "Game.h"

void Game::dejPismenna() {
    for (char c : m_slovo) {
        m_latters.push_back(c);
    }
}

Game::Game(string nameFile) {
    Word wordSelector(nameFile);
    m_slovo = wordSelector.getRandomWord();
    m_yourPokusy = 0;
    dejPismenna();
    m_dashes.resize(m_latters.size(),'-');
}

void Game::printPismenna(vector<char>& yourVector) {
    for (int i = 0; i < yourVector.size(); ++i) {
        cout<<yourVector.at(i)<<" ";
    }
    cout<<endl;
}

void Game::printPokusy() {
    cout<<"~~~Mas: "<<m_yourPokusy<<" chyb z "<<m_celkemPokusu<<"~~~"<<endl;
}

void Game::printYourPismena() {
    cout<<"Uz jsi mel nasledovne pismena: ";
    if(!m_youeLatters.empty()){
        for (int i = 0; i < m_youeLatters.size(); ++i) {
            cout<<m_youeLatters.at(i)<<", ";
        }
        cout<<endl;
    }
}

bool Game::pismenoUZBylo(char pismeno) {
    for (int i = 0; i < m_youeLatters.size(); ++i) {
        if(pismeno == m_youeLatters.at(i)){
            return true;
        }
    }
    return false;
}

void Game::zpracuj(char pismeno) {
    int najdeno = 0;
    for (int i = 0; i < m_latters.size(); ++i) {
        if (m_latters.at(i) == pismeno){
            m_dashes.at(i) = pismeno;
            najdeno++;
        }
    }
    if (najdeno <= 0){
        cout<<"Mne to lito, ale neni spravne! Mas +1 chybu..."<<endl;
        m_yourPokusy++;
    } else{
        cout<<"Mas uspech!!!"<<endl;
    }

}
bool Game::controlWin() {
    if (m_dashes == m_latters){
        return true;
    } else{
        return false;
    }
}

bool Game::controlLose() {
    if (m_yourPokusy >= m_celkemPokusu){
        return true;
    }else{
        return false;
    }
}

void Game::Input() {
    string input;
    char pismeno;

        cout<<endl<<"Zadej pismeno: ";
        cin>>input;
        if (input.length() == 1){
            pismeno = input[0];
            if (!pismenoUZBylo(pismeno)){
                m_youeLatters.push_back(pismeno);
                zpracuj(pismeno);
            } else{
                cout<<endl<<"Uz jsi psal takove pismeno, zkus znovu: "<<endl;
            }
        }else{
            cout<<endl<<"Zadej 1 pismeno!!!: "<<endl;
        }


}

void Game::start() {
//    dejPismenna();
//    vector<char> m_dashes(m_latters.size(),'-');
    while (true){
        printPismenna(m_dashes);
        printPokusy();
        printYourPismena();
        Input();
        if (controlWin()){
            printPismenna(m_dashes);
            cout<<"You WON!!!"<<endl;
            exit(0);
        }
        if (controlLose()){
            printPismenna(m_dashes);
            printPokusy();
            cout<<"Lose!!!"<<endl;
            exit(0);
        }
    }

}