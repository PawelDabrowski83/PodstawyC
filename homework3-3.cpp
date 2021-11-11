#include <iostream>
#include <vector>
#include <string>

using std::string;

template <typename T, typename FUN>
T findMax(const std::vector<T>& v, FUN f) {
    auto output = v[0];
    int value = f(v[0]);
    for (int i = 1; i < v.size(); i++) {
        auto currentItem = v[i];
        int currentVal = f(currentItem);
        if (value < currentVal) {
            output = currentItem;
        }
    }
    return output;
}

int main()
{
    std::cout << "Hello World!\n";
    std::vector<string> strings = {"Ala", "ma", "kota", "a", "nie", "krokodyla"};
    std::vector<unsigned int> numbers = { 1992, 5, 115, 0 };

    string answer = findMax(strings, [](string s) -> int {return s.length(); });
    std::cout << "Longest string in vector is: (expected: 'krokodyla') actual: " << answer << std::endl;

    int secondAnswer = findMax(numbers, [](unsigned int n) -> int {return std::to_string(n).length(); });
    std::cout << "Longest number in vector is: (expected: '1992') actual: " << secondAnswer << std::endl;
}


/*
Napisz szablon funkcji o następującym prototypie:

template <typenameT, typenameFUN>
T findMax(const std::vector<T>& v, FUN f);

Parametr f reprezentuje funkcję konwertującą dowolny element wektora v na wartość typu int. Natomiast zadaniem funkcji
findMax jest zwrócenie wartości elementu wektora dla którego wyznaczona przez funkcję f wartość typu int jest największa.



Przy pomocy utworzonego szablonu funkcji oraz odpowiedniego wyrażenia lambda:

- wyznacz wartość elementu o największej długości dla wektora zawierającego obiekty klasy string

- wyznacz wartość elementu o największej sumie cyfr dla wektora zawierającego wartości typu unsigned int


*/
