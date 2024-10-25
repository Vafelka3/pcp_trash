//
//  Word.cpp
//  Cviceni2
//
//  Created by Šimon Bilík on 03.10.2024.
//

#include <string>
#include "Word.hpp"

Word::Word(std::string input) {
    this->value = input;
    this->isFound = false;
}

std::string Word::getWord() const{
    return this->value;
}

char Word::getFirstCharacter() const{
    return this->value.at(0);
}

char Word::getLastCharacter() const{
    size_t size = this->value.size();
    return this->value.at(size - 1);
}

bool Word::isConnectedTo(const Word anotherWord) const{
    return this->getFirstCharacter() == anotherWord.getLastCharacter();
}
