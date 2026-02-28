#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    if(is_sorted(v.begin(),v.end())){
        cout << n << '\n';
        return;
    }
    else{
        cout << 1 << '\n';
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