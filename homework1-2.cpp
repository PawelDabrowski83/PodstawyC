#include <iostream>
#include <vector>

std::vector<int> prepareDigits(int number) {
    std::vector<int> target;
    do {
        int digit = number % 10;
        number /= 10;
        target.push_back(digit);
    } while (number > 0);
    return target;
}

int main()
{
    std::cout << "Check function for value 13:\n";
    std::vector<int> test = prepareDigits(13);
    for (int n : test) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    std::cout << "Check function for value 9991:\n";
    test = prepareDigits(9991);
    for (int n : test) {
        std::cout << n << " ";
    }
    std::cout << "\n";
}

/*
Zadanie 2 [0,4 pkt]

Napisz funkcję przyjmującą jako argument dodatnią liczbę całkowitą. Funkcja ma za zadanie zwrócić obiekt klasy vector
zawierający wszystkie cyfry podanej liczby (kolejność cyfr w wektorze może być dowolna).
*/
