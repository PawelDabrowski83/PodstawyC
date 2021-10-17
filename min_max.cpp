#include <iostream>
#include <vector>


void min_max(std::vector<int>& v, int& mn, size_t& in, int& mx, size_t& ix) {

    if (v.size() == 0) {
        return;
    }
    mn = v[0];
    in = 1;
    mx = v[0];
    ix = 1;

    for (int i = 0; i < v.size(); i++) {
        int current = v[i];
        if (current == mn) {
            in++;
        } else if (current < mn) {
            mn = current;
            in = 1;
        } 

        if (current == mx) {
            ix++;
        }
        else if (current > mx) {
            mx = current;
            ix = 1;
        }
    }
}


int main()
{
    std::vector<int> tab = { 99, 1, 1, 2, 3, 2, 5, 1, 0, 10, 0, 0, 10, 99, 17, -20, 3 };
    int mn = 0;
    size_t in = 0;
    int mx = 0;
    size_t ix = 0;
    min_max(tab, mn, in, mx, ix);
    std::cout << mn << " " << in << " " << mx << " " << ix << "\n";
}
