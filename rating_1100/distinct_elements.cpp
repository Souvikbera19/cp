#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i =0;i<n;i++)cin >>v[i];
    vector<ll>ans(n);
    ans[0]=1;
    ll cnt = 1;
    for(int i =1;i<n;i++){
        ll idx = i+1;
        ll diff = v[i]-v[i-1];
        if(idx==diff) ans[i]=++cnt;
        else ans[i]=ans[i-diff];
    }
    for(auto it:ans)cout << it <<' ';
    cout <<'\n';
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