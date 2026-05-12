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
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(auto &x:a)cin >> x;
    for(auto &x:b)cin >> x;
    // d_min vals
    for(int i =0;i<n;i++){
        auto it = *lower_bound(b.begin(),b.end(),a[i]);
        cout << it-a[i] << ' ';
    }
    cout << '\n';
    int r = n-1;
    vector<ll>ans(n);
    for(int i =n-1;i>=0;i--){
        ans[i]=b[r]-a[i];
        if(i>0&&b[i-1]<a[i]){
            r=i-1;
        }
    }
    for(auto it:ans)cout << it << ' ';
    cout << '\n';
    return;
}

// -------------------- MAIN --------------------

int main() {
    FastAsFuck;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}