#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    cout << "\033[1;36mSET------------------------\033[0m\n";
    set<int> a;
    a.insert(4);  // Добавление элемента
    a.insert(1);
    a.insert(100);
    a.insert(-1);
    a.insert(-1);

    cout << "Print a:\n";
    for (auto e : a) {
        cout << e << ' ';  // Каждый элемент в ОДНОМ экземпляре и сортирует
    }
    cout << endl;

    cout << "min element: " << *a.begin() << endl;
    cout << "second min element " << *(++a.begin()) << endl;
    cout << "max element: " << *(--a.end()) << endl;

    a.erase(a.begin());  // Удаление элемента с помощью итератора
    a.erase(100);  // Удаление элемента по значению

    cout << "Print a:\n";
    for (auto e : a) {
        cout << e << ' ';
    }
    cout << endl;

    cout << "\033[1;36mMULTISET------------------------\033[0m\n";
    multiset<int> b;
    b.insert(3);
    b.insert(3);
    b.insert(1);
    b.insert(99);
    b.insert(-1);
    b.insert(-1);

    cout << "Print b:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl;

    cout << "min element: " << *b.begin() << endl;
    cout << "second min element " << *(++b.begin()) << endl;
    cout << "max element: " << *(--b.end()) << endl;

    b.erase(3);           // Удалит все 3
    b.erase(b.find(-1));  // Удалит только одну штуку -1
    // b.find возвращает итератор

    cout << "Print b:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl;

    cout << "\033[1;36mUNORDERED SET------------------------\033[0m\n";
    unordered_set<int> c;
    c.insert(3);
    c.insert(3);
    c.insert(1);
    c.insert(99);
    c.insert(-1);
    c.insert(-1);

    cout << "Print c:\n";
    for (auto e : c) {
        cout << e << ' ';  // НЕ СОРТИРУЕТ
    }
    cout << endl;

    b.erase(-1);

    cout << "Print c:\n";
    for (auto e : b) {
        cout << e << ' ';
    }
    cout << endl;
}