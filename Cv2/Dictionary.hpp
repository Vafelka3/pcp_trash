//
//  Dictionary.hpp
//  Cviceni2
//
//  Created by Šimon Bilík on 03.10.2024.
//

#ifndef Dictionary_hpp
#define Dictionary_hpp

#include <stdio.h>
#include <vector>

#include "Word.hpp"

class Dictionary{
private:
    std::vector<Word> words;
public:
    Dictionary();
    Word findConnectedWord(Word anotherWord) const;
};

#endif /* Dictionary_hpp */
