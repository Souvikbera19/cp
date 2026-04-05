#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll>v(n),c(n);
        map<ll,ll>mpp;
        for(auto &x:v)cin >> x;
        for(int i =0;i<n;i++){
            cin >> c[i];
            mpp[v[i]]+=c[i];
        }

        ll ans= 0;
        for(auto &[x,cnt]:mpp){
            auto it =mpp.find(x+1);
            ll val = (it!=mpp.end())?it->second:0;
            ll k1 = min(cnt,m/x);
            ll k2= min(val,(m-k1*x)/(x+1));
            ll rem = m-(k1*x+k2*(x+1));
            ll swap_cnt = min({k1,rem,val-k2});
            ans = max(ans,k1*x+k2*(x+1)+swap_cnt);
        }

        cout << ans << '\n';
        
    }

    return 0;
}