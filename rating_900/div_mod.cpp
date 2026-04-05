#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll l,r,a;
    cin >> l >> r>>a;
    if(a==1){
        cout <<r << '\n';
        return;
    }
    ll val = r/a;
    ll ans= r/a+r%a;
    ll check = (r/a-1)+(a-1);
    ans=max(ans,check);
    cout << ans << '\n';

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        solve();
    }

    return 0;
}