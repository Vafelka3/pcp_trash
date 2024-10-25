#include "Game.h"
Game::Game() {
    myRoad = new Road;


}

void Game::printControl() {
    cout<<endl<<"Zadejde zadej \"WASD\" pro rideni auta: ";
}

void Game::printLose() {
    cout<<endl<<"Bohuzel ale tve auto ma 0%...zkus no zahrat...";
}

void Game::printEnd() {
    cout<<endl<<"Doufam ze jeste budete chtit zahrat"<<endl;
}

void Game::tryMoveAuto(int positionX, int positionY) {
    if(myRoad->checkBorder(positionX, positionY)){
        myRoad->moveAuto(positionX, positionY);
    }else{
        cout<<"Nemuzes tady jezdit :)"<<endl;
    }
}

void Game::move(char input) {
    if (input == 'q') {
        printEnd();
        exit(0);
    } else if (tolower(input) == 'a') {
        tryMoveAuto(-1, 0);
    } else if (input == 'd') {
        tryMoveAuto(1, 0);
    } else if (input == 'w') {
        tryMoveAuto(0, -1);
    } else if (input == 's') {
        tryMoveAuto(0, 1);
    } else {
        std::cout << "WHAT, zadej simbol znovu prosim!" << std::endl;
    }
}

void Game::start() {
    while (true){
        char input;
        myRoad->printRoad();
        myRoad->printBaterka();
        printControl();
        cin>> input;
        move(input);
        if(myRoad->checkBatarie()){
            printLose();
            exit(0);
        }

    }
}