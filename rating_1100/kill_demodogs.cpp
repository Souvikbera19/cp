#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD= 1e9+7;
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans= n%MOD;
        ans = ans*(n+1)%MOD;
        ans = ans*(4*n-1)%MOD;
        ans = ans*337%MOD;
        cout << ans << '\n';

    }

    return 0;
}