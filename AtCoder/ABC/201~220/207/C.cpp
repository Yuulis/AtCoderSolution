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
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        int t, l, r;
        cin >> t >> l >> r;

        if (t == 1) a[i] = l * 2, b[i] = r * 2 + 1;
        else if (t == 2) a[i] = l * 2, b[i] = r * 2;
        else if (t == 3) a[i] = l * 2 + 1, b[i] = r * 2 + 1;
        else if (t == 4) a[i] = l * 2 + 1, b[i] = r * 2;
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int tempA = max(a[i], a[j]);
            int tempB = min(b[i], b[j]);

            if (tempA < tempB) cnt++;
        }
    }

    cout << cnt << endl;
}