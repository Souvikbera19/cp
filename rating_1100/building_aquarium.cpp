#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll>v(n);
        for(auto &x:v) cin >>x;
        ll low= 1;
        ll high = 1e18;
        ll ans=0;
        while(low<=high){
            ll mid = (low+high)/2;
            ll waterVol = 0;
            for(int i =0;i<n;i++){
                waterVol+=max(0ll,mid-v[i]);
                if(waterVol>=x) break;
            }
            if(waterVol>x){
                high=mid-1;
            }
            else{
                ans=mid;
                low=mid+1;
            }
        }
        cout << ans<< '\n';
    }

    return 0;
}