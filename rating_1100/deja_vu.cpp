#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        vector<ll>m(q);
        for(auto &x:m) cin >> x;
        for(int i =0;i<n;i++){
            if(v[i]%(1ll<<m[0])){
                v[i]+=1ll<<(m[0]-1);
            }
        }
        ll check = m[0];
        for(int i =1;i<q;i++){
            ll x = m[i];
            if(check<x&&check!=x){
               for(int j = 0;j<n;j++){
                    if(v[j]%(1ll<<x)==0){
                        v[j]+=1ll<<(x-1);
                    }
                }
                check=x;
            }
            else continue;
        }
        for(auto it:v) cout << it << ' ';
        cout << '\n';
    }

    return 0;
}