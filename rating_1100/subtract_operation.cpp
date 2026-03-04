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
        for(auto &x:v) cin >> x;
        map<ll,ll>mpp;
        for(int i =0;i<n;i++) mpp[v[i]]=i;
        bool cond = false;
        for(int i =0;i<n;i++){
            if(mpp.find(v[i]-k)!=mpp.end()){
                cond = true;
                break;
            }
            else mpp[v[i]]=i;
        }
        if(cond) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}