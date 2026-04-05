#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll countPairs(vector<ll>&v,ll val){
    ll cnt =0;
    ll n= v.size();
    ll l =0;
    ll r = n-1;
    while(l<r){
        if(v[l]+v[r]<=val){
            cnt+=(r-l);
            l++;
        }
        else r--;
    }
    return cnt;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin >> n >> x >>y;
        ll sum =0;
        vector<ll>v(n);
        for(auto &x:v) {
            cin >> x;
            sum+=x;
        }
        sort(v.begin(),v.end());
        cout << countPairs(v,sum-x)-countPairs(v,sum-y-1) << '\n';

    }

    return 0;
}