// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout << '\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &i : a)
//         cin >> i;
//     if (n & 1) {
//         cn;
//         return;
//     }
//     bool ok = false;
//     for (int i = 0; i < n - 1; i += 2) {
//         if (a[i] < a[i + 1]) {
//             ok = true;
//             break;
//         }
//     }
//   sort(a.begin(), a.end());
//     if (a[n / 2] - a[n / 2 - 1] > 1 && !ok)
//         cy;
//     else
//         cn;
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    if (n & 1) {
        cn;
        return;
    }
    int mx = LLONG_MIN, mn = LLONG_MAX;
    for (int i = 0; i < n - 1; i += 2) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i + 1]);
    }
    if (mn - mx > 1)
        cy;
    else
        cn;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}