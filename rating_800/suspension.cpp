#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FastAsFuck ios::sync_with_stdio(false); cin.tie(nullptr);

// -------------------- MATHEMATICAL UTILITIES --------------------

// GCD (Greatest Common Divisor)
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM (Least Common Multiple)
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Fast Exponentiation (a^b % mod)
ll power(ll a, ll b, ll mod) {
    ll result = 1;
    while (b > 0) {
        if (b & 1) result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}

// -------------------- PRIME UTILITIES --------------------

// Check if a number is prime (O(sqrt(n)))
bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Sieve of Eratosthenes: All primes from 1 to n
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

// -------------------- SOLUTION FUNCTION --------------------

void solve() {
    ll n;
    cin >> n ;
    ll r,y;
    cin >> y >> r;
    ll cnt =0;
    cnt+=min(n,r);
    ll rem = max(0ll,n-r);
    cnt+=min(rem,y/2);
    cout << cnt << '\n';
}

// -------------------- MAIN FUNCTION --------------------

int main() {
    FastAsFuck;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}