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
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        int ans = 0;
        for(int i =0;i<n/2;i++){
            ans = __gcd(ans,abs(v[i]-v[n-i-1]));
        }
        cout << ans << '\n';
    }

    return 0;
}