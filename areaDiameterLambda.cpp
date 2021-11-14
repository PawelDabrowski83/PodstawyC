#include <iostream>
#include <vector>
#include <functional>
#include <cmath>

struct Point {
    double x;
    double y;
};

struct Rect {
    Point leftTop;
    Point rightBottom;
};

double distanceX(Point source, Point target) {
    return abs(target.x - source.x);
}

double distanceY(Point source, Point target) {
    return abs(target.y - source.y);
}

double diameter(Point a, Point b) {
    return sqrt(pow(distanceX(a, b), 2) + pow(distanceY(a, b), 2));
}

std::vector<double> process(const Rect* rects, size_t sz, std::function<double(Rect)> f) {
    std::vector<double> answer;
    for (int i = 0; i < sz; i++) {
        answer.push_back(f(rects[i]));
    }
    return answer;
}

void printVector(std::vector<double> vect) {
    std::cout << "Printing vector: " << std::endl;
    for (int i = 0; i < vect.size(); i++) {
        std::cout << i << " " << vect[i] << std::endl;
    }
}



int main()
{
    Rect a{ Point{0, 4 }, Point{4,1} };
    Rect b{ Point{-6, 3}, Point{6, 2} };
    Rect c{ Point {-7, 4}, Point{8, -4} };
    Rect rects[] = { a, b, c };
    size_t size = 3;

    std::cout << "Call function 1: area " << std::endl;
    std::vector<double> result = process(rects, size, [](Rect r) -> double { return distanceX(r.rightBottom, r.leftTop) * distanceY(r.rightBottom, r.leftTop); });
    printVector(result);

    std::cout << "Call function 2: diameter " << std::endl;
    result.clear();

    result = process(rects, size, [](Rect r) -> double {return diameter(r.leftTop, r.rightBottom); });
    printVector(result);

}

