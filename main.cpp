#include <iostream>
#include <vector>
#include <conio.h>
#include "Word.h"
using namespace std;
int main()
{
    char getChar;
    string answer;
    vector<Word> words = {Word("apple"), Word("bird"), Word("cat")};
    int length = words.size();
    for (int i=0;i<length;i++) {
        cout<<"Challenge: "<<words[i].getWord()<<endl;
        while(words[i].getSolved() == false) {
            getChar = getch();
            cout<<getChar;
            if (getChar == ' ') {
                cout<<endl;
                if (answer == words[i].getWord()) {
                    words[i].setSolved(true);
                    cout<<"Correct!"<<endl;
                }
                else {
                    cout<<"Fail . ."<<endl;
                }
                answer = "";
            }
            else {
                answer += getChar;
            }
        }
    }
}
