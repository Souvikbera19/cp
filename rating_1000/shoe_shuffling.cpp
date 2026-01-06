#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    map<ll,ll>mpp;
    for(int i =0;i<n;i++){
        cin >> v[i];
        mpp[v[i]]++;
    }

    for(auto it:mpp){
        if(it.second==1){
            cout << -1 << '\n';
            return;
        }
    }
    vector<ll>ans;
    for(int i =0;i<n;i++) ans.push_back(i+1);
    for(int i =0;i<n-1;i++){
        if(v[i]==v[i+1]){
            swap(ans[i],ans[i+1]);
        }
    }

    for(auto it:ans) cout << it << ' ';
    cout << '\n';


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}