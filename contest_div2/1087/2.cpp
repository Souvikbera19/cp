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
        for(auto &x:v)cin >> x;
        ll l =0;
        ll r= 0;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(v[i]<v[j]) l++;
                else if(v[i]>v[j])r++;
            }
            cout << max(l,r) << ' ';
        }
    }

    return 0;
}