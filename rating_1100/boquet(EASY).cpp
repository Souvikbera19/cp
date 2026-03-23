#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll>v(n);
        for(auto &x:v)cin >> x;
        sort(v.begin(),v.end());
        int l =0;
        ll sum =0;
        ll ans= LLONG_MIN;
        for(int i =0;i<n;i++){
            sum+=v[i];
            while(l<=i&&(llabs(v[l]-v[i])>1||sum>m)){
                sum-=v[l];
                l++;
            }
            ans=max(ans,sum);
        }
        cout << ans << '\n';

    }
    return 0;
}