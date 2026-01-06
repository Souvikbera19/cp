#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    for(int i =0;i+1<s.size();i++){
        if((s[i]=='>' || s[i]=='*')&&(s[i+1]=='<' || s[i+1]=='*')){
            cout << -1 << "\n";
            return;
        }
    }
    ll count_l = 0;
    ll count_r = 0;
    for(int i =0;i<s.size();i++){
        if(s[i]=='<') count_l++;
        else if(s[i]=='>') count_r++;
    }
    cout << ((count_l>count_r)?count_l+1:count_r+1) << "\n";

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