#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >>s;
    s +=s;
    n *=2;
    ll g_idx = -1;
    ll ans = INT_MIN;
    for(int i = n-1;i>=0;i--){
        if(s[i]=='g')
            g_idx = i;
        if(s[i]==c){
            ll diff = g_idx - i;
            ans = max(ans,diff);
        }
    }
    cout << ans <<'\n';

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