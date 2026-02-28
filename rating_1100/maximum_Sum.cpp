#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll>v(n);
        for(auto &x:v) cin >>x;
        sort(v.begin(),v.end());
        vector<ll>pref(n+1,0);
        for(int i = 0;i<n;i++){
            pref[i+1]=pref[i]+v[i];
        }
        ll ans = INT_MIN;
        for(int i = 0;i<=k;i++){
            ll val_1 = pref[i*2];
            ll val_2 = pref[n-k+i];
            ans=max(ans,val_2-val_1);
        }
        cout << ans << '\n';
    }

    return 0;
}