#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n>>k;
    ll sum = 0;
    vector<int>v(n);
    for(auto &x:v){
        cin >> x;
        sum +=x;
    }
    if(sum<k){
        cout << -1 << '\n';
        return;
    }
    if(sum==k){
        cout << 0 << '\n';
        return;
    }
    ll cnt = 0;
    ll l =0;
    ll currSum = 0;
    ll len = LLONG_MIN;
    for(int r= 0;r<n;r++){
        currSum+=v[r];
        if(currSum>k){
            currSum-=v[l++];
        }
        if(currSum==k){
            len=max(len,r-l+1);
        }
    }
    cout << n-len << '\n';

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