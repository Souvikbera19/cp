#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        ll mx_idx,mn_idx;
        for(int i =0;i<n;i++){
            cin >> v[i];
            if(v[i]==1) mn_idx = i;
            if(v[i]==n) mx_idx = i;
        }
        swap(v[mx_idx],v[mn_idx]);
        for(auto it:v) cout << it << ' ';
        cout << '\n';
    }

    return 0;
}