#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll  lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / __gcd(a, b)) * b;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    vector<ll>g(n-1);
    for(int i =0;i<n-1;i++){
        g[i]=__gcd(a[i],a[i+1]);
    }
    ll cnt = 0;
    for(int i =0;i<n-1;i++){
        ll val;
        if(i==0)val=g[0];
        if(i==n-1) val = g[n-2];
        else val= lcm(g[i],g[i-1]);
        if(val<b[i]) cnt++;
    }
    cout << cnt << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}