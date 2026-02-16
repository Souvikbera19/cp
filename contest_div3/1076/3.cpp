#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,q;
    cin >> n>>q;
    vector<ll>a(n),b(n);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    vector<ll>mx(n+1,0);
    ll current_max=0;
    for(int i =n;i>=1;i--){
        current_max=max({current_max,b[i-1],a[i-1]});
        mx[i]=current_max;
    }

    vector<ll>pref(n+1,0);
    for(int i =1;i<=n;i++){
        pref[i]=pref[i-1]+mx[i];
    }
    while (q--)
    {
        /* code */
        ll l,r;
        cin >> l >> r;
        cout << pref[r]-pref[l-1] << ' ';
        
    }
    cout << '\n';
    
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