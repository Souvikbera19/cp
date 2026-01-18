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
        ll sum = 0;
        for(auto &x:v){
            cin >> x;
            sum+=x;
        }
        sort(v.begin(),v.end());
        ll l =0,r=n-1;
        while(k--){
            if(v[l]+v[l+1]<v[r]){
                sum-=(v[l]+v[l+1]);
                l+=2;
            }
            else{
                sum-=v[r];
                r--;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}