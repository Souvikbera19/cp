#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,t;
    cin >> n >> t;
    vector<ll>k(n);
    for(auto &x:k) cin >>x;
    ll low= 1;
    ll high= 1e18;
    ll ans =0;
    while(low<=high){
        ll mid = (low+high)/2;
        ll cnt = 0;
        for(int i =0;i<n;i++){
            cnt+=mid/k[i];
            if(cnt>=t) break;
        }
        if(cnt>=t){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout << ans << '\n';

    return 0;
}