#include <iostream>

template <typename T>
void swap(T& item1, T& item2) {
    T temp = item1;
    item1 = item2;
    item2 = temp;
}

int main()
{
    int a = 11;
    int b = 2;

    swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;
}
