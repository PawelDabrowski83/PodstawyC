#include <iostream>
#include <vector>
#include <string>

using namespace std;

int maxWordLength(const vector<string>& words) {
    int maxLength = words[0].length();
    for (int i = 0; i < words.size(); i++) {
        int wordLength = words[i].length();
        if (maxLength < wordLength) {
            maxLength = wordLength;
        }
    }
    return maxLength;
}

void printEmptyRow(char c, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << c;
    }
    std::cout << endl;
}

void printWord(char c, string word, int length) {
    int emptySpaces = length - word.length() - 2;
    std::cout << c << word;
    for (int i = 0; i < emptySpaces; i++) {
        std::cout << " ";
    }
    std::cout << c << endl;
}

void frameWords(const vector<string>& words, char c) {
    int frameLength = maxWordLength(words) + 2;

    for (int row = 0; row < words.size(); row++) {
        if (row == 0) {
            printEmptyRow(c, frameLength);
        }
        
            printWord(c, words[row], frameLength);
        if (row == words.size() - 1) {
            printEmptyRow(c, frameLength);
        }
    }
    


}



int main()
{
    std::vector<string> abc = { "Hello", "World", "Ala", "ma", "kota"};
    char c = '#';
    frameWords(abc, c);
}

/*
Napisz funkcję przyjmującą jako parametry referencję do obiektu klasy std::vector<string> oraz znak typu char. Funkcja 
powinna wypisać na konsoli każdy z obiektów string z otrzymanego wektora w ramce stworzonej z otrzymanego znaku. Dla 
przykładu:

Wektor 1: [“Hello”, “World”, “Ala”, “ma”, “kota”]

Znak: ‘#’

Wynik:
#######
#Hello#
#World#
#Ala  #
#ma   #
#kota #
#######
*/
