#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i =0;i<n;i++) cin >> arr[i];
    for(ll x =2;x<894885955;x++){
        for(int i =0;i<n;i++){
            if(__gcd(arr[i],x)==1){
                cout << x << "\n";
                return;
            }
        }
    }
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}