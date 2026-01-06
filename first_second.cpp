#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    ll sum = 0;
    for(int i =1;i<n;i++){
        sum -= v[i];
    }
    ll curr_sum = sum + v[0] + v[1];
    ll ans = max(sum,curr_sum);
    for(int i =2;i<n;i++){
        curr_sum += abs(v[i-1])+v[i];
        ans = max(ans,curr_sum);

    }
    cout << ans <<'\n';

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {   
        solve();
    }
    

    return 0;
}