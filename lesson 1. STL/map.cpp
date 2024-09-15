#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    cout << "\033[1;36mMAP------------------------\033[0m\n";
    map<string, int> a;
    a["Hello"] = 2;
    a["STL"]++;  // По умолчанию 0
    a["8 800"] = 5553535;
    a["test"] = 0;

    cout << "Print a:\n";
    for (auto [key, val] : a) {
        cout << "(" << key << ", " << val << ") ";
    }
    // for (auto e: a){
    //     e.first, e.second;
    // }
    cout << endl;

    if (a.find("Hello") != a.end()) {
        cout << "Hello есть в a как ключ" << endl;
    }
    if (a.find("KEKEK") == a.end()) {
        cout << "KEKEK нет в a как ключ" << endl;
    }

    cout << "\033[1;36mUNORDERED MAP------------------------\033[0m\n";
    unordered_map<string, int> b;
    b["Hello"] = 2;
    b["STL"]++;  // По умолчанию 0
    b["8 800"] = 5553535;
    b["test"] = 0;

    cout << "Print b:\n";
    for (auto [key, val] : b) {
        cout << "(" << key << ", " << val << ") ";
    }
    cout << endl;

    if (b.find("Hello") != b.end()) {
        cout << "Hello есть в a как ключ" << endl;
    }
    if (b.find("KEKEK") == b.end()) {
        cout << "KEKEK нет в a как ключ" << endl;
    }
}