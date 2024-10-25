//
//  Word.hpp
//  Cviceni2
//
//  Created by Šimon Bilík on 03.10.2024.
//

#ifndef Word_hpp
#define Word_hpp

#include <stdio.h>
#include <string>

class Word{
private:
    std::string value;
    bool isFound;
public:
    Word(std::string value);
    char getFirstCharacter() const;
    char getLastCharacter() const;
    bool isConnectedTo(const Word anotherWord) const;
    std::string getWord() const;
};

#endif /* Word_hpp */
