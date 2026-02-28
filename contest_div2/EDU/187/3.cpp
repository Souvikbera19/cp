#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll s,m;
    cin >> s >> m;
    ll val = s%m;
    if(val>m){
        cout << -1 << '\n';
        return;
    }
    ll cnt  = (s+m-1)/m;
    cout << cnt << '\n';
    return;
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