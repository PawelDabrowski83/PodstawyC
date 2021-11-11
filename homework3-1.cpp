#include <iostream>
#include <vector>

void swapItems(std::vector<double>& arr, int source, int target) {
    double temp = arr[source];
    arr[source] = arr[target];
    arr[target] = temp;
}

void sortVector(std::vector<double>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            swapItems(arr, i, i - 1);
            i = 0;
        }
    }

}

void ord3(double& a, double& b, double& c) {
    std::vector<double> sorted = { a, b, c };
    sortVector(sorted);
    a = sorted[0];
    b = sorted[1];
    c = sorted[2];
}

void ord3(double* a, double* b, double* c) {
    ord3(*a, *b, *c);
}

void initializeVariables(double& a, double& b, double& c) {
    a = 10;
    b = 3.17;
    c = -19.101;
}

void printVariables(double& a, double& b, double& c) {
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;
}

int main()
{
   
    double a, b, c;
    initializeVariables(a, b, c);
    ord3(a, b, c);
    printVariables(a, b, c);

    std::cout << "==" << std::endl;

    initializeVariables(a, b, c);
    double* pa = &a;
    double* pb = &b;
    double* pc = &c;
    ord3(pa, pb, pc);
    printVariables(*pa, *pb, *pc);

     
}
/*
Napisz ciało dwóch funkcji o następujących prototypach:



void ord3(double& a, double& b, double& c);

void ord3(double* a, double* b, double* c);



funkcje powinny pobrać, odpowiednio poprzez referencje i poprzez wskaźniki, trzy zmienne typu double, posortować je w
porządku rosnącym (tak aby zmiana wartości tych zmiennych była również widoczna poza tymi funkcjami) oraz wypisać
wartości tych zmiennych.
*/
