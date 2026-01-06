#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> arr(n);
    for(int i = 0;i<n;i++){
        ll x;
        cin >> x;
        ll val = x%k;
        if(val==0) arr[i] = {k,i+1};
        else arr[i] = {val,i+1};
    }
    sort(arr.begin(),arr.end(),[&](pair<ll,ll>a,pair<ll,ll>b){
        if(a.first != b.first){
            return a.first>b.first;
        }
        return a.second < b.second;
    });
    for(auto it:arr){
        cout << it.second << " ";
    }
    cout <<'\n';

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