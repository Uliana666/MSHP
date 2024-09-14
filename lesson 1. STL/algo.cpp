#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

using namespace std;

int main() {
    cout << "\033[1;36mVECTOR------------------------\033[0m\n";
    cout << "print a:\n";
    vector<int> a = vector<int>(5, -1);
    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;

    vector<vector<int>> a2 = vector<vector<int>>(2, vector<int>(3, 7));
    cout << "print a2:\n";
    for (int i = 0; i < a2.size(); ++i) {
        for (int j = 0; j < a2[i].size(); ++j) {
            cout << a2[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    vector<int> b = {1, 2, 3, 4, 5, 6};
    cout << "Массив b = {1, 2, 3, 4, 5, 6}\n\n";

    reverse(b.begin(), b.end());
    cout << "reverse:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl << endl;

    sort(b.begin(), b.end());
    cout << "sort:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl << endl;

    fill(b.begin(), b.end(), 55);
    cout << "fill 55:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl << endl;

    b = {1, 2, 3, 4, 5, 6};
    cout << "Массив b = {1, 2, 3, 4, 5, 6}\n\n";

    swap(b[2], b[4]);
    cout << "swap 2 and 4:\n";  // У нас 0 индексация!!
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl << endl;

    mt19937 gen(55);
    shuffle(b.begin(), b.end(), gen);
    cout << "shuffle:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl << endl;

    cout << "max_element: " << *max_element(b.begin(), b.end()) << endl;

    cout << "min_element: " << *min_element(b.begin(), b.end()) << endl;

    vector<int> c = vector<int>(5, 1e9);

    cout << "sum: ";

    // cout << accumulate(c.begin(), c.end(), 0) << endl;
    // cout << accumulate(c.begin(), c.end(), 0ll) << endl;

    c.resize(10);
    cout << "resize 10:\n";
    for (auto e : c) {
        cout << e << ' ';
    }
    cout << endl << endl;

    c.resize(2);
    cout << "resize 2:\n";
    for (auto e : c) {
        cout << e << ' ';
    }
    cout << endl << endl;

    cout << "\033[1;36mBIN SEARCH------------------------\033[0m\n";

    a = {1, 2, 3, 3, 3, 4, 5};

    cout << "a:\n";
    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl << endl;

    int ind_lower = lower_bound(a.begin(), a.end(), 3) - a.begin();
    int ind_upper = upper_bound(a.begin(), a.end(), 3) - a.begin();

    // ..._bound возвращает итератор!!!

    cout << ind_lower << ' ' << ind_upper << endl;

    // lower - самый левый <=
    // upper - самый левый >

    ind_lower = lower_bound(a.begin(), a.end(), 0) - a.begin();
    ind_upper = upper_bound(a.begin(), a.end(), 6) - a.begin();

    cout << ind_lower << ' ' << ind_upper << endl;
}