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
        ll i =1;
        ll j = 2;
        ll ans = 1;
        ll count = 0;
        while(i!=n && j!=n){
            if(count%2==0){
                ans+=(i*j*1ll);
                i++;
                count++;
            }
            else{
                ans+=(1ll*i*j);
                j++;
                count++;
            }
        }
        ll ans = 1ll*2022*ans;
        cout << ans%MOD << '\n';

    }

    return 0;
}