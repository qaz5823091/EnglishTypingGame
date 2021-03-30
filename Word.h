#ifndef WORD_H
#define WORD_H

#include "Question.h"
#include <iostream>

class Word: public Question {
    private:
        std::string word;

    public:
        Word();
        Word(std::string );

        void setWord(std::string );
        std::string getWord();
};

#endif // WORD_H
