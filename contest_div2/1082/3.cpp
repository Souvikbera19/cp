#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    ll cnt= 0;
    for(int i =0;i<n;){
        cnt++;
        ll val = v[i++];
        while(i<n&&v[i]<=v[i-1]+1)i++;
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