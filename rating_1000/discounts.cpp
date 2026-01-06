#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n>>k;
    vector<ll>a(n),b(k);
    ll sum =0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(int i =0;i<k;i++) cin >> b[i];

    sort(a.begin(),a.end());
    // reverse(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll idx = n;
    for(int i =0;i<k;i++){
        idx -=b[i];
        if(idx>=0) sum -=a[idx];
       
    }
    cout << sum <<'\n';

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