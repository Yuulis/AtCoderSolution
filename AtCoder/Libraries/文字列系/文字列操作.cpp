#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    reverse(S.begin(), S.end());  // 文字列を反転

    sort(S.begin(), S.end());  // 文字列を辞書順にソート

    // Sの各文字を辞書順に並べる
    // e.g. S = abcd
    // => abcd, abdc, acbd ... dcba
    while (true) {
        next_permutation(S.begin(), S.end());
        prev_permutation(S.begin(), S.end());  // next_permutationの逆
    }
    cout << S << endl;

    // 大文字判定
    char s;
    if (isupper(s)) cout << "大文字" << endl;

    // Sの2文字目から5文字
    S.substr(2, 5);

    // Sの4文字目から最後まで
    S.substr(4);
}