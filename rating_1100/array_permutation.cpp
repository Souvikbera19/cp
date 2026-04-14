#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FastAsFuck ios::sync_with_stdio(false); cin.tie(nullptr);

// -------------------- MATHEMATICAL UTILITIES --------------------

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll power(ll a, ll b, ll mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// -------------------- PRIME UTILITIES --------------------

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
    return primes;
}

// -------------------- SOLVE --------------------

bool solve() {
    int n;
    cin >> n;

    vector<int> p(n), a(n);
    for (auto &x : p) cin >> x;
    for (auto &x : a) cin >> x;

    map<int,int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[p[i]] = i;
    }

    for (int i = 0; i < n; i++) {

        if (mpp.find(a[i]) == mpp.end()) return false;

        int key = mpp[a[i]];

        if (a[i] == p[i]) continue;

        int l = min(i, key);
        int r = max(i, key);

        for (int j = l; j <= r; j++) {
            if (j < 0 || j >= n) return false;
            if (p[key] != a[j]) {
                return false;
            }
        }
    }
    return true;
}

// -------------------- MAIN --------------------

int main() {
    FastAsFuck;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        if(solve()){
            cout << "Yes\n";
        }
        else cout << "No\n";
    }

    return 0;
}