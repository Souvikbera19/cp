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
        for(auto &x:v) cin >> x;
        ll l =0;
        ll r = 0;
        ll ans = LLONG_MIN;
        ll sum = 0;
        while(r<n){
            if(sum<0) sum =0;
            if(l<r){
                if(abs(v[r-1])%2!=abs(v[r])%2){
                    sum +=v[r];
                }
                else{
                    l=r;
                    sum = v[r];
                }
            }
            else{
                sum = v[r];
            }
            ans = max(ans,sum);
            r++;
        }
        cout << ans << '\n';
    }

    return 0;
}