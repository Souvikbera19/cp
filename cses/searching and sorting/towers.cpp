#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){   
    ll n;
    cin >>n;
    multiset<ll>ms;
    for(int i =0;i<n;i++){
        ll k;
        cin >> k;
        ll cnt= 0;
        auto it = ms.upper_bound(k);
        if(it==ms.end()) ms.insert(k);
        else{
            ms.erase(it);
            ms.insert(k);
        }
    }
    cout << ms.size() << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}