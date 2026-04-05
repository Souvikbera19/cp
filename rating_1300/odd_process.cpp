#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll sum =0;
    for(auto &x:v){
        cin >> x;
        sum+=x;
    }
    vector<ll>even,odd;
    for(ll x:v){
        if(x&1)odd.push_back(x);
        else even.push_back(x);
    }
    if(odd.size()==0){
        for(int i =0;i<n;i++) cout << 0 << ' ';
        cout <<'\n';
        return;
    }
    if(even.size()==0){
        sort(odd.rbegin(),odd.rend());
        ll oddAns = 0;
        for(int i =0;i<n;i++){
            oddAns +=odd[i];
            cout << oddAns << ' ';
        }
        cout << '\n';
        return;
    }
    sort(even.rbegin(),even.rend());
    sort(odd.begin(),odd.end());
    vector<ll>ans(n+1);
    vector<ll>prefEven(even.size()+1);
    for(int i =0;i<even.size();i++){
        prefEven[i+1]=prefEven[i]+even[i];
    }
    vector<ll>ans(n+1);
    ans[1]=odd.back();
    for(int k =2;k<=n;k++){
        if(even.size()<k-1){
            ans[k]=ans[k-2];
        }
        else{
             ans[k]= odd.back()+prefEven[k-1];
        }
    }
    if(!sum&1){
        ans[n]=0;
    }

    for(int i =0;i<n;i++){
        cout << ans[i] << ' ';
    }
    cout << '\n';

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