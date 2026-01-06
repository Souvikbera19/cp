#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n,h;
        cin >> n >> h;
        ll l_h =h ,u_h =h;
        bool cond = true;
        ll prev_t = 0;
        for(ll i=0;i<n;i++){
            ll t,l,u;
            cin >> t >> l >> u;
            ll dt = t-prev_t;
            l_h -=dt;
            u_h += dt;
            l_h = max(l_h,l);
            if(l_h>u_h){
                cond = false;
            }
            prev_t = t;
        }
        if(cond) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}