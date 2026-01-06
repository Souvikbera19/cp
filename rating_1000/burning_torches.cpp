#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ciel_val(ll a,ll b){
    return (a+b-1)/ b;   
}
void solve(){
    ll x,y,k;
    cin >> x >> y >> k;
    ll total = (y*k)+k-1;
    ll stick_trades = ciel_val(total,x-1);
    cout << stick_trades + k << "\n";
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