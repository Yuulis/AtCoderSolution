#include <bits/stdc++.h>
using namespace std;

// ======================================== //

int main() {
    int A, B;
    cin >> A >> B;

    // 負数を含む場合
    int C = A / B - (A % B < 0);

    // cf. https://atcoder.jp/contests/abc239/editorial/3390 
}