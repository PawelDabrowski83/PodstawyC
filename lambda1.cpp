#include <iostream>
#include <functional>
void print(int tab[], size_t size, std::function<bool(int, int)> p) {
    for (size_t i = 0; i < size; i++) {
        if (p(tab[i], tab[i + 1])) {
            std::cout << tab[i] << " " << tab[i+1] << "\n";
        }
    }
}

bool isEven(int x) {
    return x % 2 == 0;
}
/*
bool isPairMoreThan(int value, int x, int y) {
    return (x + y) > value;
}
*/


int main()
{
    int tab[] = { 1, 2, 3, 4, 5, 6 };
  //   print(tab, std::size(tab), isPairMoreThan);
     int reach;
     std::cin >> reach;
     print(tab, std::size(tab), [&](int x, int y) -> bool { return (x + y) > reach; });
}
