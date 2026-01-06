#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll a,b;
    cin >> a >> b;
    if(a%2==1 && b%2==1){
        cout << (a*b)+1 << '\n';
    }
    else if(a%2==0 && b%2==0){
        cout << (a*(b/2)) + 2 << '\n';
    }
    else if(a%2==1 && b%2==0){
        ll temp = b;
        ll i = b/2;
        ll ans = -1;
        ll sum = 0;
        while(i>1){
            if(b%i==0)sum = a*i + b/i;
            if(sum%2==0) ans = max(sum,ans);
            i /=2;
        }
        cout << ans << '\n';
    }
    else {
        cout << -1 << '\n';
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