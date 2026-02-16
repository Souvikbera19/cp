#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll divide(ll n){
    while(n%2==0){
        n/=2;
    }
    return n;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n+1);
    for(int i =1;i<=n;i++){
        cin >> v[i];
    }

    for(int i =1;i<=n;i++){
        if(divide(v[i])!=divide(i)){
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';

    
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        solve();

    }

    return 0;
}