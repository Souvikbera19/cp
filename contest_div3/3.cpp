#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n >> k;
    ll l = n;
    ll r= n;
    ll min = 0;
    while(r>=k){
        min++;
        ll l_new = n/2;
        ll r_new = (n+1)/2;

        l = l_new;
        r = r_new;

        if(l==k|| r==k){
            cout << min << '\n';
            return;
        }
    }
    cout << -1 <<'\n';
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