#include <bits/stdc++.h>
using namespace std;
using ll= long long;
void solve(){
    int n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    sort(v.begin(),v.end());
    if(v[0]!=1){
        cout << "NO\n";
        return;
    }
    vector<ll>pref(n,0);
    pref[0]= v[0];
    for(int i =1;i<n;i++){
        pref[i]=pref[i-1]+v[i];
    }

    for(int i=1;i<=n-1;i++){
        if(pref[i-1]<v[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

    //for(auto it:pref) cout << it << ' ';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
        
    }
}