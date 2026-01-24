#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll s,k,m;
        cin >> s >> k >> m;
        ll n = m/k;
        ll tl = m%k;
        ll ans ;
        if(n%2==0){
            ans=s;
        }
        else{
            ans = min(s,k);
        }

        ll val = min(0ll,ans-tl);
        cout << val << '\n';
    }

    return 0;
}