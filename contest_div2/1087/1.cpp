#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        ll n,c,k;
        cin >> n >> c >> k;
        vector<ll>v(n);
        for(auto &x:v)cin >> x;
        sort(v.begin(),v.end());
        for(int i =0;i<n;i++){
            if(v[i]<=c){
                ll filpflopreq = min(k,c-v[i]);
                c+=filpflopreq+v[i];
                k-=filpflopreq;
            }
        }
        cout << c << '\n';

    }

    return 0;
}