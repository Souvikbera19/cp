#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<pair<ll,ll>>v;
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        v.push_back({x,i});
    }

    sort(v.begin(),v.end());
    vector<ll>pref(n+1);
    for(int i =0;i<n;i++){
        pref[i+1] = pref[i]+v[i].first;
    }

    vector<ll>ans_idx(n);
    ans_idx[n-1] = n-1;
    for(int i = n-1;i>=1;i--){
        if(pref[i+1]-pref[i]<=pref[i]){
            ans_idx[i-1]= ans_idx[i];
        }
        else{
            ans_idx[i-1]=i-1;
        }
    }
    // for(auto it:ans_idx) cout << it << ' ';
    vector<ll>ans(n);
    for(int i =0;i<n;i++){
        ans[v[i].second] = ans_idx[i];
    }
    for(auto it:ans) cout << it << ' ';
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