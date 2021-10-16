
#include <iostream>
#include <vector>

bool isPrimeNumber(int number) {
    if (number > 0 && number < 4) {
        return true;
    }
    for (int i = number - 1; i > 1; i--) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<bool> verifyPrimeNumbers(std::vector<int> input) {
    std::vector<bool> target;
    for (int i = 0; i < input.size(); i++) {
        target.push_back(isPrimeNumber(input[i]));
    }
    return target;
}

int main()
{
    std::cout << "Test funkcji\n";

    std::vector<int> input = { 2, 10, 24, 25, 13, 79, 31 };
    std::vector<bool> output = verifyPrimeNumbers(input);

    for (bool b : output) {
        std::cout << b << " ";
    }
    std::cout << "\n";
}

/*
Napisz funkcję przyjmującą jako argument obiekt klasy vector zawierający dodatnie liczby całkowite. Funkcja ma zadanie 
zwrócić obiekt klasy vector zawierający wartośc true na pozycjach na których znajdują się liczby pierwsze w otrzymanym 
wektorze i fałsz na pozycjach na których znajdują się pozostałe liczby w otrzymanym wektorze. Dla przykładu:

Wektor wejściowy: [2, 10, 24, 25, 13, 79, 31]

Wektor wynikowy: [true, false, false, false, true, true, true]
*/
