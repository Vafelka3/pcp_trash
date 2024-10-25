//
//  Dictionary.cpp
//  Cviceni2
//
//  Created by Šimon Bilík on 03.10.2024.
//

#include "Dictionary.hpp"

Dictionary::Dictionary() {
    words = {
        Word("Jedna"),
        Word("Dve"),
        Word("Honza"),
        Word("Jde")
    };
}

Word Dictionary::findConnectedWord(Word anotherWord) const{
    for (auto &systemWord: this->words){
        if (systemWord.isConnectedTo(anotherWord)) {
            return systemWord;
        }
    }
    
    return Word("");
}
