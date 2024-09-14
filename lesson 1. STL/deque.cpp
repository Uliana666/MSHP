#include <deque>
#include <iostream>

using namespace std;

int main() {
    cout << "\033[1;36mDEQUE------------------------\033[0m\n";
    deque<int> a;
    a.push_back(5);
    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;

    a.push_front(-10);
    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;

    a.push_back(33);
    a.push_back(34);
    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;

    a.pop_back();
    a.pop_front();

    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;
}