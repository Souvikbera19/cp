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
        cin >> n >> k;
        vector<ll>v(n);
        for(auto &x:v)cin >> x;
        map<int,vector<ll>>mpp;
        for(int i =1;i<=k;i++){
            mpp[i].push_back(0);
        }
        for(int i =0;i<n;i++){
            mpp[v[i]].push_back(i+1);
        }
        for(int i =1;i<=k;i++){
            mpp[i].push_back(n+1);
        }
        ll ans = LLONG_MAX;
        for(auto it:mpp){
            vector<ll>diff;
            ll len = it.second.size();
            for(int i =0;i<len-1;i++){
                diff.push_back(it.second[i+1]-it.second[i]-1);
            }
            sort(diff.rbegin(),diff.rend());
            ll  maxGap=max(diff[0]/2,diff[1]);
            ans=min(ans,maxGap);
        }

        cout << ans << '\n';
    }

    return 0;
}