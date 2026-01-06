#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

using ll = long long;

int main() {
    fastio;
    int t ;
    cin >> t;   
    while (t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin >> arr[i];

        vector<pair<ll,ll>> r_v(n);
        for(ll i=0;i<n;i++) r_v[i]= {abs(arr[i]-x),arr[i]+x};
        ll count =0;
        ll l= r_v[0].first;
        ll r = r_v[0].second;
        ll v;
        if(arr[0]>x) v = l;
        else v = r;
        for(ll i =1;i<n;i++){
            l = max(l,r_v[i].first);
            r = min(r,r_v[i].second);
            if(l>r){
                count++;
                l = r_v[i].first;
                r = r_v[i].second;
            }
        }
        cout << count << endl;
    }

    return 0;
}
