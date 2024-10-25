//
//  Game.hpp
//  Cviceni2
//
//  Created by Šimon Bilík on 03.10.2024.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Dictionary.hpp"

class Game{
private:
    Dictionary* dictionary;
    
    void printIntroduction() const;
    void printEndOfGame() const;
    void printCompWord(Word word) const;
    
    Word loadInput() const;
    void checkWord(Word compWord);
    void endGame() const;
public:
    Game();
    void play();
    void quit();
};

#endif /* Game_hpp */
