#include "Conversation.hpp"

bool Conversation::matches(std::string userSentence) {
    // Jak jsi stary?
    // .*stary.*
    // regex_match -> true
    return std::regex_match(userSentence, keyword);
}
