#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

constexpr double PI = 3.14159265358979;

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

// ======================================== //

int main() {
    ll A, B, K;
    cin >> A >> B >> K;

    if (K <= A)
        cout << A - K << " " << B << endl;
    else if (K - A <= B)
        cout << 0 << " " << B - (K - A) << endl;
    else
        cout << 0 << " " << 0 << endl;
}
