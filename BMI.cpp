#include <iostream>

int main()
{
    std::cout << "Podaj wzrost w metrach i wage w kg aby policzyc BMI\n";
    double wzrost, waga;

    std::cout << waga << " " << wzrost << "\n";

    double bmi = waga / (wzrost * wzrost);

    std::cout << "BMI: " << bmi << "\n";
}
