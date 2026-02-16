//in the name of senku
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >>n;
    vector<ll>v(n);
    for(auto &x:v) cin >>x;
    ll i =0;
    while(i<n && v[i]==n-i) i++;
    if(i<n){
        ll val = n-i;
        ll j = i;
        while(v[j]!=val)j++;
        reverse(v.begin()+i,v.begin()+j+1);
    }
    for(auto it:v) cout << it << ' ';
    cout << '\n';


    
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    

    return 0;
}