#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int exponent(ll n){
    return 31-__builtin_clz(n);
}
void solve(){
    ll n;
    cin >> n;
    n--;
    int k = exponent(n);
    vector<ll>ans;
    ll num = pow(2,k)-1;
    while(num>=0){
        ans.push_back(num);
        num--;
    }
    num = pow(2,k);
    while(num<=n){
        ans.push_back(num);
        num++;
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