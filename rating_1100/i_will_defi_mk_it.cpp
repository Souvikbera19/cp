#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll>heights(n);
    for(auto &x:heights)cin >> x;
    ll intialHeight = heights[k-1];
    set<ll>reqHeights;
    for(auto &x:heights){
        if(x>=intialHeight) reqHeights.insert(x);
    }
    if(heights.size()==0){
        cout << "Yes\n";
        return;
    }
    ll waterLevel = 1;
    ll prevHeight = intialHeight;
    bool cond = true;
    for(auto it:reqHeights){
        ll time= it-prevHeight;
        if(prevHeight<waterLevel+time-1){
            cond = false;
            break;
        }
        waterLevel+=time;
        prevHeight=it;
    }
    if(cond)cout << "Yes\n";
    else cout << "No\n";
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