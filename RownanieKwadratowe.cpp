#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Podaj wspolczynniki: a, b, c:\n";
    int a, b, c;
    std::cin >> a >> b >> c;

    int delta = b * b - 4 * a * c;
    
    double root1, root2;

    if (delta < 0) {
        std::cout << "Rownanie nie ma pierwiastkow rzeczywistych.\n";
    }
    else {
        if (delta == 0) {
            // jeden pierwiastek
            root1 = b * -1 / (2 * a);
            std::cout << "Jeden pierwiastek: " << root1 << "\n";
        }
        else {
            // dwa pierwiastki
            double deltaPierw = sqrt(delta);
            root1 = (b * -1 - deltaPierw) / (2 * a);
            root2 = (b * -1 + deltaPierw) / (2 * a);
            std::cout << "x1 = " << root1 << "\n";
            std::cout << "x2 = " << root2 << "\n";
        }
    }

    std::cout << "Delta: " << delta;
}
