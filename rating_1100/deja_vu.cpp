#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll powerof2(ll n){
    ll val = 1;
    while(n>0){
        val*=2;
        n--;
    }
    return val;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>a(n),x(q);
        for(auto &x:a) cin >>x;
        for(auto &x:x) cin >> x;
        ll check = 31;
        for(int i =0;i<q;i++){
            if(x[i]>=check) continue;
            ll val = powerof2(x[i]);
            for(int j =0;j<n;j++){
                if(a[j]%val==0){
                    a[j]+=(val/2);
                }
            }
            check=x[i];
        }

        for(auto it:a) cout << it << ' ';
        cout << '\n';

    }

    return 0;
}