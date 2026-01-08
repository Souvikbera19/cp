#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    sort(v.begin(),v.end());
    if(v[0]!=1){
        cout << "NO" << '\n';
        return;
    }
    bool cond = true;
    ll val = v[0];
    for(int i =1;i<n;i++){
        if(val<v[i]){
            cond = false;
            break;
        }
        val+=v[i];
    }
    if(cond) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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