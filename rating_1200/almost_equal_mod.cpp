#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        ll ans=0;
        for(auto &x:v)cin >> x;
        for(int i=1;i<=60;i++){
            ll k = 1ll<<i;
            set<ll>val;
            for(int j =0;j<n;j++){
                val.insert(v[j]%k);
            }
            if(val.size()==2){
                ans=k;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}