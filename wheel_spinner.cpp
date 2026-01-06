#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        ll l,a,b;
        cin >> l >> a >> b;
        ll ans = INT_MIN;
        ll i = 1;
        while(i<=5000){
            ll val = a%l + (i*b)%l;
            if(val<l) ans = max(ans,val);
            i++;
        }
        cout << ans << "\n";
    }

    return 0;
}