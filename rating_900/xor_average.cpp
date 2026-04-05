#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>ans(n);
    if(n&1){
        for(int i =0;i<n;i++)ans[i]=1;
    }
    else{
        for(int i =0;i<n-2;i++){
            ans[i]=2;
        }
        ans[n-2]=1;
        ans[n-1]=3;
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