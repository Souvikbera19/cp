#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n >> k;
    set<ll>s;
    for(int i =0;i<n;i++){
        ll x;
        cin >> x;
        s.insert(x);
    }
    bool cond =0;
    for(auto it:s){
        // find if a value a[i]-k exists
        if(s.find(it-k)!=s.end()){
            cond=1;
            break;
        }
    }
    if(cond) cout << "YES"  << '\n';
    else cout << "NO" << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}