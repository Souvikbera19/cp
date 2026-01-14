#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll>h(n);
        for(auto &x:h) cin >> x;
        ll in_ht = h[k-1];
        set<ll>s;
        for(auto &x:h){
            if(x>=in_ht) s.insert(x);
        }
        bool cond = true;
        ll prev = in_ht;
        for(auto x:s){
            if(x-prev>in_ht) cond = false;
            prev = x;
        }

        if(cond) cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }
    

    return 0;
}