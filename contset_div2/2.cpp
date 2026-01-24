#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    ll zero_cnt = 0;
    ll cnt = 0;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        if(x==0)zero_cnt++;
        if(x==1) cnt++;
    }
    if(zero_cnt==0) cout << "NO" << '\n';
    else if(zero_cnt>1 &&cnt==0) cout << "NO" << '\n';
    else {
        cout <<"YES" << '\n';
    }

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