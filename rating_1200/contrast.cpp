#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v)cin >> x;
    if(n==1){
        cout << 1 << '\n';
        return;
    }
    ll contrast = 0;
    for(int i =0;i<n-1;i++){
        contrast+=llabs(v[i]-v[i+1]);
    }
    if(contrast==0){
        cout << 1 << '\n';
        return;
    }
    unique(v.begin(),v.end());
    ll n = v.size();
    ll ans = n;
    for(int i =1;i<n-1;i++){
        if(((v[i-1]>v[i])&&(v[i]>v[i+1]))||((v[i-1]<v[i])&&(v[i]<v[i+1]))) ans--;
    }
    cout << ans << '\n';
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