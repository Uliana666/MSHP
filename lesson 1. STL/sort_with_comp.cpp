#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

using namespace std;

bool comp(int x, int y) { return abs(x) < abs(y); }

int main() {
    vector<int> a = {0, 1, -3, 4, 6, -7, -10, 2, 20};
    sort(a.begin(), a.end(), comp);

    // std::sort(a.begin(), a.end(),
    //           [&](int a, int b) { return abs(a) < abs(b); });

    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;
}