#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,r,b;
    cin >> n >> r >> b;
    string s;
    ll b_t = r/(b+1);
    ll segments = r%(b+1);
    for(int i =0;i<segments;i++) cout << string(b_t+1,'R') << 'B';
    for(int i = segments;i<b;i++) cout << string(b_t,'R') << 'B';
    cout << string(b_t,'R');
    cout << "\n";
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