#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    ll count = 0;
    vector<ll>arr;
    bool cond = false;
    for(int i = 1;i<19;i++){
        ll val = pow(10,i);
        if(n%(ll)(val+1)==0 && val+1<=n ){
            ll x = n/(val+1);
            arr.push_back(x);
            count++;
            cond  = true;

        }
    }
    reverse(arr.begin(),arr.end());
    if(cond){
        cout << count <<'\n';
        for(auto it:arr){
            cout << it << ' ';
        }
        cout << '\n';
    }
    else{
        cout << 0 << '\n';
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