#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll k,x;
    cin >> k >> x;
    ll total_cake = 1ll<<k;
    if(x==pow(2,k)){
        cout << 0 << '\n';
        return;
    }

    ll y = 2*total_cake-x;
    vector<ll>ans;
    while(x!=total_cake){
        if(x>y){
            ans.push_back(2);
            y*=2;
            x=2*total_cake-y;
        }
        else if(x<y){
            ans.push_back(1);
            x*=2;
            y=2*total_cake-x;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() << '\n';
    for(auto it:ans) cout << it << ' ';
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