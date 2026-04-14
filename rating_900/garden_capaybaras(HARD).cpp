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
    string s;
    cin >> s;
    int n = s.length();
    if(s[0]=='a'&&s[1]=='a'){
        cout << s[0] << ' ' << s[1] << ' ';
        for(int i =2;i<n;i++) cout << s[i];
        cout << '\n';
        return; 
    }
    if(s[0]=='b'&&s[1]=='b'){
        cout << s[0] << ' ' << s[1] << ' ';
        for(int i =2;i<n;i++) cout << s[i] ;
        cout << '\n';
        return;
    }
    if(s[0]=='a'&&s[1]=='b'){
        int idx=-1;
        for(int i =1;i<n;i++){
            if(s[i]=='a'){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            cout << s[0] << ' ' ;
            for(int i =1;i<n-1;i++) cout << s[i];
            cout << ' ' << s[n-1] << '\n';
            return;
        }
        else{
            cout << s[0] << ' ';
            for(int i=1;i<idx;i++) cout << s[i];
            cout << ' ';
            for(int i =idx;i<n;i++) cout << s[i];
            cout << '\n';
            return;
        }
    }
    if(s[0]=='b'&&s[1]=='a'){
        int idx=-1;
        for(int i =1;i<n;i++){
            if(s[i]=='b'){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            cout << s[0] << ' ' << s[1] << ' ';
            for(int i =2;i<n;i++) cout << s[i];
            cout << '\n';
            return;
        }
        else{
            cout << s[0] << ' ';
            for(int i=1;i<idx;i++) cout << s[i];
            cout << ' ';
            for(int i =idx;i<n;i++) cout << s[i];
            cout << '\n';
            return;
        }
    }

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