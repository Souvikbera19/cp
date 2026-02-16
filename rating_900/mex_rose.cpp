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
        cin >> n>>k;
        vector<ll>v(n+1,0);
        ll same_val=0;
        for(int i =0;i<n;i++){
            ll x;
            cin >> x;
            if(x==k)same_val++;
            v[x]++;
            
        }
        ll cnt=0;
        for(int i =0;i<k;i++){
            if(v[i]==0) cnt++;
        }
        cout << max(cnt,same_val) << '\n';
        
    }

    return 0;
}