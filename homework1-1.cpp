#include <iostream>

int main()
{
    std::cout << "wynik dzialania 123 + 256 = " << 123 + 256 << "\n";
    std::cout << "wynik dzialania 103 * 321 = " << 103 * 321 << "\n";
    std::cout << "wynik dzialania 100 != 234 = " << (100 != 234) << "\n";
    std::cout << "wynik dzialania 100 == 324 = " << (100 == 324) << "\n";

    // nawiasy potrzebne, aby wyrażenia zostały obliczone poprawnie
}

/*
Zadanie 1 [0,2 pkt]

Za pomocą obiektu std::cout, nie tworząc żadnej zmiennej, wyświetl na ekranie wyniki następujących operacji:

- 123 + 256

- 103 * 321

- 100 != 234

- 100 == 324

Dlaczego w niektórych przypadkach konieczne jest dodanie nawiasów? Dlaczego w przypadku wartości logicznych domyślnie wypisywane jest 0 i 1 zamiast true i false?

Podpowiedź: Zwróć uwagę, że << to operator w języku C++.

*/
