#include <iostream>
#include <vector>


void min_max(std::vector<int> &v, int &mn, size_t &in, int &mx, size_t &ix) {
    int min = v[0];
    int min_count = 0;
    int max = v[0];
    int max_count = 0;

    for (int i = 0; i < v.size(); i++) {
        int current = v[i];
        if (current == min) {
            min_count++;
        } else if (current < min) {
            min = current;
            min_count = 1;
        } 

        if (current == max) {
            max_count++;
        }
        else if (current > max) {
            max = current;
            max_count = 1;
        }
    }

    mn = min;
    in = min_count;
    mx = max;
    ix = max_count;
}


int main()
{
    std::vector<int> tab = { 99, 1, 1, 2, 3, 2, 5, 1, 0, 10, 0, 0, 10, 99, 17 };
    int mn = 0;
    size_t in = 0;
    int mx = 0;
    size_t ix = 0;
    min_max(tab, mn, in, mx, ix);
    std::cout << mn << " " << in << " " << mx << " " << ix << "\n";
}
