#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll>v(n*k);
        for(auto &x:v) cin >> x;
        ll ptr = n*k;
        ll sum = 0;
        while(k--){
            ptr-=(n/2+1);
            sum+=v[ptr];
        }
        cout << sum << '\n';
    }

    return 0;
}