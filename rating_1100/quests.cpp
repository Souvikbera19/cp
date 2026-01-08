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
        vector<ll>a(n),b(n);
        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;

        ll ans =0;
        ll sum = 0;
        ll max_b = b[0];
        for(int i=0;i<min(n,k);i++){
            sum +=a[i];
            max_b=max(max_b,b[i]);
            ans =max(ans,sum+(k-i-1)*max_b);
        }

        cout << ans << '\n';
    }

    return 0;
}