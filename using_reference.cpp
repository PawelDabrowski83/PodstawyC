#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 3;
    int b = 4;
    swap(a, b);

    std::cout << a << " " << b << "\n";

    int x = 5;
    std::cout << x << "\n";

    int& y = x; // referencja - alias na nazwę zmiennej 
    std::cout << y << "\n";

    y = 12;
    std::cout << x << "\n";
    std::cout << y << "\n";
    // referencja zmienia wartość adresową w pamięci

    std::cout << &x << "\n"; // adresy zmiennych
    std::cout << &y << "\n";

}

/*
referencji używa się dla bezpośredniego dostępu do wartości zmiennych oraz żeby oszczędzić pamięć na kopiowaniu (przy wywołaniu funkcji)
*/

