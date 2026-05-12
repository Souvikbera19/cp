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
    string s,t;
    cin >> s >> t;
    map<char,int>mppS,mppT;
    for(char c:s) mppS[c]++;
    for(char c:t)mppT[c]++;
    string tNew ="";
    for(auto const &[key,val]:mppS){
        if(mppT[key]<val){
            // if cause runtime error for mpp[val]==0 
            cout << "Impossible\n";
            return;
        }
        else{
            mppT[key]-=val;
            // here mpp[key] might be -2 which cause error for +=string()has it gets negative arguments
            // cout << mppT[key] << ' ';
        }
    }
    for(auto const &[key,val]:mppT){
        tNew += string(val,key);
    }
    // for(char c:tNew) cout << c << ' ';
    // cout << '\n';

    int i = 0;
    int j = 0;
    string ans = "";
    while(i<s.size()&&j<tNew.size()){
        if(tNew[j]<s[i]){
            ans+=tNew[j];
            j++;
        }
        else if(s[i]<=tNew[j]){
            ans+=s[i];
            i++;
        }
    }
    while(i<s.size())ans+=s[i++];
    while(j<tNew.size())ans+=tNew[j++];
    cout << ans << '\n';

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