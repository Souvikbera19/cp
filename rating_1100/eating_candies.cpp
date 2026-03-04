#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int  m = 1e9+7;
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        vector<ll>pref(n+1,0);
        for(int i =0;i<n;i++){
            pref[i+1]=pref[i]+v[i];
        }
        vector<ll>suff(n+1,0);
        suff[n]=v[n-1];
        for(int i =n-1;i>=1;i--){
            suff[i]=suff[i+1]+v[i-1];
        }
        //for(auto it:suff) cout << it << ' ';
        //cout << '\n';
        int l =1;
        int r= n;
        int ans = 0;
        while(l<r){
            if(pref[l]==suff[r]){
                ans = max(ans,l+n+1-r);
                l++;
                r--;
            }
            else if(pref[l]>suff[r])r--;
            else if(pref[l]<suff[r]) l++;
        }
        cout << ans << '\n';
    }

    return 0;
}