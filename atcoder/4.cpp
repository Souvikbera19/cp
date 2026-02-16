#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,q;
    cin >> n >> q;
    vector<ll>v(n+1);
    for(int i =1 ;i<=n;i++){
        cin >>v[i];
    }
    while(q--){
        ll type;
        cin >> type;
        if(type==1){
            ll x;
            cin >> x;
            swap(v[x],v[x+1]);
        }
        else if(type==2){
            ll l,r;
            cin >> l >> r;
            ll sum =0;
            for(int i =l;i<=r;i++){
                sum+=v[i];
            }
            cout << sum << '\n';
        }
    }
    


    return 0;
}