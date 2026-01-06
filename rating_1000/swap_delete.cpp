#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    ll count_0 = 0;
    ll count_1=0;
    ll n = s.size();
    for(ll i =0;i<n;i++){
        if(s[i]=='0') count_0++;
        else count_1++;
    }
    ll cost =0;
    for(ll i =0;i<n;i++){
       if(s[i]=='0' && count_1>0){
            count_1--;
            cost++;
        }
        else if(s[i]=='1' && count_0>0){
            count_0--;
            cost++;
        }
        else break;
    }
    
    cout << n-cost << '\n';
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