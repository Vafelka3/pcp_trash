//
//  Loader.cpp
//  Chatbot
//
//  Created by David Procházka on 11/10/2018.
//  Copyright © 2018 MENDELU. All rights reserved.
//

#include "Loader.hpp"

std::vector<Conversation> Loader::getConversations(const std::string filename) const{
    std::vector<Conversation> conversations;

    std::string row = "";
    
    // Open file
    std::ifstream in(filename);
    
    if (in.is_open()){
        // Load line
        while(std::getline(in, row)){
            // Split line and save it to vector
            Conversation con = splitLine(row);
            conversations.push_back(con);
        }
    }
    else{
        std::cerr << "File" << filename << " was not loaded..." << std::endl;
    }

    return conversations;
}

Conversation Loader::splitLine(const std::string line) const{
    long position = line.find(" ");
    
    //std::cout << line << std::endl;
    
    std::string answer = line.substr(position + 1, line.size() - position - 1);
    std::regex exp(".*" + line.substr(0, position) + ".*");

    return Conversation{exp, answer};
}
