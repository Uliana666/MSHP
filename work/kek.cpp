#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n);
    for (auto& e : a) cin >> e;
    auto comp = [&](int a, int b) {
        if (a % p < b % p) {
            return true;
        }
        if (a % p > b % p) {
            return false;
        }
        return a < b;
    };

    sort(a.begin(), a.end(), comp);

    for (auto i : a) cout << i << ' ';
    cout << endl;
}
