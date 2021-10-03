#include <iostream>

int main()
{
    int input;
    int recordNum = 0, recordSum = 0;
   

    do {
        std::cout << "Enter a natural number (0 if done)\n";
        std::cin >> input;
        int currentSum = 0;
        int currentNum = 0;
        currentNum = input;

        if (currentNum != 0) {
            while (currentNum > 9) {
                currentSum += currentNum % 10;
                currentNum /= 10;
            }
            currentSum += currentNum;
        }
        if (currentSum > recordSum) {
            recordSum = currentSum;
            recordNum = input;
        }
    } while (input != 0);

    std::cout << "Max sum of digits was " << recordSum << " for number " << recordNum << "\n";
    
}
