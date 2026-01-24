#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    ll min_val = LLONG_MAX;
    for(ll p:{2,3,5,7,9,11,13,17,19,23,29,31,37,41,43,47,53}){
        if(any_of(v.begin(),v.end(),[&p](ll x){return x%p;})){
            cout << p << '\n';
            break;  
        }
    }
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