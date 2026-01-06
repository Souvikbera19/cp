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
        vector<pair<ll,ll>>max_a(n),max_b(n),max_c(n);
        for(int i =0;i<n;i++){
            ll a;
            cin >> a;
            max_a[i] = {a,i};
        }

        for(int i =0;i<n;i++){
            ll b;
            cin >> b;
            max_b[i] = {b,i};
        }

        for(int i =0;i<n;i++){
            ll c;
            cin >> c;
            max_c[i] = {c,i};
        }
        ll ans = LLONG_MIN;
        sort(max_a.rbegin(),max_a.rend());
        sort(max_b.rbegin(),max_b.rend());
        sort(max_c.rbegin(),max_c.rend());

        for(int i =0;i<n and i<3;i++){
            for(int j =0;j<n and j<3;j++){
                for(int k =0;k<n and k<3;k++){
                    ll x = max_a[i].first;
                    ll y = max_b[j].first;
                    ll z = max_c[k].first;
                    ll idx_x = max_a[i].second ,idx_y = max_b[j].second,idx_z = max_c[k].second;
                    if(idx_x==idx_y || idx_y==idx_z || idx_x==idx_z) continue;
                    ans = max(ans,x+y+z);
                }
            }
        }

        cout << ans << '\n';



    }

    return 0;
}