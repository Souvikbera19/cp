#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(auto &x: a) cin >> x;
    for(auto &x:b) cin >>x;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    ll score= 0;
    ll sword=0;
    for(int i =0;i<n;i++){
        sword+=b[i];
        if(sword>n) break;
        ll x = a[sword-1];
        ll val = x*(i+1);
        score=max(score,val);
    }
    cout << score << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}