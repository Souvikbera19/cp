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
        if(n%2==0) cout << n/2 << ' ' << n/2 <<'\n';
        else{
            ll ans = 1;
            for(ll i =2;i*i<=n;i++){
                if(n%i==0){
                    ans = n/i;
                    break; 
                }
            }
            cout << ans << ' ' << n-ans << '\n';
        }
    }

    return 0;
}