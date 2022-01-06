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
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    for (int i = 0; i < N; i++) cin >> H[i];

    sort(H.begin(), H.end());
    reverse(H.begin(), H.end());

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        if (K > 0)
            K--;
        else {
            ans += H[i];
        }
    }

    cout << ans << endl;
}