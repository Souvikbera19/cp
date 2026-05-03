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

vector<ll> sieve(ll n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<ll> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
    return primes;
}

// -------------------- SOLVE --------------------

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll>c(n),w(m);
    for(auto &x:c)cin >> x;
    for(auto &x:w)cin >> x;
    ll minTime = *min_element(c.begin(),c.end());
    ll maxTime = *max_element(c.begin(),c.end());
    ll ans = max(maxTime,2*minTime);
    for(int x:w){
        if(x<=ans){
            cout << -1 << '\n';
            return;
        }
    }
    cout << ans << '\n';
}

// -------------------- MAIN --------------------

int main() {
    FastAsFuck;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();

    return 0;
}