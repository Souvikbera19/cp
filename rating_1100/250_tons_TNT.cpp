#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        vector<ll> chunk;
        for(int i = 1;i<n;i++){
            if(n%i==0) chunk.push_back(i);
        }

        vector<ll>pref(n+1,0);
        for(int i = 0;i<n;i++){
            pref[i+1] = pref[i]+v[i];
        }
        ll ans = 0;
        for(int k : chunk){
            ll max_val = LLONG_MIN;
            ll min_val = LLONG_MAX;
            for(int i = 0;i<n;i+=k){
                ll  val = pref[i+k]-pref[i];
                max_val=max(max_val,val);
                min_val = min(min_val,val);
            }
            ans=max(ans,max_val-min_val);
        }

        cout << ans << '\n';
    }

    return 0;
}