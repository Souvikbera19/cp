#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    ll gcd_odd=0,gcd_even=0;
    for(int i =0;i<n;i++){
        if(i&1){
            gcd_odd = __gcd(v[i],gcd_odd);
        }
        else{
            gcd_even=__gcd(v[i],gcd_even);
        }
    }

    bool cond= 1;
    for(int i =0;i<n;i+=2){
        if(v[i]%gcd_odd==0){
            cond=0;
            break;
        }
    }
    if(cond){
        cout << gcd_odd << '\n';
        return;
    }

    cond=1;
    for(int i =1;i<n;i+=2){
        if(v[i]%gcd_even==0){
            cond=0;
            break;
        }
    }

    if(cond){
        cout << gcd_even << '\n';
    }
    else cout << 0 << '\n';

    

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