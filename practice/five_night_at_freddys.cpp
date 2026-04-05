#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,m,l;
        cin >> n >> m >> l;
        vector<ll> v(n);
        for(auto &x:v)cin >> x;
        ll idx =0;
        ll minSize= min(n+1,m);
        vector<ll>danger(minSize,0);
        for(int t=1;t<=l;t++){
            ++*min_element(danger.begin(),danger.end());
            // for(auto it:danger)cout << it << ' ';
            // cout << '\n';
            sort(danger.begin(),danger.end());
            if(idx<n&&v[idx]==t){
                idx++;
                danger.pop_back();
                minSize=min(m,n-idx+1);
                if(danger.size()>minSize) danger.resize(minSize);
                else{
                    while(danger.size()<minSize) danger.push_back(0);
                }
            }
        }

        cout << danger[0] << '\n';
        
    }

    return 0;
}