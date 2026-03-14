#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>> n;
    vector<ll>v(n);
    map<ll,ll>mpp;
    for(int i =0;i<n;i++){
        cin >> v[i];
        mpp[v[i]]++;
    }
    ll cnt= 0;
    sort(v.begin(),v.end());
    for(int i =0;i<n;i++){
        ll val = v[i];
        bool cond=0;
        while(mpp.find(val)!=mpp.end()&&mpp[val]!=0){
            mpp[val]--;
            val++;
            cond=1;
        }
        if(cond)cnt++;
    }
    cout << cnt << '\n';
    
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    

    return 0;
}