#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v)cin >>x;
    ll sum = accumulate(v.begin(),v.end(),0ll);
    map<ll,ll>mpp;
    for(auto it:v) mpp[it]++;
    if(2*sum%n!=0){
        cout << 0 << '\n';
        return;
    }
    ll cnt = 0;
    for(int i=0;i<n;i++){
        ll need = (2*sum)/n-v[i];
        if(mpp.count(need)){
            cnt+=mpp[need];
            //mpp[need]--;
        }
        if(need==v[i]) cnt-=1;
    }
    cout << cnt/2 << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}