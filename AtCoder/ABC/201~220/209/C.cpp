#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    ll all = K / N;
    K %= N;

    vector<ll> order(N);
    iota(all(order), 0);
    sort(all(order), [&](const int& i, const int& j) {
        return a[i] < a[j];
    });

    vector<ll> ans(N, all);
    for (ll i = 0; i < K; i++) {
        ans[order[i]]++;
    }

    for (ll i = 0; i < N; i++) {
        cout << ans[i] << endl;
    }
}