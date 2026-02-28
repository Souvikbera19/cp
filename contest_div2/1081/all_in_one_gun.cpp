#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,h,k;
    cin >> n >> h >> k;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    ll sum = accumulate(v.begin(),v.end(),0ll);
    ll rep = h/sum;
    h-=(rep)*sum;
    ll t= (n+k)*rep;
    if(h==0){
        cout << t-k << '\n';
        return;
    }
    else{
        ll curr = 0;
        vector<ll>max_dmg(n);
        vector<ll>min_dmg(n);
        min_dmg[0]=v[0];
        for(int i = 1;i<n;i++){
            min_dmg[i] = min(min_dmg[i-1],v[i]);
        }
        max_dmg[n-1] = v[n-1];
        for(int i = n-2;i>=0;i--){
            max_dmg[i]=max(max_dmg[i+1],v[i]);
        }

        for(int i = 0;i<n;i++){
            t++;
            curr +=v[i];
            ll val = curr;
            if(i<n-1&&max_dmg[i+1]>min_dmg[i]) val+=max_dmg[i+1]-min_dmg[i];
            if(val>=h){
                cout << t << '\n';
                return;
            }
        }
        cout << t << '\n';
        return;
    }
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