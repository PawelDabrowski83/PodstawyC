#include <iostream>
//#include <vector>

double getMin(double tab[], size_t size) {
    double minRecord = tab[0];
    for (int i = 1; i < size; i++) {
        double currentNum = tab[i];
        if (currentNum < minRecord) {
            minRecord = currentNum;
        }
    }
    return minRecord;
}

/*
void print(int tab[], size_t size) {

}
*/

int main()
{
    double arr[] = { 3.14, 2.0, 0.1 };

    std::cout << getMin(arr, 1);

  //  print(tab, std::size(tab));
    //std::vector<int> test = {1, 2, 3}
    // vector .size()
    // push_back - dodanie nowego elementu
    // pop_back - usunięcie ostatniego elementu
}
