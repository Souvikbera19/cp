#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t ;
    while(t--){
        ll n,c;
        cin >> n >> c;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        ll l =1,r=1e9,ans=-1;
        while(l<=r){
            ll m = l+(r-l)/2;
            ll sum = 0;
            for(int i =0;i<n;i++){
                sum+=(v[i]+2*m)*(v[i]+2*m);
                if(sum>c) break;
            }
            if(sum<=c){
                ans = m;
                l = m+1;
            }
            else{
                r =m-1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}