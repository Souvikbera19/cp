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
    ll n,k;
    cin >> n >> k;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    if(k==1){
        cout << *min_element(v.begin(),v.end())<< '\n';
        return;
    }
    if(k>2){
        cout << *max_element(v.begin(),v.end())<<'\n';
        return;
    }
    ll check = *max_element(v.begin(),v.end());
    if(v[0]==check||v[n-1]==check){
        cout << check << '\n';
        return;
    }
    vector<ll>prefMax(n);
    prefMax[0]=v[0];
    for(int i =1;i<n;i++){
        prefMax[i]=min(prefMax[i-1],v[i]);
    }
    cout << max(prefMax[0],prefMax[n-1]) << '\n';

}

// -------------------- MAIN --------------------

int main() {
    FastAsFuck;

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    solve();

    return 0;
}