//
// Created by piotr on 14.10.19.
//

#ifndef GOMOKU_LOGGER_H
#define GOMOKU_LOGGER_H


#include <string>
#include <fstream>

class Logger {
public:
    Logger();
    static std::string getPrompt();
    static void saveMove(int x, int y, char symbol);
    static void purgeMoveLog();
    static void safeEvent(std::string event);

private:
    static const std::string prompt;
    static std::string now();
};


#endif //GOMOKU_LOGGER_H
