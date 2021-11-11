
#include <iostream>
#include <vector>

void setPointerDefaults(int* p0, int* p1) {
    *p0 = -1;
    *p1 = -1;
}

int countDiff(int a, int b) {
    return a - b;
}

void printTab(int tab[], size_t size) {
    std::cout << "printing tab:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "item " << i << ": " << tab[i] << std::endl;
    }
}

int getElementsWithMinDiff(int tab[], size_t size, int* p0, int* p1) {
    int minDiff = INT_MAX;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int currentDiff = countDiff(tab[i], tab[j]);
            if (minDiff > currentDiff) {
                minDiff = currentDiff;
                *p0 = tab[i];
                *p1 = tab[j];
                if (minDiff == 0) {
                    return minDiff;
                }
            }
        }
    }
    return minDiff;
}

void printResults(int tab[], size_t size, int* p0, int* p1) {
    std::cout << "MinDiff: " << getElementsWithMinDiff(tab, size, p0, p1) << std::endl;
    std::cout << "1st item: " << *p0 << std::endl;
    std::cout << "2nd item: " << *p1 << std::endl;
    std::cout << std::endl;
}

int main()
{
    int x = 0;
    int y = 0;
    int* p0 = &x;
    int* p1 = &y;

    setPointerDefaults(p0, p1);
    int tab[] = { 1, 3, 9, 0, 17, 2, 9, 13, -11 };
    size_t size = 9;
    printTab(tab, size);
    printResults(tab, size, p0, p1);

    setPointerDefaults(p0, p1);
    int tab2[] = { 0, 1 };
    size_t size2 = 2;
    printTab(tab2, size2);
    printResults(tab2, size2, p0, p1);

    setPointerDefaults(p0, p1);
    int tab3[] = { 1, 11 };
    size_t size3 = 2;
    printTab(tab3, size3);
    printResults(tab3, size3, p0, p1);

    setPointerDefaults(p0, p1);
    int tab4[] = { 1, 1, 1, 1, 1, 1 };
    size_t size4 = 6;
    printTab(tab4, size4);
    printResults(tab4, size4, p0, p1);

}

/*
Napisz ciało funkcji o następującym prototypie:



int getElementsWithMinDiff(inttab[], size_tsize, int* p0, int* p1);



Parametr tab reprezentuje tablicę liczb całkowitych wraz z jej rozmiarem size. Funkcja ma zwrócić namniejszą różnicę 
wartości pomiędzy dwoma różnymi elementami tablicy, a parametry p0 i p1 mają posłużyć do zwrócenia wartości tych dwóch
elementów pomiędzy którymi ta różnica została wyznaczona. Wewnątrz funkcji możesz użyć funkcji abs z nagłówka cmath, 
pozwalającej na obliczenie wartości bezwzględnej dla wartości typu int. Możesz również założyć, że tablica posiada co 
najmniej dwa elementy.

*/
