#include <iostream>
#include <string>

bool isLetter(char c) {
    return (c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A');
}

/*
std::string toString(bool b) {
    return b == 1 ? "true" : "false";
}
*/

int length(const char tab[]) {
    int counter = 0;
    while (tab[counter] != '\0') {
        counter++;
    }
    return counter;
}

size_t words(const char tab[]) {
    int words_count = 0;
    bool word = false;
    int size = length(tab);
    for (int i = 0; i < size; i++) {
        if (isLetter(tab[i])) {
            if (!word) {
                word = true;
                words_count++;
            }
        } else {
            word = false;
        }
    }
    return words_count;
}

int main()
{
    std::cout << std::boolalpha;
    
    std::cout << "Is letter? A " << isLetter('A') << "\n";
    std::cout << "Is letter? - " << isLetter('-') << "\n";
    std::cout << "Is letter? b " << isLetter('b') << "\n";
    std::cout << "Is letter? ą " << isLetter('ą') << "\n";
    std::cout << "Is letter? . " << isLetter('.') << "\n";
    std::cout << "Is letter? ' ' " << isLetter(' ') << "\n";
    std::cout << "Is letter? F " << isLetter('F') << "\n";

    char tab[] = { 'A', 'l', 'a', '\0'};
    std::cout << "Ala" << " dlugosc: " << length(tab) << "\n";

    char tab1[] = "Aadsfd dsfsdfsfsdf ";
    std::cout << "Ala" << " dlugosc: " << length(tab1) << "\n";

    char tab2[] = "Ala ma kota.";
    char tab3[] = "Lorem ipsum pjatk... ^#&ggg";

    std::cout << "Ala ma kota." << " - " << words(tab2) << "\n";
    std::cout << "Lorem ipsum pjatk... ^#&ggg" << " - " << words(tab3) << "\n";
}

/*
* Napisz funkcję o prototypie:booli s L e t t e r (charc )
zwracającą prawdę jeżeli przekazany znak jest wielką lub małą literą angielskiego alfabetu i fałsz w pozostałych przypadkach

Napisz funkcję o prototypie:intlength (const chartab [ ] ) ;zwracającą długość przekazanego łańcucha znaków przypominięciu znaku ’\0’.

Napisz funkcję o prototypie:s i z et  words (const chartab [ ] ) ;zwracającą liczbę słów w przekazanym łańcuchu znaków (zasłowo uważamy
niepusty ciąg liter, wielkich i małych, taki,że bezpośrednio przed nim i za nim nie ma litery).
*/
