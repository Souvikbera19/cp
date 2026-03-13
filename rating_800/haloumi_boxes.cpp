#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    if(is_sorted(v.begin(),v.end())){
        cout << "Yes\n";
        return;
    }
    if(k==1){
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    return;
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