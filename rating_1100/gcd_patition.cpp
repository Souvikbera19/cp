#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x:v) cin >>x;
        vector<ll>pref(n+1,0);
        for(int i =0;i<n;i++){
            pref[i+1]=pref[i]+v[i];
        }
        ll ans=0;
        for(int i =1;i<n;i++){
            ll val = __gcd(pref[n]-pref[i],pref[i]);
            ans = max(ans,val);
        }
        cout << ans << '\n';
    }

    return 0;
}