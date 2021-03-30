#include "Word.h"

Word::Word() {
    word = "";
}

Word::Word(std::string w) {
    setX(0);
    setY(0);
    setSolved(false);
    setWord(w);
}

void Word::setWord(std::string w) {
    word = w;

    return ;
}

std::string Word::getWord() {
    return word;
}
