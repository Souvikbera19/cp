#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll>a(n);
    for(auto &x:v) cin >>x;
    for(auto &x:a) cin >> x;
    if(is_sorted(v.begin(),v.end())){
        cout << 1 << ' ' << n <<'\n';
        return;
    }
    int l =0;
    int r= 0;
    // first non same idx
    for(int i =0;i<n;i++){
        if(v[i]!=a[i]){
            l = i;
            break;
        }
    }
    //last non same idx
    for(int i = n-1;i>=0;i--){
        if(v[i]!=a[i]){
            r= i;
            break;
        }
    }
    // l--;
    while(l-1>=0){
        if(a[l-1]<=a[l]){
            l--;
        }
        else{
            //l++;
            break;
        }
    }
    // r++;
    while(r+1<n){
        if(a[r+1]>=a[r]){
            r++;
        }
        else{
            //r--;
            break;
        }
    }
    cout << l+1<< ' ' << r+1 << '\n';

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}