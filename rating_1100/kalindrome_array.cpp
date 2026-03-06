#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll key,const vector<ll>&v){
    ll n = v.size();
    vector<ll>b;
    for(int i =0;i<n;i++){
        if(v[i]!=key) b.push_back(v[i]);
    }
    for(int i =0;i<b.size();i++){
        if(b[i]!=b[b.size()-i-1]) return false;
    }
    return true;
}
void solve() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        for(int i =0;i<n;i++){
            if(v[i]!=v[n-i-1]){
                if(check(v[i],v)||check(v[n-i-1],v)){
                    cout << "Yes\n";
                }
                else{
                    cout << "NO\n";
                }
                return;
            }
        }
        cout << "YES\n";
    }
}

int main(){
    solve();
    return 0;
}