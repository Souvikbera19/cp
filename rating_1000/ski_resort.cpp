#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n,k,q;
        cin >> n >> k >> q;
        vector<ll>arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<ll>segments;
        ll count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=q) count++;
            else{
                if(count!=0){
                    segments.push_back(count);
                    count = 0;
                }
                
            }
        }
        segments.push_back(count);
        if(segments.empty()) cout << 0 <<endl;
        else{
            ll ways = 0;
            for(auto it:segments){
                if(it>=k){
                    ll val = it - k + 1;
                    ways += ((val)*(val + 1))/2;
                }
            }
            cout << ways << endl;
        }

    }
    return 0;
}