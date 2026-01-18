#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n ;
        cin >> n;
        ll m = n*(n-1)/2;
        vector<ll>v(m);
        for(int i =0;i<m;i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());
        vector<ll>ans(n);
        for(int i =0;i<m;i+=--n){
            cout << v[i] << ' ';
        }
        cout << 1000000000 << '\n';
        

    }

    return 0;
}