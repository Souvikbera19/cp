#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    for(ll i =0;i<n;i++){
        ll x;
        cin >> x;
        cout << n+1-x << " ";
    }
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