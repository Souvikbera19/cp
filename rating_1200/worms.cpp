#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll sum =0;
    vector<ll>v(n);
    for(auto &x:v){
        cin >>x;
    }
    vector<ll>pref(n+1,0);
    for(int i =0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    ll q;
    cin >> q;
    while(q--){
        ll worms;
        cin >> worms;
        ll idx = upper_bound(pref.begin(),pref.end(),worms)-pref.begin();
        cout << idx << '\n';
    }


    return 0;
}