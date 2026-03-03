#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(auto &x:v)cin >> x;
        int l =0;
        int r= n-1;
        int ans = INT_MIN;
        bool cond = false;
        while(l<=r){
            if(__gcd(v[l],v[r])==1){
                ans = max(ans,l+1+r+1);
                cond=true;
            }
            l++;
        }
        cout << (cond)?ans:-1 << '\n';
    }

    return 0;
}