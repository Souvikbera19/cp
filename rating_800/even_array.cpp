#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v)cin >> x;
    if(n==1){
        if(v[0]%2){
            cout << -1<<'\n';;
            return;
        }
        else{
            cout << 0<<'\n';
            return;
        }
    }
    ll even_cnt = 0;
    ll odd_cnt =0;
    for(int i =0;i<n;i++){
        if(i%2!=v[i]%2){
            if(v[i]%2)odd_cnt++;
            else even_cnt++;
        }
    }
    if(odd_cnt==even_cnt){
        cout <<odd_cnt<<'\n';
    }
    else{
        cout << -1<<'\n';;
    }
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}