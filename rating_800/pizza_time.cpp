#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll temp = n;
        ll ans = 0;
        while(temp>=3){
            ll val = temp/3;
            ans += val;
            temp -= (val)*2;
        }
        cout << ans <<endl;

    }

    return 0;
}