#include "Road.h"

Road::Road() {
    m_roud = array<std::array<char, 5>, 5>{};
    for (auto &row: m_roud) { // auto -> array<char, 5>
        for (auto &column: row) { // auto -> char
            column = m_symbol;
        }
    }
    myAuto = new Auto (4,1);
    nabij1 = new Nabij (1,1);
    nabij2 = new Nabij(3,4);
}

void Road::printRoad() {
    for (int y = 0; y < m_roud.size(); y++) {
        for (int x = 0; x < m_roud.at(y).size(); x++) {
            if(myAuto->getPositionX() == x && myAuto->getPositionY() == y){
                cout<<myAuto->getSymbolAuta();
            } else if (nabij1->getPositionX() == x && nabij1->getPositionY() == y){
                cout<<nabij1->getSymbolNabij();
            }else if (nabij2->getPositionX() == x && nabij2->getPositionY() == y){
                cout<<nabij2->getSymbolNabij();
            }else{
                cout << m_roud.at(y).at(x) ;
            }
        }
        cout << endl;
    }
}

void Road::moveAuto(int positionX, int positionY) {
    myAuto->setPosition(myAuto->getPositionX() + positionX, myAuto->getPositionY() + positionY);
    myAuto->minusBatarie(1);
}

bool Road::checkBorder(int positionX, int positionY) {
    int newX = myAuto->getPositionX() + positionX;
    int newY = myAuto->getPositionY() + positionY;

    // Проверка границ дороги
    if (newX < 0 || newX >= m_roud.at(0).size() || newY < 0 || newY >= m_roud.size()) {
        return false; // Если выходит за границы дороги
    }

    // Проверка столкновения с Nabij
    if ((newX == nabij1->getPositionX() && newY == nabij1->getPositionY()) ||
        (newX == nabij2->getPositionX() && newY == nabij2->getPositionY())) {
        return false; // Если новая позиция совпадает с Nabij
    }

    return true; // Если все проверки пройдены
}

bool Road::checkBatarie() {
    if (myAuto->getBatarie() <= 0.0){
        return true;
    }else{
        return false;
    }
}

void Road::printBaterka() {
    cout<<endl<<"Vasa baterka: "<<myAuto->getBatarie()<< " z 100%";
}

void Road::nabijBatarie() {
    float uroven = myAuto->getBatarie() * 0.1f;
    myAuto->setBatarie(uroven);
}

//array<array<char, 5>, 5> Road::getRoad() const {
//    return m_roud;
//}

