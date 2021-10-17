#include <iostream>
#include <string>

bool isLetter(char c) {
    return (c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A');
}

std::string toString(bool b) {
    return b == 1 ? "true" : "false";
}

int main()
{
    std::cout << "Is letter? A " << toString(isLetter('A')) << "\n";
    std::cout << "Is letter? - " << toString(isLetter('-')) << "\n";
    std::cout << "Is letter? b " << toString(isLetter('b')) << "\n";
    std::cout << "Is letter? ą " << toString(isLetter('ą')) << "\n";
    std::cout << "Is letter? . " << toString(isLetter('.')) << "\n";
    std::cout << "Is letter? ' ' " << toString(isLetter(' ')) << "\n";
    std::cout << "Is letter? F " << toString(isLetter('F')) << "\n";
}

/*
* Napisz funkcję o prototypie:booli s L e t t e r (charc )
zwracającą prawdę jeżeli przekazany znak jest wielką lub małą literą angielskiego alfabetu i fałsz w pozostałych przypadkach
*/
