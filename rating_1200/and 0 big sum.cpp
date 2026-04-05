#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod =1e9+7;
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll ans = 1;
        for(int i= 0;i<k;i++){
            ans = (ans*n)%mod;
        }
        cout << ans << '\n';
    }

    return 0;
}