#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll ans= 0;
        ll min_val = INT_MAX;
        ll neg_cnt = 0;
        for(int i =0;i<n;i++){
            for(int i =0;i<m;i++){
                ll x;
                cin >> x;
                if(x<0) neg_cnt++;
                ans+=abs(x);
                min_val=min(min_val,abs(x));
            }
        }
        if(neg_cnt%2) cout << ans -2*min_val << '\n';
        else cout << ans << '\n';
    }

    return 0;
}