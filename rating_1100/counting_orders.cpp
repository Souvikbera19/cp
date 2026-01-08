#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD (ll)(1e9+7);
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());

    ll ans = 1;
    for(int i =0;i<n;i++){
        ll temp = upper_bound(a.begin(),a.end(),b[i])-a.begin();
        ll count = a.size()-temp;
        ans = ans*max(count-i,0ll)%MOD;
    }
    cout << ans << '\n';

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