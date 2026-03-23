#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>x(n),y(n);
    for(auto &x:x)cin >> x;
    for(auto &x:y)cin >> x;
    vector<ll>diff(n);
    for(int i =0;i<n;i++) diff[i]=y[i]-x[i];
    sort(diff.begin(),diff.end());
    int cnt= 0;
    int l =0;
    int r= n-1;
    while (l<r)
    {
        if(diff[l]+diff[r]>=0){
            cnt++;
            l++;
            r--;
        }
        else l++;
    }
    cout << cnt << '\n';
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