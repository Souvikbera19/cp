#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());

    


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