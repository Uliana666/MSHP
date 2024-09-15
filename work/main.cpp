#pragma GCC optimize("Ofast")

#include <numeric>

#include "bits/stdc++.h"

using namespace std;

template <typename A, typename B>
string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string &s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string)s); }

string to_string(char s) {
    string str(1, s);
    return str;
}
string to_string(bool b) { return (b ? "true" : "false"); }

string to_string(vector<bool> v) {
    bool first = true;
    string res = "{";
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(v[i]);
    }
    res += "}";
    return res;
}

template <size_t N>
string to_string(bitset<N> v) {
    string res = "";
    for (size_t i = 0; i < N; i++) {
        res += static_cast<char>('0' + v[i]);
    }
    return res;
}

template <typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for (const auto &x : v) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " +
           to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " +
           to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

#define sz(a) (ll)((a).size())
#define all(v) (v).begin(), (v).end()
#define rall(v) v.rbegin(), v.rend()
#define pikachu push_back
#define mp make_pair
#define st first
#define nd second
#define i128 __int128
// #define pt(s) (s)[sz((s)) - 2]
#define pll pair<ll, ll>
#define pii pair<int, int>

mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
template <class t1, class t2>
inline bool cmin(t1 &a, const t2 &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template <class t1, class t2>
inline bool cmax(t1 &a, const t2 &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef long double ld;

inline ull bpow(ull a, ull b, ull mod) {
    ull res = 1;
    for (; b; b >>= 1) {
        if (b & 1) {
            res = ((ull)res * a) % mod;
        }
        a = ((ull)a * a) % mod;
    }
    return res;
}

struct NegativeInfType;

struct PositiveInfType {
    static constexpr int int_inf = static_cast<int>(1e9 + 666);
    static constexpr ll ll_inf = (ll)3e18 + 666;

    operator int() const { return int_inf; }

    operator long long() const { return ll_inf; }

    NegativeInfType operator-() const;
} const INF;

struct NegativeInfType {
    operator int() const { return -(int)(INF); }

    operator long long() const { return -(long long)(INF); }
};

NegativeInfType PositiveInfType::operator-() const { return {}; }

template <class T>
bool operator==(T val, const PositiveInfType &inf) {
    return val == T(inf);
}

template <class T>
bool operator==(T val, const NegativeInfType &neg_inf) {
    return val == T(neg_inf);
}

#ifndef LOCAL
void UseFiles(const string &s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
#else
void UseFiles(const string &s) {}
#endif

void run();

signed main() {
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << setprecision(10) << fixed;  // #include<iomanip>
    run();
}

void run() {
    long double c = 46464646.1232136363;
    cout << c << endl;
}