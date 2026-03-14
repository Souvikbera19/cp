#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxheight = 1e9+7;
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll>v(n);
    for(auto &x:v)cin >> x;
    vector<ll>pref(n+1,0);
    for(int i =0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    vector<ll>max_heights;
    for(int i =0;i<n;i++){
        if(i==0) max_heights.push_back(v[i]);
        else max_heights.push_back(max(max_heights.back(),v[i]));
    }
    max_heights.push_back(maxheight);
    for(int i =0;i<k;i++){
        ll steps;
        cin >> steps;
        ll idx = upper_bound(max_heights.begin(),max_heights.end(),steps)-max_heights.begin();
        cout << pref[idx] << ' ';
    }
    cout << '\n';
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