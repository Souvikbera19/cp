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
bool check(ll mid,vector<pair<ll,ll>>&v){
    ll lvl = mid;
    for(auto &[req,final]:v){
        if(lvl<req) return false;
        
        lvl+=final;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>>v;
    for(int i =0;i<n;i++){
        ll k;
        cin >> k;
        ll need = 0;
        for(int j =0;j<k;j++){
            ll st;
            cin >> st;
            need=max(need,st-j+1);
        }
        v.push_back({need,k});
    }
    sort(v.begin(),v.end());
    ll lo =1;
    ll hi = 1e18;
    ll ans=hi;
    while(lo<=hi){
        ll mid = (lo+hi)/2;
        if(check(mid,v)){
            ans=mid;
            hi=mid-1;
        }
        else lo = mid+1;
    }
    cout<< ans << '\n';
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