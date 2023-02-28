//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

#define besmellah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int OO = 0x3f3f3f3f;
const ll LOO = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1e9 + 7;
const ll N = 1e5;
const double EPS = 1e-6;
#define M_PI 3.14159265358979323846
#define all(a)  a.begin(),a.end()
#define endl '\n'

int lg(int n) { return 31 - __builtin_clz(n); }

const int dx[] = {+0, +0, +1, -1, +1, -1, +1, -1};
const int dy[] = {+1, -1, +0, +0, +1, -1, -1, +1};
int knightDx[] = {+1, -1, +2, +2, -2, -2, +1, -1};
int knightDy[] = {+2, +2, +1, -1, +1, -1, -2, -2};
#define int long long


signed main() {
    besmellah
//Sky is the limit ❤
#ifdef CLION
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen("", "r", stdin);
#endif
    int T = 1;
    //cin >> T;
//remember data type long long or int
    while (T--) {
        int n;
        cin >> n;
        set<int> s;
        map<int, tuple<int, int, int>> mp;
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            int ch, x;
            cin >> ch >> x;
            if (ch == 1) {
                sum += x;
                s.insert(x);
                mp[i] = {*s.begin(), *--s.end(), sum};
            } else if (ch == 2) {
                cout << get<1>(mp[x - 1]) << endl;
                mp[i] = {*s.begin(), *--s.end(), sum};
            } else if (ch == 3) {
                cout << get<0>(mp[x - 1]) << endl;
                mp[i] = {*s.begin(), *--s.end(), sum};
            } else if (ch == 4) {
                cout << get<2>(mp[x - 1]) << endl;
                mp[i] = {*s.begin(), *--s.end(), sum};
            }

        }
    }
//remember data type long long or int

}
