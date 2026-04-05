#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    vector<ll>prefMax(n);
    prefMax[0]=v[0];
    for(int i =1;i<n;i++){
        prefMax[i]=max(prefMax[i-1],v[i]);
    }
    int cnt =0;
    int idx= n-1;
    while(idx>=0){
        cnt++;
        int max_val = prefMax[idx];
        int last_idx = -1;
        for(int i = idx;i>=0;i--){
            if(v[i]==max_val){
                last_idx=i;
                break;
            }
        }
        idx = last_idx-1;
    }
    cout << cnt << '\n';
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