#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    vector<ll>freq( n+1,0);
    vector<vector<ll>>idx(n+1);
    for(int i =0;i<n;i++){
        freq[v[i]]++;
        idx[v[i]].push_back(i);
    }
    vector<ll>ans(n);
    ll x =0;
    for(int i =1;i<=n;i++){
        if(freq[i]==0) continue;
        if(freq[i]%i){
            cout << -1 << '\n';
            return;
        }
        for(int j=0;j<freq[i];j++){
            if(j%i==0)
                x++;
            ans[idx[i][j]]=x;
        }
    }
    for(auto it:ans) cout << it << ' ';
    cout << '\n'; 

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    

    return 0;
}