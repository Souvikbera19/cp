#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >>n ;
    if(n<10 && n%2==0){
        cout <<-1 << '\n';
        return;
    }
    vector<ll>v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    if((v[v.size()-1])%2){
        cout << 0 << '\n';
        return;
    }
    bool is_odd = 0;
    for(int i  =0;i<v.size();i++){
        if(v[i]%2){
            is_odd=1;
            break;
        }
    }
    if(is_odd){
        cout << 1 << '\n';
        return;
    }
    else{
        bool cond = 0;
        for(int i =0;i<v.size()-1;i++){
            if(v[i]>v[v.size()-1]) cond=1;
        }
        if(cond){
            cout << 2 << '\n';
        }
        else cout << 3 << '\n';
    }
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
