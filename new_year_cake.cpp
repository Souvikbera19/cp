#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll simulate(ll a,ll b){
    ll layer_1 = 1;
    ll layer_2 = 0;
    ll ans = 0;
    while(true){
        if(a<layer_1) break;
        a-=layer_1;
        ans++;
        layer_2 = layer_1*2;
        if(b<layer_2) break;
        b-=layer_2;
        ans++;
        layer_1 = layer_2*2;
    }
    return ans;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll a,b;
       cin >> a >> b;
       ll ans = max(simulate(a,b),simulate(b,a));
       cout << ans <<'\n';
    }

    return 0;
}