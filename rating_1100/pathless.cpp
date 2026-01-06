#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        ll n,s;
        cin >> n >> s;
        vector<ll>v(3);
        for(int i =0;i<n;i++){
            ll x;
            cin >> x;
            v[x]++;
        }

        if(s==v[1]+2*v[2] || s>=v[1]+2*v[2]+2) cout << -1 << '\n';
        else{
            for(int i=0;i<v[0];i++) cout << 0 << ' ';
            for(int i =0;i<v[2];i++) cout << 2 << ' ';
            for(int i =0;i<v[1];i++) cout << 1 << ' ';
            cout << '\n';

        }   
    }
    return 0; 
}