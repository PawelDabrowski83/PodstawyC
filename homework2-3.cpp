
#include <iostream>
#include <string>

using namespace std;

int evalChar(char c) {
    if (c == '(') {
        return 1;
    }
    else if (c == ')') {
        return -1;
    }
    return 0;
}

bool isExpressionValid(string sentence) {
    int counter = 0;
    for (int i = 0; i < sentence.size(); i++) {
        counter += evalChar(sentence[i]);
        if (counter < 0) {
            return false;
        }
    }
    return counter == 0;
}

int main()
{
    string str1 = "2 + (3 * 5) – (7 + (3 - 1))";
    string str2 = "(a * (b * (c * (d * (e + f)))))";
    string str3 = "(a * (b * (c * d * (e + f)))))";
    string str4 = "(a * (b * c)) * )c + d(";

    std::cout << isExpressionValid(str1) << " ok " << endl;
    std::cout << isExpressionValid(str2) << " ok " << endl;
    std::cout << isExpressionValid(str3) << " nie " << endl;
    std::cout << isExpressionValid(str4) << " nie " << endl;
}

/*
Napisz funkcję przyjmującą jako parametr obiekt klasy string. Funkcja powinna zwrócić prawdę, jeżeli w przekazanym obiekcie
klasy string wszystkie pary nawiasów okrągłych są zamknięte oraz została zachowana ich odpowiednia kolejność (nawias
zamykający nie poprzedza nawiasu otwierającego), lub fałsz w przeciwnym przypadku. Dla przykładu:




Dane wejściowe: “2 + (3 * 5) – (7 + (3 - 1))”

Wynik: true

Dane wejściowe: “(a * (b * (c * (d * (e + f)))))”

Wynik: true

Dane wejściowe: “(a * (b * (c * d * (e + f)))))”

Wynik: false (za dużo nawiasów zamykających)

Dane wejściowe: “(a * (b * c)) * )c + d(”

Wynik: false (nawias zamykający poprzedza nawias otwierający)
*/
