#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

const int N = 4e6 + 6;
vector<bool> is(N + 1, true);
void sieve() {
    for (int i = 2; i * i <= N; i++) {
        if (!is[i])
            continue;
        for (int j = i + i; j < N; j += i) {
            is[j] = false;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    if (n == 2) {
        cy;
        return;
    }
    if (is[n + 1]) {
        cy;
    } else
        cn;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}