// in the name of senku
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    // sorting array bob wins
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool is_sorted = 1;
    for(int i =0;i<n-1;i++){
        if(s[i]>s[i+1]){
            is_sorted=0;
            break;
        }
    }
    if(is_sorted){
        cout << "Bob" << '\n';
        return;
    }
    ll zero_cnt = 0;
    for(char c:s){
        if(c=='0') zero_cnt++;
    }
    vector<ll>idx;
    for(int i =0;i<zero_cnt;i++){
        if(s[i]=='1'){
            idx.push_back(i+1);
        }
    }
    for(int i =zero_cnt;i<n;i++){
        if(s[i]=='0'){
            idx.push_back(i+1);
        }
    }

    cout << "Alice"<<'\n';
    cout << idx.size()<<'\n';
    for(auto it:idx) cout << it << ' ';
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