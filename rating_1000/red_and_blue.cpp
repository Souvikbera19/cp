#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll n;
        cin >> n;
        vector<ll>r(n);
        for(auto &x:r)cin >> x;
        ll m;
        cin >> m;
        vector<ll>b(m);
        for(auto &x:b)cin >> x;
        vector<ll>pref_r(n+1),pref_b(m+1);
        for(int i =0;i<n;i++){
            pref_r[i+1]=pref_r[i]+r[i];
        }
        for(int i =0;i<m;i++){
            pref_b[i+1]=pref_b[i]+b[i];
        }
        sort(pref_b.begin(),pref_b.end());
        sort(pref_r.begin(),pref_r.end());

        cout << max(0ll,pref_r[n]+pref_b[m]) << '\n';

    }
    

    return 0;
}