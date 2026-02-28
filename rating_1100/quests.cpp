#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>a(n),b(n);
        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;

        vector<int>pref(n+1,0);
        for(int i = 1;i<=n;i++){
            pref[i]=pref[i-1]+a[i-1];
        }
        int max_val = b[0];
        int ans = a[0];
        for(int i =0;i<n;i++){
            if(k<=0) break;
            max_val = max(max_val,b[i]);
            int val = pref[i+1]+(--k)*max_val;
            ans = max(ans,val);
            
        }

        cout << ans << '\n';
    }

    return 0;
}