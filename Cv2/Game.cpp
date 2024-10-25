//
//  Game.cpp
//  Cviceni2
//
//  Created by Šimon Bilík on 03.10.2024.
//

#include <iostream>
#include "Game.hpp"

Game::Game() {
    dictionary = new Dictionary();
}

void Game::printIntroduction() const{
    std::cout << "Game started. Enter a word, or q for quit" << std::endl;
}

void Game::printCompWord(Word word) const {
    std::cout << "System: " << word.getWord() << std::endl;
}

void Game::printEndOfGame() const {
    std::cout << "Game ended..." << std::endl;
}

Word Game::loadInput() const {
    std::cout << "Enter word";
    std::string word;
    std::cin >> word;
    
    return Word(word);
}

void Game::checkWord(Word compWord) {
    if (compWord.notFound()) {
        this->endGame();
    }
    else{
        this->printCompWord(compWord);
    }
}

void Game::endGame() const {
    this->printEndOfGame();
    exit(0);
}
