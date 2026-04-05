#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){   
    ll n,h;
    cin >> n >> h;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    ll low = 1;
    ll high= 1e18;
    ll ans = 0;
    while(low<=high){
        ll mid = (low+high)/2;
        ll time = mid;
        for(int i =0;i<n-1;i++){
            if(time>=h) break;
            time+=min(mid,v[i+1]-v[i]);
            
        }
        if(time>=h){
            ans=mid;
            high=mid-1;
        }
        else low= mid+1;
    }   
    cout << ans   << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();

    }
    return 0;
}