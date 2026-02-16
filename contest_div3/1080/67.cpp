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
        // bool cond_1 = false;
        for(auto &x:v) cin >>x;
        bool cond_2 = false;
        for(int i =0;i<n;i++){
            // if(v[i]==1){
            //     cond_1=true;
            // }
            if(v[i]==67){
                cond_2=true;
            }
        }
        if(cond_2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}